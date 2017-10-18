#ifndef _Object_h_
#define _Object_h_

#include <defines.h>

#include <system/type_info.h>
#include <system/reflection.h>
#include <system/shared_ptr.h>

#include <system/cycles_detection.h>
#include <system/refcount.h>

#ifdef __DBG_TOOLS
#include <stack>
#include <set>
#include <fstream>
#endif

#include <type_traits>
#include <string>
#include <list>
#include <utility>
#include <map>
#include <memory>
#include <cmath>
#include <mutex>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/thread/recursive_mutex.hpp>
#endif


namespace boost {
    ASPOSECPP_3RD_PARTY_CLASS(recursive_mutex);
}


namespace System
{
#if defined(__DBG_FOR_EACH_MEMEBR)
    namespace DBG {
        struct for_each_member_visitor;
    }
#endif

#if defined(ENABLE_CYCLES_DETECTION) || defined(ENABLE_CYCLES_DETECTION_EXT)
    namespace Debug { class CyclesInfo; }
#endif

    class WeakPtrCounter;
    class String;

    class Object
    {
    public:
        typedef SharedPtr<Object> ptr;

        Object();
        virtual ~Object();

        // the following 2 members needed for MemberwiseClone()
        Object(Object const& x);
        Object& operator = (Object const& x){ return *this; } // does nothing

#ifdef ENABLE_EXTERNAL_REFCOUNT
        ObjectHolder::RefCount* GetRefCount()
        {
            return m_refCount.get();
        }
        inline int AddSharedRef()
        {
            return m_refCount->Add();
        }
        inline int SharedCount() const
        {
            return m_refCount->Count();
        }
#else
        inline int AddSharedRef()
        {
            assert(0 <= m_nSharedRefs);
            return ++m_nSharedRefs;
        }
        int SharedCount() const;
#endif
        int ReleaseSharedRef();

        void Lock();
        void Unlock();

        virtual bool Equals(ptr obj);

        static bool ReferenceEquals(ptr const& objA, ptr const& objB)
        {
            return objA == objB;
        }

        template<typename T>
        static typename std::enable_if<!IsSharedPtr<T>::value, bool>::type ReferenceEquals(T const& objA, T const& objB)
        {
            return &objA == &objB;
        }

        template<typename T1, typename T2>
        static typename std::enable_if<IsSharedPtr<T1>::value && IsSharedPtr<T2>::value, bool>::type Equals(T1 const& objA, T2 const& objB)
        {
            return objA == objB || (objA.get() != nullptr && objB.get() != nullptr && objA->Equals(objB));
        }

        template<typename T1, typename T2>
        static typename std::enable_if<!IsSharedPtr<T1>::value && !IsSharedPtr<T2>::value, bool>::type Equals(T1 const& objA, T2 const& objB)
        {
            return objA == objB;
        }

        virtual int GetHashCode() const;
        virtual String ToString() ASPOSE_CONST;

        // Default implementation throws NotImplemented exception!
        virtual ptr MemberwiseClone() const;

        static const TypeInfo& Type()
        {
            return *static_holder<ThisTypeInfo>::GetValue();
        }

        virtual const TypeInfo& GetType() const;
        virtual bool Is(const TypeInfo& targetType) const;

        static inline void __FreeStaticPointers() {}
        void __FreePointers();

#ifdef __DBG_GARBAGE_COLLECTION
        static decltype(sizeof(int)) __collectGarbage(bool free = false, bool report = true, int generation = 0);
#endif


#ifdef ENABLE_CYCLES_DETECTION_EXT
        static void ObjectCollection_Begin();
        static void ObjectCollection_End(bool show_all = false,
                                         unsigned int* total_objects = nullptr,
                                         unsigned int* circular_refs = nullptr);
#endif // ENABLE_CYCLES_DETECTION_EXT


    protected:
        struct shared_members_type {
            std::list<std::pair<const char*, System::ObjectHolder*>> m_sharedMembers;
            std::list<std::pair<const char*, System::Object*>> m_valueMembers;
            template <class T>
            typename std::enable_if<!IsSharedPtr<T>::value && !std::is_base_of<Object, T>::value, void>::type Add(const char*, T&)
            {}
            template <class T>
            typename std::enable_if<!IsSharedPtr<T>::value && std::is_base_of<Object, T>::value, void>::type Add(const char* name, T &member)
            {
                m_valueMembers.push_back(std::make_pair(name, (Object*)&member));
            }
            template <class T>
            typename std::enable_if<IsSharedPtr<T>::value, void>::type Add(const char* name, T &member)
            {
                if (member != nullptr)
                    m_sharedMembers.push_back(std::make_pair(name, (ObjectHolder*)&member));
            }
            std::list<std::pair<const char*, System::ObjectHolder*>> GetDirectAndIndirectHolders() const
            {
                auto result = m_sharedMembers;
                for (auto& member : m_valueMembers)
                {
                    auto memberShared = member.second->GetSharedMembers();
                    auto memberData = memberShared.GetDirectAndIndirectHolders();
                    result.insert(result.begin(), memberData.begin(), memberData.end());
                }
                return result;
            }
        };

        virtual shared_members_type GetSharedMembers();
        void IncSelfReference();
        void DecSelfReference();

        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<!System::IsSharedPtr<Value>::value && !System::detail::is_a<Value, std::pair>::value, void>::type
            PopulateSharedMembers(Object::shared_members_type& /*data*/, const char* /*name*/, Container& /*container*/)
        {
            /* Nothing to do here, see specialization below */
        }
        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<System::IsSharedPtr<Value>::value, void>::type PopulateSharedMembers(Object::shared_members_type& data, const char* name, Container& container)
        {
            for (auto& item : container)
                data.Add(name, item);
        }
        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSharedPtr<typename Value::first_type>::value && !System::IsSharedPtr<typename Value::second_type>::value, void>::type
            PopulateSharedMembers(Object::shared_members_type& data, const char* /*name*/, Container& container)
        {
            /* Nothing to do here - we have map with neither key nor value being a shared ptr */
        }
        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSharedPtr<typename Value::first_type>::value && !System::IsSharedPtr<typename Value::second_type>::value, void>::type
            PopulateSharedMembers(Object::shared_members_type& data, const char* name, Container& container)
        {
            for (auto& item : container)
            {
                data.Add(name, item.first);
            }
        }
        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<System::detail::is_a<Value, std::pair>::value && !System::IsSharedPtr<typename Value::first_type>::value && System::IsSharedPtr<typename Value::second_type>::value, void>::type
            PopulateSharedMembers(Object::shared_members_type& data, const char* name, Container& container)
        {
            for (auto& item : container)
            {
                data.Add(name, item.second);
            }
        }
        template <class Container, typename Value = typename Container::value_type>
        typename std::enable_if<System::detail::is_a<Value, std::pair>::value && System::IsSharedPtr<typename Value::first_type>::value && System::IsSharedPtr<typename Value::second_type>::value, void>::type
            PopulateSharedMembers(Object::shared_members_type& data, const char* name, Container& container)
        {
            for (auto& item : container)
            {
                data.Add(name, item.first);
                data.Add(name, item.second);
            }
        }

        template <class T, class Check = decltype(std::declval<T*>()->__FreePointers())>
        static std::true_type __SupportsFreePointers(T*);
        static std::false_type __SupportsFreePointers(...);
        template <class T>
        using supports_free_pointers = decltype(__SupportsFreePointers(std::declval<T*>()));

        template <class T>
        inline static typename std::enable_if<supports_free_pointers<T>::value, void>::type __DoFreePointers(T &t)
        {
            t.__FreePointers();
        }
        template <class T>
        inline static typename std::enable_if<!supports_free_pointers<T>::value && !std::is_fundamental<T>::value && !std::is_enum<T>::value && !std::is_const<T>::value, void>::type __DoFreePointers(const T&)
        {}
        template <class T>
        inline static typename std::enable_if<!supports_free_pointers<T>::value && !std::is_fundamental<T>::value && !std::is_enum<T>::value && std::is_const<T>::value, void>::type __DoFreePointers(T&)
        {}
        template <class T>
        inline static typename std::enable_if<std::is_fundamental<T>::value || std::is_enum<T>::value, void>::type __DoFreePointers(T)
        {}

#if defined(ENABLE_CYCLES_DETECTION) || defined(ENABLE_CYCLES_DETECTION_EXT)
        friend class Debug::CyclesInfo;
        virtual void HandleCyclesInfo(Debug::CyclesInfo &info);
        void DeleteCurrentObject(Debug::CyclesInfo &info);
#endif // ENABLE_CYCLES_DETECTION

        class LeakageDetector
        {
        public:
            LeakageDetector(Object *self, String constructorSignature);
            ~LeakageDetector();
        private:
            LeakageDetector(const LeakageDetector&) = delete;
            void operator = (const LeakageDetector&) = delete;

            Object *const m_self;
            const std::string m_signature;
            const int m_refsAtCreation;
        };

#ifdef __DBG_TOOLS
    private:
        typedef std::vector<std::wstring> v_string_t;
        typedef std::map<Object*, v_string_t> map_v_string_t;

        typedef struct { int shared_ref; v_string_t stack; } s_int_string_t;
        typedef std::stack<s_int_string_t> stack_s_int_string_t;

        static map_v_string_t s_stackTraces;
        stack_s_int_string_t m_personal_st;
        bool m_rec_personal_st;
        static uint32_t  s_stackTraceDepth;

        static void add_stack_trace(v_string_t &st, uint32_t depth);
        void add_stack_trace();
        void remove_stack_trace();

        static volatile int s_activeInstances;
        static volatile int s_instanceCounter;
        mutable int m_instanceNo;

    public:
        static void DBG_SetSTCollectState(uint32_t deep) { s_stackTraceDepth = deep; s_stackTraces.clear(); }
        static bool DBG_IsCollectState() { return !!s_stackTraceDepth; }
        static void DBG_RemainSuperNodes(uint32_t min_references);

        int  DBG_InstanceNo() const { return m_instanceNo; }
        bool DBG_RecPersonalSt() const { return m_rec_personal_st; }
        void DBG_SetInstanceNo(int no) const { m_instanceNo = no; }

        void DBG_PushStackTrace(uint32_t deep);
        void DBG_PopStackTrace();
        void DBG_ClearStackTrace();
#endif

#ifdef __DBG_FOR_EACH_MEMEBR
        virtual void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const;
        virtual const char* DBG_class_name() const { return "Object"; }
        virtual bool DBG_unknown_type() const { return true; }
#endif
    private:
        struct ThisTypeInfo : TypeInfoPtr
        {
            ThisTypeInfo()
            {
                ptr = std::make_unique<TypeInfo>(L"System::Object");
            }
        };

        typedef boost::recursive_mutex mutex;
        static mutex s_globalMutex;

        mutex* m_globalMutex; //fix for msvc dynamic-link libraries
        mutex* volatile m_objectMutex;

#ifdef ENABLE_EXTERNAL_REFCOUNT
        std::unique_ptr<ObjectHolder::RefCount> m_refCount;
#else
        Detail::RefCount m_nSharedRefs;
#endif
        inline int GetSharedRefsCount() const
        {
#ifdef ENABLE_EXTERNAL_REFCOUNT
            return m_refCount->Count();
#else
            return m_nSharedRefs;
#endif
        }

        WeakPtrCounter* m_weakPtrCounter;

        friend class WeakPtrCounter;
        WeakPtrCounter* WeakAddRef();

#ifdef _DEBUG
        mutable const std::string* m_currentConstructor;
#endif

#ifdef __DBG_GARBAGE_COLLECTION
        int m_generation;

        static bool __buildIsolationIsland(Object *&last, std::map<Object*, shared_members_type> &island, int generation);
        static void __reportIsolationIsland(const std::map<Object*, shared_members_type> &island);
        static void __freeIsolationIsland(const std::map<Object*, shared_members_type> &island);
#endif
    };

    class LockContext
    {
    public:
        LockContext(Object* lockable);
        ~LockContext();

        void unlock();

    private:
        Object* m_lockable;
    };

    // Although two floating point NaNs are defined by IEC 60559:1989 to always compare as unequal, the contract for System.Object.Equals,
    // requires that overrides must satisfy the requirements for an equivalence operator. Therefore, System.Double.Equals and System.Single.Equals
    // return True when comparing two NaNs, while the equality operator returns False in that case, as required by the standard.
    template<>
    inline bool Object::Equals<float, float>(float const& objA, float const& objB)
    {
        return (std::isnan(objA) && std::isnan(objB)) ? true : objA == objB;
    }

    template<>
    inline bool Object::Equals<double, double>(double const& objA, double const& objB)
    {
        return (std::isnan(objA) && std::isnan(objB)) ? true : objA == objB;
    }

} // namespace System

#include "system/weak_ptr.h"

namespace System
{
    inline int ObjectHolder::AddSharedRef() const
    {
#ifdef __DBG_TOOLS
#ifdef ENABLE_EXTERNAL_REFCOUNT
        if (m_refCount->IsOwnedByPointers())
#endif
            if (m_obj->DBG_RecPersonalSt()) {
                m_obj->DBG_PushStackTrace(15);
                }
#endif
#ifdef ENABLE_EXTERNAL_REFCOUNT
        return m_refCount->Add();
#else
        return m_obj->AddSharedRef();
#endif
    }

    inline int ObjectHolder::ReleaseSharedRef() const
    {
#ifdef __DBG_TOOLS
#ifdef ENABLE_EXTERNAL_REFCOUNT
        if (m_refCount->IsOwnedByPointers())
#endif
            if (m_obj->DBG_RecPersonalSt()) {
                m_obj->DBG_PushStackTrace(15);
            }
#endif
#ifdef ENABLE_EXTERNAL_REFCOUNT
        if (m_refCount->IsOwnedByPointers())
            return m_obj->ReleaseSharedRef();
        else
        {
            int result = m_refCount->Release();
            if (result == 0)
            {
                if (m_refCount->IsObjectAlive())
                {
                    assert(!"Looks like object's constructor doesn't have the IncSelfReference call");
                }
                delete m_refCount;
            }
            return result;
        }
#else
        return m_obj->ReleaseSharedRef();
#endif
    }
    inline int ObjectHolder::SharedCount() const
    {
#ifdef ENABLE_EXTERNAL_REFCOUNT
        return m_refCount->Count();
#else
        return m_obj->SharedCount();
#endif
    }
#ifdef ENABLE_EXTERNAL_REFCOUNT
    inline ObjectHolder::RefCount* ObjectHolder::GetRefCount(Object *o)
    {
        return o == nullptr ? nullptr : o->GetRefCount();
    }
#endif

    // ------------------------ casting implemetation --------------------------------

    struct InvalidCastException;
    namespace Details {
        void ThrowInvalidCastException();
        template <typename T>
        T ThrowInvalidCastException_helper()
        {
            ThrowInvalidCastException();
            return T();
        }
    }

    template <typename TTo>
    struct CastResult
    {
        typedef SharedPtr<TTo> type;
    };

    // static cast

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type StaticCast_noexcept(SharedPtr<TFrom> obj) // throw()
    {
        return obj.Is(TTo::Type()) ? System::static_pointer_cast<TTo>(obj) : SharedPtr<TTo>();
    }

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type StaticCast(SharedPtr<TFrom> obj) // throw(System::InvalidCastException)
    {
        return obj == nullptr ? typename CastResult<TTo>::type() : (obj.Is(TTo::Type()) ? System::static_pointer_cast<TTo>(obj) :
            Details::ThrowInvalidCastException_helper<typename CastResult<TTo>::type>());
    }

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type StaticCast_noexcept(WeakPtr<TFrom> obj) // throw()
    {
        return obj.Is(TTo::Type()) ? System::static_pointer_cast<TTo>(obj.lock_best_cast()) : SharedPtr<TTo>();
    }

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type StaticCast(WeakPtr<TFrom> obj) // throw(System::InvalidCastException)
    {
        return obj == nullptr ? typename CastResult<TTo>::type() : (obj.Is(TTo::Type()) ? System::static_pointer_cast<TTo>(obj.lock_best_cast()) :
            Details::ThrowInvalidCastException_helper<typename CastResult<TTo>::type>());
    }

    template<typename TTo>
    static typename CastResult<TTo>::type StaticCast(std::nullptr_t) // throw()
    {
        // to process code like System::StaticCast<System::Object>(nullptr)
        return typename CastResult<TTo>::type();
    }

    template<typename TTo, typename TFrom>
    static typename std::enable_if<!IsSharedPtr<TFrom>::value, TTo>::type StaticCast(TFrom& obj)
    {
        //it is for special cases, like exception classes
        if (!obj.Is(TTo::Type()))
            Details::ThrowInvalidCastException();
        return static_cast<TTo&>(obj);
    }

    // dynamic cast

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type DynamicCast_noexcept(SharedPtr<TFrom> obj) noexcept
    {
        return obj.Is(TTo::Type()) ? System::dynamic_pointer_cast<TTo>(obj) : SharedPtr<TTo>();
    }

    template<typename TTo, typename TFrom>
    static typename std::enable_if<!std::is_enum<TTo>::value, typename CastResult<TTo>::type>::type DynamicCast(SharedPtr<TFrom> obj) // throw(System::InvalidCastException)
    {
        return obj == nullptr ? SharedPtr<TTo>() : (obj.Is(TTo::Type()) ? System::dynamic_pointer_cast<TTo>(obj) :
            Details::ThrowInvalidCastException_helper<SharedPtr<TTo>>());
    }

    namespace Detail {
        uint64_t GetIEnumUnsignedLongLongValue(const SharedPtr<Object> &obj);
    }

    template<typename TTo, typename TFrom>
    static typename std::enable_if<std::is_enum<TTo>::value, TTo>::type DynamicCast(SharedPtr<TFrom> obj)
    {
        return static_cast<TTo>(Detail::GetIEnumUnsignedLongLongValue(obj));
    }

    template<typename TTo>
    static typename CastResult<TTo>::type DynamicCast(std::nullptr_t) noexcept
    {
        // to process code like System::DynamicCast<System::Object>(nullptr)
        return SharedPtr<TTo>();
    }

    template<typename TTo, typename TFrom>
    static typename std::enable_if<
        !IsSharedPtr<TFrom>::value && std::is_convertible<TTo, TFrom>::value /* check if TFrom is base for TTo */
        , TTo>::type DynamicCast(TFrom &obj)
    {
        return *dynamic_cast<TTo*>(&obj);
    }

    // const cast

    template<typename TTo, typename TFrom>
    static typename CastResult<TTo>::type ConstCast(SharedPtr<TFrom> obj) // throw()
    {
        return obj->Is(TTo::Type()) ? System::const_pointer_cast<TTo>(obj) : SharedPtr<TTo>();
    }

    // lock_best_cast

    template<typename T>
    inline System::SharedPtr<T> meta_lock_best_cast(System::WeakPtr<T> &from)
    {
        return from.lock_best_cast();
    }

    template<typename T>
    inline System::SharedPtr<T>& meta_lock_best_cast(System::SharedPtr<T> &from)
    {
        return from;
    }

    // cloning

    template<typename T>
    SharedPtr<Object> MemberwiseClone(T* ptr)
    {
        return MakeObject<T>(*ptr);
    }

    namespace Runtime {
        namespace CompilerServices {
            class RuntimeHelpers
            {
            public:
                template<typename T>
                static int GetHashCode(SharedPtr<T> const& obj)
                {
                    return obj->Object::GetHashCode();
                }
            };
        }
    }

#ifdef __DBG_FOR_EACH_MEMEBR
    class Object;

    namespace DBG
    {
        struct for_each_member_visitor
        {
            struct node_info
            {
                const int id;
                const std::string class_name;
                std::string member_name;
                typedef std::vector<std::string> v_string_t;
                v_string_t ref_members_name;

                node_info() :id(0) {}
                node_info(int _id) : id(_id) {}
                node_info(int _id, const char *_class_name) : id(_id), class_name(_class_name) {}
                node_info(int _id, const char *_class_name, const char *_member_name) : id(_id), class_name(_class_name), member_name(_member_name) {}

                bool operator < (const node_info &nfo) const { return id < nfo.id; }
            };

            struct node_info_ex : node_info
            {
                node_info_ex() {}
                node_info_ex(int _id) : node_info(_id) {}
                node_info_ex(int _id, const char *_class_name) : node_info(_id, _class_name) {}
                node_info_ex(int _id, const char *_class_name, const char *_member_name) : node_info(_id, _class_name, _member_name) {}

                typedef std::set<int> set_i_t;
                set_i_t back_references;

                bool has_reference() const { return !back_references.empty(); }
            };

            typedef std::set<node_info> set_ids;

            typedef std::map<node_info_ex, set_ids> map_id_ref_to_ids;

            map_id_ref_to_ids relations;

            void add_self(const Object *owner)
            {
                assert(owner);
                relations.insert(map_id_ref_to_ids::value_type(node_info_ex(owner->DBG_InstanceNo(), owner->DBG_class_name()), set_ids()));
            }

            template <typename T>
            typename std::enable_if<!IsSharedPtr<T>::value, void>::type add_member(const Object *owner, const T& member, const char *member_name) {}

            template <typename T>
            typename std::enable_if<IsSharedPtr<T>::value, void>::type add_member(const Object *owner, const T& member, const char *member_name)
            {
                assert(owner);
                map_id_ref_to_ids::iterator it = relations.find(node_info_ex(owner->DBG_InstanceNo()));
                assert(relations.end() != it);

                const Object *_member = (const Object*)member.get();

                if (_member)
                {
                    it->second.insert(node_info(_member->DBG_InstanceNo(), _member->DBG_class_name(), member_name));

                    if (relations.end() == relations.find(_member->DBG_InstanceNo())) {
                        _member->DBG_for_each_member(*this);
                    }
                }
            }

            template<typename T>
            inline void add_template_member(const Object *owner, const T *member, const char *member_name)
            {
                _add_template_member(owner, member, member_name);
            }

            void build_back_references()
            {
                std::for_each(relations.begin(), relations.end(), [this](map_id_ref_to_ids::value_type &vt)
                {
                    std::for_each(vt.second.begin(), vt.second.end(), [this, &vt](const node_info &ni)
                    {
                        map_id_ref_to_ids::iterator it = relations.find(ni.id);
                        if (relations.end() != it) {
                            const_cast<node_info_ex*>(&(*it).first)->back_references.insert(vt.first.id);
                            const_cast<node_info_ex*>(&(*it).first)->ref_members_name.push_back(ni.member_name);
                        }
                    });
                });
            }

        private:
            template<typename T>
            inline typename std::enable_if<System::IsSharedPtr<T>::value, void>::type
                _add_template_member(const Object *owner, const T *member, const char *member_name)
            {
                add_member(owner, member->get(), member_name);
            }

            template<typename T>
            inline typename std::enable_if<!System::IsSharedPtr<T>::value, void>::type
                _add_template_member(const Object *owner, const T *member, const char *member_name)
            {
                //nothing to do...
            }
        };


        template<typename T, typename U = void>
        struct is_maped_type : std::false_type {};

        template<typename T>
        struct is_maped_type<T, typename std::enable_if<std::is_same<typename T::value_type, std::pair<const typename T::key_type, typename T::mapped_type> >::value >::type > : std::true_type {};


        template<typename T, typename collectionT>
        inline typename std::enable_if<!System::IsSharedPtr<typename collectionT::value_type>::value && !is_maped_type<collectionT>::value, void>::type
            for_each_of_Object(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            //nothing to do...
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<!System::IsSharedPtr<typename collectionT::key_type>::value && !System::IsSharedPtr<typename collectionT::mapped_type>::value, void>::type
            for_each_of_Object_mapped_type(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            //nothing to do...
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<System::IsSharedPtr<typename collectionT::key_type>::value && System::IsSharedPtr<typename collectionT::mapped_type>::value, void>::type
            for_each_of_Object_mapped_type(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            //case k,m
            std::for_each(c.begin(), c.end(), [owner, &visitor](const typename collectionT::value_type &m) {
                visitor.add_member(owner, m.first, "-k"); visitor.add_member(owner, m.second, "-m");
            });
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<System::IsSharedPtr<typename collectionT::key_type>::value && !System::IsSharedPtr<typename collectionT::mapped_type>::value, void>::type
            for_each_of_Object_mapped_type(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            //case k
            std::for_each(c.begin(), c.end(), [owner, &visitor](const typename collectionT::value_type &m) {
                visitor.add_member(owner, m.first, "-k");
            });
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<!System::IsSharedPtr<typename collectionT::key_type>::value && System::IsSharedPtr<typename collectionT::mapped_type>::value, void>::type
            for_each_of_Object_mapped_type(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            //case m
            std::for_each(c.begin(), c.end(), [owner, &visitor](const typename collectionT::value_type &m) {
                visitor.add_member(owner, m.second, "-m");
            });
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<!System::IsSharedPtr<typename collectionT::value_type>::value && is_maped_type<collectionT>::value, void>::type
            for_each_of_Object(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            for_each_of_Object_mapped_type(owner, c, visitor);
        }

        template<typename T, typename collectionT>
        inline typename std::enable_if<System::IsSharedPtr<typename collectionT::value_type>::value, void>::type
            for_each_of_Object(T *owner, const collectionT &c, for_each_member_visitor &visitor)
        {
            std::for_each(c.begin(), c.end(), [owner, &visitor](const typename collectionT::value_type &m) {
                visitor.add_member(owner, m, "-");
            });
        }

        //........................................................................................

        struct object_registr
        {
        private:
            object_registr() {}
            ~object_registr() {}

            struct obj_less { bool operator () (const Object *a, const Object *b) const { return a->DBG_InstanceNo() < b->DBG_InstanceNo(); } };

        public:
            typedef std::map<const Object*, int, obj_less> objtoidx_t;
            typedef std::map<int, const Object*> idxtoobj_t;
            typedef std::set<const Object*, obj_less> set_obj_t;
            typedef std::set<int> set_ids_t;

        public:
            static object_registr& inst();

            void    add(const Object *obj) 
            {
                m_objtoidx.insert(objtoidx_t::value_type(obj, obj->DBG_InstanceNo()));
                m_idxtoobj.insert(idxtoobj_t::value_type(obj->DBG_InstanceNo(), obj));
            }

            void    remove(const Object *obj) 
            {
                const auto objtoidx = m_objtoidx.find(obj);
                if (objtoidx != m_objtoidx.end())
                    m_objtoidx.erase(objtoidx);

                const auto idxtoobj = m_idxtoobj.find(obj->DBG_InstanceNo());
                if (idxtoobj != m_idxtoobj.end())
                    m_idxtoobj.erase(idxtoobj);
            }

            const objtoidx_t& all_set() const
            {
                return m_objtoidx;
            }

            set_obj_t sub_set(const set_ids_t &ids, uint32_t n_minimum_references = 0) const
            {
                set_obj_t result;
                std::for_each(ids.begin(), ids.end(), [&result, n_minimum_references, this](int id)
                {
                    idxtoobj_t::const_iterator it = m_idxtoobj.find(id);
                    if (m_idxtoobj.end() != it)
                    {
                        const Object *o = it->second;

                        if ((uint32_t)o->SharedCount() >= n_minimum_references) {
                            result.insert(o);
                        }
                    }
                });
                return result;
            }

            set_obj_t sub_set(uint32_t n_minimum_references) const
            {
                set_obj_t result;
                std::for_each(m_objtoidx.begin(), m_objtoidx.end(), [&result, n_minimum_references](const objtoidx_t::value_type &vt)
                {
                    if ((uint32_t)vt.first->SharedCount() >= n_minimum_references) {
                        result.insert(vt.first);
                    }
                });
                return result;
            }

            set_obj_t back_trace(const set_ids_t &ids, uint32_t deep)
            {
                typedef for_each_member_visitor::map_id_ref_to_ids rmap_t;
                typedef for_each_member_visitor::node_info ni_t;
                typedef for_each_member_visitor::node_info_ex ni_ex_t;

                System::DBG::for_each_member_visitor vizitor;

                std::for_each(System::DBG::object_registr::inst().all_set().begin(), System::DBG::object_registr::inst().all_set().end(), [&vizitor]
                    (const System::DBG::object_registr::objtoidx_t::value_type &vt) {
                        vt.first->DBG_for_each_member(vizitor);
                    });
                vizitor.build_back_references();

                set_obj_t result;
                set_ids_t to_visit = ids, visited, deep_set;

                std::for_each(ids.begin(), ids.end(), [this, &result](int id)
                {
                    idxtoobj_t::const_iterator it = m_idxtoobj.find(id);
                    if (m_idxtoobj.end() != it) {
                        result.insert(it->second);
                    }
                });

                while (!to_visit.empty())
                {
                    int id = *to_visit.begin();
                    visited.insert(id);

                    rmap_t::const_iterator it = vizitor.relations.find(ni_ex_t(id));
                    if (vizitor.relations.end() != it)
                    {
                        const ni_ex_t &ni = it->first;
                        std::for_each(ni.back_references.begin(), ni.back_references.end(), [&vizitor, &to_visit, &visited, &deep_set, &result, deep, this](int id)
                            {
                                if (visited.end() == visited.find(id))
                                {
                                    result.insert(m_idxtoobj.find(id)->second);
                                    to_visit.insert(id);
                                    if (deep > 0) {
                                        rmap_t::const_iterator it_deep = vizitor.relations.find(ni_ex_t(id));
                                        if (vizitor.relations.end() != it_deep) {
                                            std::for_each(it_deep->second.begin(), it_deep->second.end(), [&deep_set](const ni_t &ni) { deep_set.insert(ni.id); });
                                        }
                                    }
                                }
                            }
                        );
                    }

                    --deep;

                    to_visit.erase(id);
                }

                std::for_each(deep_set.begin(), deep_set.end(), [&result, this](int id) { result.insert(m_idxtoobj.find(id)->second); });

                return result;
            }

            void renumber_objects()
            {
                m_idxtoobj.clear();

                int index = 1;
                for (auto &pair : m_objtoidx)
                {
                    pair.first->DBG_SetInstanceNo(index);
                    pair.second = index;
                    m_idxtoobj[index] = pair.first;
                    ++index;
                }
            }

            void clear()
            {
                m_objtoidx.clear();
                m_idxtoobj.clear();
            }

        private:
            objtoidx_t m_objtoidx;
            idxtoobj_t m_idxtoobj;
        };

        //........................................................................................

        void DBG_build_graphviz_script(std::ostream &o, System::DBG::for_each_member_visitor &visitor, bool skip_singleton_nodes = true);
        void DBG_tiernan_all_cycles(std::istream &i, std::ostream &o);
    }

#endif

} // namespace System

typedef System::Object object;

#endif // _Object_h_
