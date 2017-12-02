#ifndef _aspose_system_array_h_
#define _aspose_system_array_h_

#include <system/details/collections_helper.h>
#include <system/details/equality_helper.h>
#include <system/object.h>
#include <system/collections/icomparer.h>
#include <system/collections/ienumerable.h>
#include <system/collections/ilist.h>
#include <system/exceptions.h>
#include <system/collections/algorithms.h>
#include <system/converter.h>
#include <system/predicate.h>
#include <system/action.h>
#include <system/select_type.h>
#include <system/cycles_detection.h>

#include <fwd.h>

#include <map>
#include <vector>
#include <functional>
#include <initializer_list>
#include <utility>
#include <limits>

#undef min
#undef max

namespace System
{
    template<typename T> class Array;

    struct EmptyArrayInitializer{ EmptyArrayInitializer(){} };

    template<typename T>
    class ArrayPtr : public SharedPtr<Array<T>>
    {
    public:
        using ValueType = T;
        using UnderlyingType = typename System::Details::SelectType<T>::type;
        using ArrayType = Array<T>;
        using BaseType = SharedPtr<Array<T>>;

        ArrayPtr() {}
        ArrayPtr(std::nullptr_t) {} // requied to translate byte[] temp; temp = null;
        ArrayPtr(const SharedPtr<Array<T>>& obj) : BaseType(obj) { }
        ArrayPtr(EmptyArrayInitializer) : BaseType(new Array<T>(0)) { }

        template<class Y>
        explicit ArrayPtr(const SharedPtr< Array<SharedPtr<Y>> >& src) : BaseType(new Array<T>(src->get_Length()))
        {
            std::copy(src->data().begin(), src->data().end(), (*this)->data().begin());
        }

        UnderlyingType& operator[] (int idx) const
        {
            return (this->get()->operator[])(idx);
        }

        UnderlyingType& operator[] (int idx)
        {
            return (this->get()->operator[])(idx);
        }
    };

    typedef System::ArrayPtr<uint8_t> ByteArrayPtr;

    template<typename T>
    ArrayPtr<T> MakeArray(std::initializer_list<T> init)
    {
#ifdef ENABLE_EXTERNAL_REFCOUNT
        ObjectHolder::RefCount::NextOwnedByPointers() = true;
#endif
        return ArrayPtr<T>(new Array<T>(init));
    }

    template<class T, class ...Args>
    ArrayPtr<T> MakeArray(Args&&... args)
    {
#ifdef ENABLE_EXTERNAL_REFCOUNT
        ObjectHolder::RefCount::NextOwnedByPointers() = true;
#endif
        return ArrayPtr<T>(new Array<T>(std::forward<Args>(args)...));
    }

    template<class X>
    bool operator ==(ArrayPtr<X> const& x, std::nullptr_t)
    {
        return (nullptr == x.get());
    }

    template<class X>
    bool operator ==(std::nullptr_t, ArrayPtr<X> const& x)
    {
        return (nullptr == x.get());
    }

    template<class X>
    bool operator !=(ArrayPtr<X> const& x, std::nullptr_t)
    {
        return (nullptr != x.get());
    }

    template<class X>
    bool operator !=(std::nullptr_t, ArrayPtr<X> const& x)
    {
        return (nullptr != x.get());
    }

    template<typename T>
    class Array
        : virtual public Object
        , public System::Collections::Generic::IList<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Array<T>, System::BaseTypesInfo<System::Object>);
    public:
        using ValueType = T;
        using UnderlyingType = typename System::Details::SelectType<T>::type;

    protected:
        typedef std::vector<UnderlyingType> vector_t;
        vector_t m_data;
        DEFINE_GET_SHARED_MEMBERS(m_data)

    public:
        typedef SharedPtr<Collections::Generic::IEnumerable<T>> EnumerablePtr;
        typedef SharedPtr<Collections::Generic::IEnumerator<T>> EnumeratorPtr;

        class Enumerator : virtual public Object, public Collections::Generic::IEnumerator<T>
        {
            RTTI_INFO_TEMPLATE_CLASS(Array<T>::Enumerator, System::BaseTypesInfo<System::Object>);

        private:

            SharedPtr<Array<T>> m_array;
            int64_t m_idx;

        public:

            Enumerator(const SharedPtr<Array<T>>& arr) : m_array(arr), m_idx(-1) { }

            virtual ~Enumerator() {}

            virtual T get_Current() ASPOSE_CONST override
            {
                return (m_idx < 0 || m_idx >= (int64_t)m_array->m_data.size())
                    ? UnderlyingType()
                    : m_array->m_data[(size_t)m_idx];
            }

            virtual bool MoveNext() override
            {
                if (m_idx < (int64_t)m_array->m_data.size())
                    m_idx++;

                return m_idx < (int64_t)m_array->m_data.size();
            }

            virtual void Reset() override
            {
                m_idx = -1;
            }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                visitor.add_member(this, m_array.get(), "m_array");
            }

            const char* DBG_class_name() const override { return "Array<T>::Enumerator"; }
            bool DBG_unknown_type() const override { return false; }
#endif

        protected:
            virtual Object::shared_members_type GetSharedMembers() override
            {
                Object::shared_members_type result = Object::GetSharedMembers();
                result.Add("System::Array<T>::Enumerator::m_array", m_array);
                return result;
            }
        };

        Array() {}

        Array(int count, const T& init = T()) : m_data(count, init) { }

        Array(int count, const T inits[]) : m_data(count)
        {
            for (int i = 0; i < count; ++i)
                m_data[i] = inits[i];
        }

        Array(std::vector<T>&& value) : m_data(std::move(value)) {}
        Array(const std::vector<T> &assgn) : m_data(assgn) {}

        Array(std::initializer_list<UnderlyingType> init) : m_data(init) {}
        Array(std::initializer_list<bool> init)
        {
            for (auto it = init.begin(); it != init.end(); ++it)
                m_data.push_back(*it);
        }

        // IEnumerable<T> interface

        virtual EnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(std::move(MakeSharedPtr(this)));
        }

        // end of IEnumerable<T> interface

        // ICollection<T> interface
        // Note: members which add, insert, or remove elements throw NotSupportedException.

        virtual int get_Count() const override
        {
            return get_Length();
        }

        virtual void Add(const T&) override
        {
            throw NotSupportedException(L"Array as ICollection<T>::Add");
        }

        virtual void Clear() override
        {
            throw NotSupportedException(L"Array as ICollection<T>::Clear");
        }

private:
        // Determine that UnderlyingType has the operator==() by SFINAE
        template <typename Q = T>
        auto ContainsImpl(const Q* item) const -> decltype(std::declval<UnderlyingType>() == *item, void(0), bool())
        {
            return std::find_if(m_data.begin(), m_data.end(),
                                [&item](const T& value) { return Details::AreEqual(value, *item); }) != m_data.end();
        }

        bool ContainsImpl(...) const
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }
public:
        virtual bool Contains(const T& item) const override
        {
            return ContainsImpl(&item);
        }

        virtual bool Remove(const T&) override
        {
            throw NotSupportedException(L"Array as ICollection<T>::Remove");
        }

        // Returns True when you cast or converted to an ICollection<T> object,
        // even though individual array elements can be modified.
        virtual bool get_IsReadOnly() const override
        {
            return true;
        }

        virtual void CopyTo(ArrayPtr<T> arr, int arrayIndex) override
        {
            this->CopyTo<T>(arr, static_cast<int64_t>(arrayIndex));
        }

        // end of ICollection<T> interface

        // IList<T> interface
private:
        // Determine that UnderlyingType has the operator==() by SFINAE
        template <typename Q = T>
        auto IndexOfImpl(const Q* item) const -> decltype(std::declval<UnderlyingType>() == *item, void(0), int())
        {
            auto it = std::find_if(m_data.begin(), m_data.end(), [&item](const T& value) { return Details::AreEqual(value, *item); });

            return (it != m_data.end()) ? static_cast<int>(it - m_data.begin()) : -1;
        }

        int IndexOfImpl(...) const
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

public:
        virtual int IndexOf(const T& item) const override
        {
            return IndexOfImpl(&item);
        }

        virtual void Insert(int, const T&) override
        {
            throw NotSupportedException(L"Array as IList<T>::Insert");
        }

        virtual void RemoveAt(int) override
        {
            throw NotSupportedException(L"Array as IList<T>::RemoveAt");
        }

        virtual T idx_get(int index) const override
        {
            return operator[](index);
        }

        virtual void idx_set(int index, T value) override
        {
            operator[](index) = value;
        }

        // end of IList<T> interface

        ArrayPtr<T> Init(const T inits[])
        {
            for (size_t i = 0; i < m_data.size(); ++i)
                m_data[i] = inits[i];

            return MakeSharedPtr(this);
        }

        void Initialize()
        {
            for (size_t i = 0; i < m_data.size(); ++i)
                m_data[i] = T();
        }


        UnderlyingType& operator[](int index)
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            return m_data[index];
        }

        UnderlyingType const& operator[](int index) const
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            return m_data[index];
        }

        ArrayPtr<T> Clone()
        {
            System::ArrayPtr<T> clone = System::MakeObject< System::Array<T> >(static_cast<int>(m_data.size()));
            std::copy(m_data.begin(), m_data.end(), clone->data().begin());
            return clone;
        }

        static int BinarySearch(System::ArrayPtr<T> arr, const T &item)
        {
            return Collections::Generic::_net_binnary_search(arr->m_data, 0, arr->m_data.size(), item);
        }

        int GetLength(int dimension)
        {
            return static_cast<int>(GetLongLength(dimension));
        }

        int64_t GetLongLength(int dimension)
        {
            return upper_bound(m_data, dimension) + 1;
        }

        int GetLowerBound(int dimension) const
        {
            return 0;
        }

        int GetUpperBound(int dimension)
        {
            return upper_bound(m_data, dimension);
        }

        template <typename InputType, typename OutputType>
        static ArrayPtr<OutputType> ConvertAll(ArrayPtr<InputType> input_array, Converter<InputType, OutputType> converter)
        {
            if (!input_array)
            {
                throw System::ArgumentNullException(L"arr");
            }

            if (converter.IsNull())
            {
                throw System::ArgumentNullException(L"converter");
            }

            System::ArrayPtr<OutputType> newArray = System::MakeObject< System::Array<OutputType> >(input_array->get_Length());
            for (int i = 0; i < input_array->get_Length(); i++)
            {
                newArray[i] = converter(input_array[i]);
            }
            return newArray;
        }

        template <typename InputType, typename OutputType>
        static ArrayPtr<OutputType> ConvertAll(ArrayPtr<InputType> input_array, std::function<OutputType(InputType)> converter)
        {
            return ConvertAll(input_array, Converter<InputType, OutputType>(converter));
        }

        static int FindIndex(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(L"arr or match");
            }

            for (int i = 0; i < arr->get_Length(); i++)
            {
                if (match(arr[i]))
                    return i;
            }
            return -1;
        }

        static T Find(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(L"arr or match");
            }

            for (auto val: arr->m_data)
                if (match(val))
                    return val;
            return T();
        }

        int32_t get_Rank() const { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

        int32_t get_Length() const
        {
            //TODO IF the array is multidimensional THEN OverflowException
            const int64_t len64 = get_LongLength();

            if (len64 > std::numeric_limits<int32_t>::max()) {
                throw OverflowException();
            }
            return static_cast<int32_t>(len64);
        }

        int64_t get_LongLength() const
        {
            return GetSizeTLength();
        }

        size_t GetSizeTLength() const
        {
            return recursive_size(m_data);
        }

        int Count() const { return get_Length(); }

        template<typename DstType>
        void CopyTo(const ArrayPtr<DstType> &dstArray, int64_t dstIndex) const
        {
            this->CopyTo(dstArray, 0, dstIndex, GetSizeTLength());
        }

        template<typename DstType>
        void CopyTo(const ArrayPtr<DstType> &dstArray, int64_t srcIndex, int64_t dstIndex, int64_t count) const
        {
            using namespace Collections::Generic::Details;

            if (!dstArray) {
                throw ArgumentNullException(L"dstArray");
            }
            if (srcIndex < 0 || dstIndex < 0 || count < 0) {
                throw ArgumentOutOfRangeException(L"srcIndex, dstIndex or count");
            }
            if (IsOutOfSize(srcIndex + count, m_data)
                || IsOutOfSize(dstIndex + count, dstArray->data())) {
                throw ArgumentException(L"srcIndex, dstIndex or count");
            }

            // casts are safe because bounds have already checked.

            if ((void*)(dstArray.get()) == (void*)(this) && dstIndex > srcIndex && dstIndex < srcIndex + count)
            {
                std::copy_backward(
                    m_data.begin() + (size_t)srcIndex
                    , m_data.begin() + (size_t)srcIndex + (size_t)count
                    , dstArray->data().begin() + (size_t)dstIndex + (size_t)count
                );
            }
            else
            {
                std::copy(
                    m_data.begin() + (size_t)srcIndex
                    , m_data.begin() + (size_t)srcIndex + (size_t)count
                    , dstArray->data().begin() + (size_t)dstIndex
                );
            }
        }

        static void ForEach(const ArrayPtr<T>& arr, System::Action<T> action)
        {
            if (action.IsNull())
                throw ArgumentNullException(L"action");

            for (auto val : arr->m_data)
                action(val);
        }

        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value)
        {
            return IndexOf(arr, value, 0);
        }

        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value, int startIndex)
        {
            return IndexOf(arr, value, startIndex, arr->get_Length() - startIndex);
        }

        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(L"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }

            typename std::vector<ArrayType>::const_iterator begin = arr->data().begin() + startIndex;
            typename std::vector<ArrayType>::const_iterator end = begin + count;
            typename std::vector<ArrayType>::const_iterator it =
                std::find_if(begin, end, [&value](const ArrayType& item) { return Details::AreEqual(item, value); });

            return (it != end) ? static_cast<int>(it - arr->data().begin()) : -1;
        }

        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& arr, const ValueType& value, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(L"arr");
            }
            if (startIndex < 0 || count < 0
                || IsOutOfSize(startIndex, arr->data()) || IsOutOfSize(count, arr->data())
                || (startIndex - count + 1) < 0) {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }
            auto rbegin = arr->data().rbegin() + arr->data().size() - startIndex - 1;
            auto rend = rbegin + count;
            auto rit = std::find_if(rbegin, rend, [&value](const ArrayType& item) { return Details::AreEqual(item, value); });

            return (rit != rend) ? rit.base() - arr->data().begin() - 1 : -1;
        }

        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& items, const ValueType& value, int startIndex)
        {
            return LastIndexOf(items, value, startIndex, (items->get_Length() == 0) ? 0 : startIndex + 1);
        }

        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& items, const ValueType& value)
        {
            return LastIndexOf(items, value, items->get_Length() - 1, items->get_Length());
        }

        template<typename Type>
        static void Clear(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(L"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }

            for (auto i = 0; i < count; ++i)
                arr->data().at(startIndex + i) = Type();
        }

        template<typename SrcType, typename DstType>
        static void Copy(const ArrayPtr<SrcType> &srcArray,
            const ArrayPtr<DstType> &dstArray, int64_t count)
        {
            if (!srcArray) {
                throw ArgumentNullException(L"srcArray");
            }
            srcArray->CopyTo(dstArray, 0, 0, count);
        }

        template<typename SrcType, typename DstType>
        static void Copy(const ArrayPtr<SrcType> &srcArray, int64_t srcIndex,
            const ArrayPtr<DstType> &dstArray, int64_t dstIndex, int64_t count)
        {
            if (!srcArray) {
                throw ArgumentNullException(L"srcArray");
            }
            srcArray->CopyTo(dstArray, srcIndex, dstIndex, count);
        }

        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr)
        {
            std::sort(arr->m_data.begin(), arr->m_data.end());
        }

        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(L"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }

            typename std::vector<Type>::iterator begin = arr->data().begin() + startIndex;
            typename std::vector<Type>::iterator end = begin + count;

            std::sort(begin, end);
        }

        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr, SharedPtr<System::Collections::Generic::IComparer<T>> comparator)
        {
            Collections::Generic::ComparerAdapter<T> adapter(comparator);
            std::sort(arr->m_data.begin(), arr->m_data.end(), adapter);
        }

        template<typename TKey, typename TValue>
        static void Sort(ArrayPtr<TKey>& keys, ArrayPtr<TValue>& items, int index, int length)
        {
            if (keys == nullptr)
                throw ArgumentNullException(L"keys");
            if (index < 0 || length < 0)
                throw ArgumentOutOfRangeException(length < 0 ? L"length" : L"index");
            if (index + length > keys->Count() || (items != nullptr && index + length > items->Count()))
                throw ArgumentException();

            if (items == nullptr)
            {
                typename std::vector<TKey>::iterator keys_begin = keys->m_data.begin() + index;
                typename std::vector<TKey>::iterator keys_end = keys_begin + length;

                std::sort(keys_begin, keys_end);
            }
            else
            {
                // Sorting keys and items via multimap
                std::multimap<TKey, TValue> map;
                for (int i = index; i < index + length; ++i)
                    map.insert(std::make_pair(keys[i], items[i]));

                auto map_iter = map.begin();
                for (int i = index; (i < index + length) && (map_iter != map.end()); ++i, ++map_iter)
                {
                    keys[i] = map_iter->first;
                    items[i] = map_iter->second;
                }
            }
        }

        template<typename Type>
        static void Reverse(ArrayPtr<Type> &arr)
        {
            std::reverse(arr->m_data.begin(), arr->m_data.end());
        }

        template<typename Type>
        static void Reverse(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(L"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(L"startIndex or count");
            }

            std::reverse(arr->m_data.begin() + startIndex, arr->m_data.begin() + startIndex + count);
        }

        template<typename Type>
        static void Resize(ArrayPtr<Type> &arr, int new_size)
        {
            if (new_size < 0)
                throw ArgumentOutOfRangeException(L"new_size");

            if (arr)
                arr->m_data.resize((typename vector_t::size_type)new_size);
            else
                arr = MakeObject<Array<T>>(new_size);
        }

        void SetValue(const T &value, int index)
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(L"index");
            }
            m_data[index] = value;
        }

        vector_t& data() { return m_data; }

        const vector_t& data() const { return m_data; }

        typename vector_t::pointer data_ptr() // VS2013 std::vector has no data() member
        {
            if(m_data.empty())
                return nullptr;

            return &m_data[0];
        }

        const UnderlyingType * data_ptr() const { return data_ptr(); }

        // ICollection interface

        SharedPtr<Object> get_SyncRoot()
        {
            return System::MakeSharedPtr(this);
        }

        // int get_Count() const; - see ICollection<T> interface
        // void Add(const T& item); - see ICollection<T> interface
        // void Clear(); - see ICollection<T> interface
        // bool Contains(const T& item) const; - see ICollection<T> interface
        // bool Remove(const T& item); - see ICollection<T> interface

        // IList interface

        // int IndexOf(const T& item) const; - see IList<T> interface
        // void Insert(int index, const T& item); - see IList<T> interface
        // void RemoveAt(int index); - see IList<T> interface

        // IEnumerable interface
        UnderlyingType Min() const
        {
            return *std::min_element(m_data.cbegin(), m_data.cend());
        }

        UnderlyingType Max() const
        {
            return *std::max_element(m_data.cbegin(), m_data.cend());
        }

        static bool Exists(ArrayPtr<T> arr, std::function<bool(T)> match)
        {
            for (int i = 0; i < arr->get_Length(); i++)
            {
                if (match(arr[i]))
                    return true;
            }
            return false;
        }

private:
        template <typename ErrType>
        static int upper_bound(ErrType arr, int dim)
        {
            throw System::IndexOutOfRangeException();
        }

        template <typename VType>
        static int upper_bound(std::vector<VType> arr, int dim)
        {
            if (!dim)
                return (int)arr.size() - 1;

            if (!arr.size())
                return -1;

            return upper_bound(arr[0], dim - 1);
        }

        template <typename U>
        static size_t recursive_size(const std::vector<U>& v)
        {
            return v.size();
        }

        template <typename U>
        static size_t recursive_size(const std::vector<std::vector<U>>& v)
        {
            size_t rv = 0;
            for (const auto &i : v)
                rv += recursive_size(i);

            return rv;
        }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                DBG::for_each_of_Object(this, m_data, visitor);
            }

            const char* DBG_class_name() const override { return "Array<T>"; }
            bool DBG_unknown_type() const override { return false; }
#endif
    };

    template <typename TTo>
    struct CastResult<Array<TTo>>
    {
        typedef ArrayPtr<TTo> type;
    };


} // namespace System

#endif // _aspose_system_array_h_
