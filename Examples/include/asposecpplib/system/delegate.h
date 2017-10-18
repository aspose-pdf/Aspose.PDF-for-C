#ifndef _aspose_system_function_h_
#define _aspose_system_function_h_

#include "shared_ptr.h"
#include "exceptions.h"
#include <utility>
#include <memory>
#include <functional>

namespace System
{
    template<class Unused>
    class Delegate;

    template <class ReturnType, class... ArgumentTypes>
    class Delegate <ReturnType(ArgumentTypes...)>
    {

    public:
        Delegate() = default;

        // noncopyable
        Delegate(const Delegate&) = delete;
        Delegate& operator=(const Delegate&) = delete;

        // movable
        Delegate(Delegate&& o) : m_invoker(std::move(o.m_invoker)) {}
        Delegate& operator=(Delegate&& o) { m_invoker = std::move(o.m_invoker); }

        // free or static member function
        template<class T>
        Delegate(T function, typename std::enable_if<!std::is_bind_expression<T>::value>::type * = 0)
            : m_invoker( new FunctionInvoker<T>(std::move(function)) )
        {
        }

        template<class T>
        Delegate(T function, typename std::enable_if<std::is_bind_expression<T>::value>::type * = 0)
            : m_invoker( new BindInvoker<T>(function) )
        {
        }

        template<class T>
        Delegate(int functor_tag, T& functor)
            : m_invoker( new FunctorInvoker<T>(functor) )
        {
        }
        template<class T>
        Delegate(long functor_tag, T&& functor)
            : m_invoker( new BindInvoker<T>(std::move(functor)) )
        {
        }

        // member function
        template <class MemberType, class ClassType>
        Delegate(MemberType ClassType::* member, ClassType* obj)
            : m_invoker( new ClassMemberInvoker<MemberType, ClassType>(member, obj) )
        {
        }

        template <class MemberType, class ClassType>
        Delegate(MemberType ClassType::* member, const SharedPtr<ClassType>& obj)
            : m_invoker(new ClassMemberInvoker<MemberType, ClassType>(member, obj))
        {
        }

        template <class R, class... Args>
        Delegate(std::function<R(Args...)> f)
            : m_invoker( new StdFunctionInvoker<std::function<R(Args...)>>(f) )
        {
        }

        ReturnType operator()(ArgumentTypes... args)
        {
            return m_invoker->invoke(args...);
        }

        bool operator==(const Delegate& f) const
        {
            if( m_invoker == f.m_invoker )
                return true; // handles both null case and self test

            if( !m_invoker || !f.m_invoker )
                return false;

            return m_invoker->compare( *f.m_invoker.get());
        }

        bool Empty() { return m_invoker->is_empty(); }

    private:

        struct BaseInvoker
        {
            BaseInvoker(){}
            virtual ~BaseInvoker() {}
            BaseInvoker(const BaseInvoker&) = delete;
            BaseInvoker& operator=(const BaseInvoker&) = delete;

            virtual ReturnType invoke(ArgumentTypes... args) = 0;

            bool compare(const BaseInvoker& other)
            {
                if( fast_compare_object() != other.fast_compare_object() )
                    return false;

                return deep_compare(other);
            }

            size_t hash() const
            {
                return static_cast<size_t>(fast_compare_object());
            }

            virtual bool deep_compare(const BaseInvoker& other) const = 0;
            virtual const void * fast_compare_object() const = 0;
            virtual bool is_empty() const = 0;

        };

        template<class T>
        struct FunctionInvoker : public BaseInvoker
        {
            FunctionInvoker(T function) : m_function(std::move(function))
            {
                static_assert(!std::is_bind_expression<T>::value, "Bind");
                static_assert(std::is_pointer<T>::value, "Only functions and static member functions is supported, not all callable objects (functors).");
            }

            ReturnType invoke(ArgumentTypes... args)
            {
                return m_function(args...);
            }
        protected:
            const void * fast_compare_object() const override
            {
                return reinterpret_cast<const void *>(m_function);
            }

            bool deep_compare(const BaseInvoker& other) const override
            {
                auto obj = dynamic_cast<const FunctionInvoker<T>*>(&other);
                if( obj )
                    return m_function == obj->m_function;

                return false;
            }

            bool is_empty() const override { return false; }

        private:
            T m_function;
        };

        template<class T>
        struct BindInvoker : public BaseInvoker
        {
            BindInvoker(T function) : m_function(std::move(function))
            {
            }

            ReturnType invoke(ArgumentTypes... args)
            {
                return m_function(args...);
            }
        protected:
            const void * fast_compare_object() const override
            {
                return reinterpret_cast<const void *>(&m_function);
            }

            bool deep_compare(const BaseInvoker& other) const override
            {
                auto obj = dynamic_cast<const BindInvoker<T>*>(&other);
                if( obj )
                    return &m_function == &obj->m_function;

                return false;
            }

            bool is_empty() const override { return false; }

        private:
            T m_function;
        };

        template<class T>
        struct FunctorInvoker : public BaseInvoker
        {
            FunctorInvoker(T& functor) : m_functor(functor)
            {
            }

            ReturnType invoke(ArgumentTypes... args)
            {
                return m_functor(args...);
            }
        protected:
            const void * fast_compare_object() const override
            {
                return reinterpret_cast<const void *>(&m_functor);
            }

            bool deep_compare(const BaseInvoker& other) const override
            {
                auto obj = dynamic_cast<const FunctorInvoker<T>*>(&other);
                if( obj )
                    return &m_functor == &obj->m_functor;

                return false;
            }

            bool is_empty() const override { return false; }

        private:
            T& m_functor;
        };

        template<class T>
        struct StdFunctionInvoker : public BaseInvoker
        {
            StdFunctionInvoker(T function) : m_function(function)
            {
            }

            ReturnType invoke(ArgumentTypes... args)
            {
                return m_function(args...);
            }
        protected:
            const void * fast_compare_object() const override
            {
                auto ptr = m_function.template target<ReturnType(*)(ArgumentTypes...)>();
                return ptr;
            }

            bool deep_compare(const BaseInvoker& other) const override
            {
                return fast_compare_object() == other.fast_compare_object();
            }

            bool is_empty() const override { return false; }

        private:
            T m_function;
        };

        template<class MemberType, class ClassType>
        struct ClassMemberInvoker : public BaseInvoker
        {
            using ClassFunction = MemberType ClassType::*;

            ClassMemberInvoker(ClassFunction member, const SharedPtr<ClassType>& obj)
                : m_member_function(member), m_obj(obj)
            {}

            ClassMemberInvoker(ClassFunction member, ClassType* obj)
                : m_member_function(member), m_obj(obj)
            {}

            ReturnType invoke(ArgumentTypes... args)
            {
                auto * ptr = m_obj.get();
                if (ptr != nullptr)
                {
                    return (detail::cast_statically_or_dynamically<Object, ClassType>::cast(ptr)->*m_member_function)(args...);
                }

                throw NullReferenceException(L"Delegate: Object reference not set to an instance of an object.");
            }

            bool is_empty() const override { return m_obj == nullptr; }

        protected:
            const void * fast_compare_object() const override
            {
                return m_obj.get();
            }

            bool deep_compare(const BaseInvoker& other) const override
            {
                typedef ClassMemberInvoker<MemberType, ClassType> ThisType;
                auto obj = dynamic_cast<const ThisType*>(&other);
                if (obj)
                    return m_member_function == obj->m_member_function && (m_obj == obj->m_obj);

                return false;
            }

        private:
            ClassFunction m_member_function;
            WeakPtr<ClassType> m_obj;
        };

        std::unique_ptr<BaseInvoker> m_invoker;
    };

} // namespace System
#endif // _aspose_system_function_h_