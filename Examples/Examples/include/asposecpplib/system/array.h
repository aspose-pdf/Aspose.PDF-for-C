/// @file system/array.h
/// Contains definition of class System::Array, representing an array data type, and other supporting types and functions.
#ifndef _aspose_system_array_h_
#define _aspose_system_array_h_

#include <system/details/collections_helper.h>
#include <system/details/comparer_type.h>
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
#include <type_traits>

#undef min
#undef max

namespace System
{

    namespace Details {
        /// Returns a reference to the element of the specified array at the specified index.
        /// @param ptr A raw pointer to an instance of SmartPtr pointing to the array
        /// @param idx Index of the element in the array to return
        /// @returns A reference to the element of the array at the index specified by @p idx
        /// @tparam X The type of the elements in the array
        /// @tparam IdxType The type of the value specifying the element's index in the array
        template <typename X, typename IdxType>
        inline typename Array<X>::UnderlyingType& GetByIndex(const SmartPtr<Array<X>> *ptr, IdxType idx)
        {
            return (**ptr).operator[](static_cast<int>(idx));
        }

        /// Service structure to check values for being non-negative and throw OverflowException if failed.
        /// @tparam Integral Argument type.
        template <typename Integral, bool = std::numeric_limits<Integral>::is_signed>
        struct NegativeValueChecker
        {
            /// Checks value for being non-negative.
            /// @param value Value to check.
            /// @throw System::OverflowException if @p value is negative.
            static void Check(const Integral &value)
            {
                if (value < 0)
                    throw System::OverflowException(u"Negative array size");
            }
        };
        /// Specialization for unsigned values.
        /// @tparam Integral Argument type.
        template <typename Integral>
        struct NegativeValueChecker<Integral, false>
        {
            /// Checks value for being non-negative.
            static void Check(const Integral&) {}
        };

        /// Service structure to check values for fitting into int and throw OverflowException if failed.
        /// @tparam Integral Argument type.
        template <typename Integral, bool = (sizeof(Integral) > sizeof(int)) || (!std::numeric_limits<Integral>::is_signed && (sizeof(Integral) == sizeof(int)))>
        struct IntPositiveOverflowChecker
        {
            /// Checks value for fitting into int.
            /// @param value Value to check.
            /// @throw System::OverflowException if @p value exceeds int max value.
            static void Check(const Integral& value)
            {
                if (value >= static_cast<Integral>(std::numeric_limits<int>::max()))
                    throw System::OverflowException(u"Array size too big for signed integer");
            }
        };
        /// Specialization for short types.
        /// @tparam Integral Argument type.
        template <typename Integral>
        struct IntPositiveOverflowChecker<Integral, false>
        {
            /// Checks value for fitting into int.
            static void Check(const Integral &value) {}
        };

        /// Ensures value is valid for array size.
        /// @tparam Integral Array size type.
        /// @param value Value to check and cast.
        /// @return Value which is guaranteed to be valid array size.
        /// @throw OverflowException If @p value is negative or out of int bounds.
        template <typename Integral>
        int FixArraySize(const Integral &value)
        {
            NegativeValueChecker<Integral>::Check(value);
            IntPositiveOverflowChecker<Integral>::Check(value);
            return static_cast<int>(value);
        }
    }

    /// An alias for a smart pointer object that points to an array of unsigned 8-bit integers.
    typedef System::ArrayPtr<uint8_t> ByteArrayPtr;

    /// A factory function that constructs a new Array object, fills it with the elements from the 
    /// specified initialization list and returns a smart pointer pointing to the Array object.
    /// @param init The initialization list containing the elements to fill the array with
    /// @returns A smart pointer pointing to the constructed Array object
    /// @tparam T The type of elements of the Array object the function constructs
    template<typename T>
    ArrayPtr<T> MakeArray(std::initializer_list<T> init)
    {
        Detail::OwnNextObject ownershipSentry;
        Array<T> *const arr = new Array<T>(init);
        ownershipSentry.CreatedSuccessfully(arr);
        return ArrayPtr<T>(arr);
    }

    /// A factory function that constructs a new Array object passing the specified arguments to its constructor.
    /// @param args The arguments that are passed to the constructor of the Array object being constructed
    /// @returns A smart pointer pointing to the constructed Array object
    /// @tparam T The type of elements of the Array object the function constructs
    template <class T, class... Args> ArrayPtr<T> MakeArray(Args&&... args)
    {
        Detail::OwnNextObject ownershipSentry;
        Array<T>* const arr = new Array<T>(std::forward<Args>(args)...);
        ownershipSentry.CreatedSuccessfully(arr);
        return ArrayPtr<T>(arr);
    }

    /// A factory function that constructs a new Array object passing the specified arguments to its constructor.
    /// @param size Size of the array being created.
    /// @param args The arguments that are passed to the constructor of the Array object being constructed
    /// @returns A smart pointer pointing to the constructed Array object
    /// @tparam T The type of elements of the Array object the function constructs
    /// @tparam Integral Type of array size.
    template <class T, class Integral, class... Args>
    typename std::enable_if<std::is_integral<Integral>::value, ArrayPtr<T>>::type MakeArray(Integral size, Args&&... args)
    {
        Detail::OwnNextObject ownershipSentry;
        Array<T>* const arr = new Array<T>(Details::FixArraySize(size), std::forward<Args>(args)...);
        ownershipSentry.CreatedSuccessfully(arr);
        return ArrayPtr<T>(arr);
    }

    /// Class that represents an array data structure.
    /// Objects of this class should only be allocated using System::MakeArray() and System::MakeObject() functions.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    /// @tparam T Type of elements of an array
    template<typename T>
    class Array
        : virtual public Object
        , public System::Collections::Generic::IList<T>
    {
        RTTI_INFO_TEMPLATE_CLASS(System::Array<T>, System::BaseTypesInfo<System::Object>);
    public:
        /// Alias for the type of the elements of the array.
        using ValueType = T;
        /// Alias for the type used to represent each element of the array.
        using UnderlyingType = typename System::Details::SelectType<T>::type;

    protected:
        /// Type to keep information on whether to treat array elements as shared or weak pointers, if applicable.
        typedef System::Details::CollectionHelpers::ContainerPointerMode<UnderlyingType> pointer_mode_t;
        /// An alias for the type used to store the array's elements.
        typedef std::vector<UnderlyingType, typename pointer_mode_t::allocator_type> vector_t;
        /// Information on whether to treat array elements as shared or weak pointers, if applicable.
        pointer_mode_t m_pointer_mode;
        /// The storage for array's elements.
        vector_t m_data;
        DEFINE_GET_SHARED_MEMBERS(m_data)

    public:
        /// An alias for shared pointer type pointing to IEnumerable object containing elements of type @p T.
        typedef SharedPtr<Collections::Generic::IEnumerable<T>> EnumerablePtr;
        /// An alias for shared pointer type pointing to IEnumerator object containing elements of type @p T.
        typedef SharedPtr<Collections::Generic::IEnumerator<T>> EnumeratorPtr;

        /// Implements IEnumerator interface that enables enumeration of elements of an Array object.
        /// Objects of this class should only be allocated using System::MakeObject() function.
        /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
        /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
        class Enumerator : virtual public Object, public Collections::Generic::IEnumerator<T>
        {
            RTTI_INFO_TEMPLATE_CLASS(Array<T>::Enumerator, System::BaseTypesInfo<System::Object>);

        private:
            /// Shared pointer to the Array object represented by the current Enumerator object.
            SharedPtr<Array<T>> m_array;
            /// Current element's index.
            int64_t m_idx;

        public:
            /// Constructs a new Enumerator object that represents the specified array.
            /// @param arr A shared pointer to the Array object
            Enumerator(const SharedPtr<Array<T>>& arr) : m_array(arr), m_idx(-1) { }
            
            /// Destructor.
            virtual ~Enumerator() {}

            /// Returns a copy of the current element.
            virtual T get_Current() ASPOSE_CONST override
            {
                return (m_idx < 0 || m_idx >= (int64_t)m_array->m_data.size())
                    ? UnderlyingType()
                    : m_array->m_data[(size_t)m_idx];
            }

            /// Checks if the current element's index does not point to the last element in the array
            /// and advances it if id does not.
            /// @returns True if the current element's index did not point to the last element in the array before it was advanced, othrewise - false
            virtual bool MoveNext() override
            {
                if (m_idx < (int64_t)m_array->m_data.size())
                    m_idx++;

                return m_idx < (int64_t)m_array->m_data.size();
            }

            /// Resets the current element's index.
            virtual void Reset() override
            {
                m_idx = -1;
            }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
        /// Provides debug iteration throuhg container.
        /// @param visitor Visitor to apply to each element and to container itself.
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                visitor.add_member(this, m_array.get_shared(), "m_array");
            }

            /// Returns a c-string containing the name of the class the current object is instance of.
            const char* DBG_class_name() const override { return "Array<T>::Enumerator"; }
            
            /// Overrides default implementation to specify that class contains debug information.
            bool DBG_unknown_type() const override { return false; }
#endif

        protected:
            /// Provides GetSharedMember() function for container for loop references lookup.
            virtual Object::shared_members_type GetSharedMembers() override
            {
                Object::shared_members_type result = Object::GetSharedMembers();
                result.Add("System::Array<T>::Enumerator::m_array", m_array);
                return result;
            }
        };

        /// Constructs an empty array.
        Array() : m_data(m_pointer_mode.GetAllocator()) {}

        /// Filling constructor.
        /// @param count Initial size of the array
        /// @param init  The initial value used to fill the array with
        Array(int count, const T& init = T()) : m_data(count, static_cast<UnderlyingType>(init), m_pointer_mode.GetAllocator()) { }

        /// Filling constructor.
        /// @param count Initial size of the array
        /// @param inits Values to fill the array with
        Array(int count, const T inits[]) : m_data(count, static_cast<UnderlyingType>(T()), m_pointer_mode.GetAllocator())
        {
            for (int i = 0; i < count; ++i)
                m_data[i] = inits[i];
        }

        /// Move constructor.
        /// @param value std::vector, elements of which are acquired by the array
        Array(vector_t&& value) : m_data(std::move(value), m_pointer_mode.GetAllocator()) {}
        
        /// Copy constructor.
        /// @param assgn std::vector to copy values from 
        Array(const vector_t &assgn) : m_data(assgn, m_pointer_mode.GetAllocator()) {}

        /// Constructs an Array object and fills it with values copied from an std::vector object 
        /// whose values' type is the same as @p T but different from @p UnderlyingType
        /// @param value std::vector to copy the values from  
        /// @tparam Q The type of the elements of the std::vector object to copy the elements from
        template <typename Q, typename = typename std::enable_if<std::is_same<Q, T>::value && !std::is_same<std::vector<Q>, vector_t>::value, std::vector<Q>>::type>
        Array(const std::vector<Q> &value) 
            : m_data(value.begin(), value.end(), m_pointer_mode.GetAllocator()) 
        {}

        /// Constructs an Array object and fills it with values moved from an std::vector object 
        /// whose values' type is the same as @p T but different from @p UnderlyingType
        /// @param value std::vector to copy the values from  
        /// @tparam Q The type of the elements of the std::vector object to move the elements from
        template <typename Q, typename = typename std::enable_if<std::is_same<Q, T>::value && !std::is_same<std::vector<Q>, vector_t>::value, std::vector<Q>>::type>
        Array(std::vector<Q> &&value) 
            : m_data(m_pointer_mode.GetAllocator()) 
        {
            m_data.swap(value);
        }

        /// Constructs an Array object and fills it with values from the specified initializer list containing elements of @p UnderlyingType type.
        /// @param init Initializer list containing elements to fill the array with
        Array(std::initializer_list<UnderlyingType> init) : m_data(init, m_pointer_mode.GetAllocator()) {}

        /// Constructs an Array object and fills it with values from the specified initializer list containing elements of bool type.
        /// @param init Initializer list containing elements to fill the array with
        Array(std::initializer_list<bool> init, int = 0) : m_data(m_pointer_mode.GetAllocator())
        {
            for (auto it = init.begin(); it != init.end(); ++it)
                m_data.push_back(UnderlyingType(*it));
        }

        // IEnumerable<T> interface

        /// Returns a pointer to Enumerator object that provides IEnumerator interface to elements of the array represented by the current object.
        /// @returns Pointer to Enumerator object
        virtual EnumeratorPtr GetEnumerator() override
        {
            return MakeObject<Enumerator>(std::move(MakeSharedPtr(this)));
        }

        // end of IEnumerable<T> interface

        // ICollection<T> interface
        // Note: members which add, insert, or remove elements throw NotSupportedException.

        /// Returns the size of the array.
        virtual int get_Count() const override
        {
            return get_Length();
        }

        /// Not supported because the array represented by the current object is read-only.
        /// @throws NotSupportedException always
        virtual void Add(const T&) override
        {
            throw NotSupportedException(u"Array as ICollection<T>::Add");
        }

        /// Not supported because the array represented by the current object is read-only.
        /// @throws NotSupportedException always
        virtual void Clear() override
        {
            throw NotSupportedException(u"Array as ICollection<T>::Clear");
        }

        /// Makes array treat stored pointers as weak (if applicable).
        /// @param argument Should be 0 as there is only one template argument present.
        void SetTemplateWeakPtr(unsigned int argument) override
        {
            m_pointer_mode.SetWeak(argument, m_data);
        }

private:
        /// Array lookup function. Specialization for types providing operator == for comparison.
        /// @tparam Q Formal template argument for SFINAE to work.
        /// @param item Item to look for.
        /// @return True if element is found, false otherwise.
        template <typename Q = T>
        auto ContainsImpl(const Q* item) const -> decltype(std::declval<UnderlyingType>() == *item, void(0), bool())
        {
            return std::find_if(m_data.begin(), m_data.end(),
                                [&item](const T& value) { return Details::AreEqual(value, *item); }) != m_data.end();
        }
        
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        bool ContainsImpl(...) const
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }
public:
        /// Determines if the specified item is in the array.
        /// @param item Item to look for in the array
        /// @returns true if the specified item is present in the array, false otherwise
        virtual bool Contains(const T& item) const override
        {
            return ContainsImpl(&item);
        }

        /// Not supported because the array represented by the current object is read-only.
        /// @throws NotSupportedException always
        virtual bool Remove(const T&) override
        {
            throw NotSupportedException(u"Array as ICollection<T>::Remove");
        }

        // Returns True when you cast or converted to an ICollection<T> object,
        // even though individual array elements can be modified.

        /// Indicates whether the array is read-only.
        /// @returns true if the array is read-only, false otherwise.
        virtual bool get_IsReadOnly() const override
        {
            return true;
        }

        /// Copies all elements of the current array to the specefied destination array. Elements are insterted 
        /// into destination array starting at index specified by arrayIndex argument.
        /// @param arr Destination array
        /// @param arrayIndex Index in destination array to start inserting copied items at
        virtual void CopyTo(ArrayPtr<T> arr, int arrayIndex) override
        {
            this->CopyTo<T>(arr, static_cast<int64_t>(arrayIndex));
        }

        // end of ICollection<T> interface

        // IList<T> interface
private:
        /// Array lookup function. Specialization for types providing operator == for comparison.
        /// @tparam Q Formal template argument for SFINAE to work.
        /// @param item Item to look for.
        /// @return Index of element if found, otherwise -1.
        template <typename Q = T>
        auto IndexOfImpl(const Q* item) const -> decltype(std::declval<UnderlyingType>() == *item, void(0), int())
        {
            auto it = std::find_if(m_data.begin(), m_data.end(), [&item](const T& value) { return Details::AreEqual(value, *item); });

            return (it != m_data.end()) ? static_cast<int>(it - m_data.begin()) : -1;
        }
        
        /// NOT IMPLEMENTED.
        /// @throws NotImplementedException Always
        int IndexOfImpl(...) const
        {
            throw NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }

public:
        /// Determines the inedex of the first occurrence of the specified item in the array.
        /// @param item Item index of which is to be determined
        /// @returns Index of the first occurrence of the specified item if the item is found, otherwise -1
        virtual int IndexOf(const T& item) const override
        {
            return IndexOfImpl(&item);
        }

        /// Not supported because array represented by the current object is read-only.
        /// @throws NotSupportedException always
        virtual void Insert(int, const T&) override
        {
            throw NotSupportedException(u"Array as IList<T>::Insert");
        }

        /// Not supported because array represented by the current object is read-only.
        /// @throws NotSupportedException always
        virtual void RemoveAt(int) override
        {
            throw NotSupportedException(u"Array as IList<T>::RemoveAt");
        }

        /// Returns the item at the specified index.
        /// @param index Index of the item to be returned
        /// @returns The item at specified index in the array
        virtual T idx_get(int index) const override
        {
            return operator[](index);
        }

        /// Sets the specified value as the item of the array at the specified index.
        /// @param index Index to set value at
        /// @param value Value to set at specified index
        virtual void idx_set(int index, T value) override
        {
            operator[](index) = value;
        }

        // end of IList<T> interface

        /// Fills the array represented by the current object with the values from the specified array.
        /// @param inits The array to copy the values from
        /// @returns A shared pointer pointing to the current object
        ArrayPtr<T> Init(const T inits[])
        {
            for (size_t i = 0; i < m_data.size(); ++i)
                m_data[i] = inits[i];

            return MakeSharedPtr(this);
        }

        /// Fills the array with the default constructed objects of type @p T.
        void Initialize()
        {
            for (size_t i = 0; i < m_data.size(); ++i)
                m_data[i] = T();
        }

        /// Returns an item at the specified index.
        /// @param index Index of the item to return
        /// @returns A reference to an item at specified position
        UnderlyingType& operator[](int index)
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(u"index");
            }
            return m_data[index];
        }

        /// Returns an item at the specified index.
        /// @param index Index of the item to return
        /// @returns A const reference to an item at the specified position
        UnderlyingType const& operator[](int index) const
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(u"index");
            }
            return m_data[index];
        }

        /// Clones the array.
        /// @returns A pointer to a new array object containing items that are copies of items of the array reprsented by the current object.
        ArrayPtr<T> Clone()
        {
            System::ArrayPtr<T> clone = System::MakeObject< System::Array<T> >(static_cast<int>(m_data.size()));
            std::copy(m_data.begin(), m_data.end(), clone->data().begin());
            return clone;
        }

        /// Performs binary search in the sorted array.
        /// @param arr Sorted array to perform search in
        /// @param item An item to search for
        /// @returns Index of the searched item if one is found, otherwise, a negative integer that is the bitwise complement of the index of the next item greater than searched item or, if there is no greater item, the bitwise complement of the number of elements in the array.
        static int BinarySearch(System::ArrayPtr<T> arr, const T &item)
        {
            return Collections::Generic::_net_binnary_search(arr->m_data, 0, static_cast<int32_t>(arr->m_data.size()), item);
        }

        /// Returns the number of elements in the specified dimension.
        /// @param dimension A dimension the length of which to return
        /// @returns Number of elements in the specified dimension
        int GetLength(int dimension)
        {
            return static_cast<int>(GetLongLength(dimension));
        }

        /// Returns the number of elements in the specified dimension as 64-bit integer.
        /// @param dimension A dimension the length of which to return
        /// @returns A 64-bit integer representing the number of elements in specified dimension
        int64_t GetLongLength(int dimension)
        {
            return upper_bound(m_data, dimension) + 1;
        }

        /// Returns the lower bound of the specified dimension.
        /// @param dimension Dimension to return the lower bound of
        /// @returns The lower bound of the specified dimension
        int GetLowerBound(int dimension) const
        {
            return 0;
        }

        /// Returns the upper bound of the specified dimension.
        /// @param dimension Dimension to return the upper bound of
        /// @returns The upper bound of the specified dimension
        int GetUpperBound(int dimension)
        {
            return upper_bound(m_data, dimension);
        }

        /// Constructs a new Array object and fills it with elements of the specified array converted to @p OutputType type using the specified converter delegate.
        /// @param input_array An Array object
        /// @param converter A Converter object used to convert each element of the input array to equvalent values of @p OutputType type
        /// @returns A new array containing values of @p OutputType type equivalent to the values of @p input_array
        /// @tparam InputType The type of elements of input array
        /// @tparam OutputType The type of elements of the resulting array
        template <typename InputType, typename OutputType>
        static ArrayPtr<OutputType> ConvertAll(ArrayPtr<InputType> input_array, Converter<InputType, OutputType> converter)
        {
            if (!input_array)
            {
                throw System::ArgumentNullException(u"arr");
            }

            if (converter.IsNull())
            {
                throw System::ArgumentNullException(u"converter");
            }

            System::ArrayPtr<OutputType> newArray = System::MakeObject< System::Array<OutputType> >(input_array->get_Length());
            for (int i = 0; i < input_array->get_Length(); i++)
            {
                newArray[i] = converter(input_array[i]);
            }
            return newArray;
        }

        /// Constructs a new Array object and fills it with elements of the specified array converted to @p OutputType type using the specified converter function object.
        /// @param input_array An Array object
        /// @param converter A function object used to convert each element of the input array to equvalent values of @p OutputType type
        /// @returns A new array containing values of @p OutputType type equivalent to the values of @p input_array
        /// @tparam InputType The type of elements of input array
        /// @tparam OutputType The type of elements of the resulting array
        template <typename InputType, typename OutputType>
        static ArrayPtr<OutputType> ConvertAll(ArrayPtr<InputType> input_array, std::function<OutputType(InputType)> converter)
        {
            return ConvertAll(input_array, Converter<InputType, OutputType>(converter));
        }

        /// Searches for the first element in the specified array that satisfies the conditions of the specified predicate.
        /// @param arr Array to search an element in
        /// @param match A predicate that defines the conditions to match array elements against
        /// @returns The index of the first element in the array that sitisfies the conditions defined by pradicate, otherwise -1
        static int FindIndex(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(u"arr or match");
            }

            for (int i = 0; i < arr->get_Length(); i++)
            {
                if (match(arr[i]))
                    return i;
            }
            return -1;
        }

        /// Searches for the first element in the specified array that satisfies the conditions of the specified predicate.
        /// @param arr Array to search an element in
        /// @param match A predicate that defines the conditions to match array elements against
        /// @returns Copy of the first element in the array that satisfies the conditions defined by predicate, otherwise default value of type T
        static T Find(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(u"arr or match");
            }

            for (auto val: arr->m_data)
                if (match(val))
                    return val;
            return T();
        }

        /// Retrieves all the elements that match the conditions defined by the specified predicate.
        /// @param arr Array to search an elements in
        /// @param match A predicate that defines the conditions to match array elements against
        /// @returns An Array containing all the elements that match the conditions defined by the specified predicate, if found; otherwise, an empty Array.
        static System::ArrayPtr<T> FindAll(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(u"arr or match");
            }

            System::ArrayPtr<T> result = System::MakeObject<System::Array<T>>();

            for (auto val : arr->m_data)
                if (match(val))
                    result->data().push_back(val);

            return result;
        }

        /// Determines whether all elements in the specified array satisfy the conditions defined by specified predicate
        /// @param arr Array elements of which to match against the conditions
        /// @param match A predicate that defines the conditions to match array elements against
        /// @returns true if all elements of the array arr satisfy the conditions defined by predicate match, otherwise false
        static bool TrueForAll(System::ArrayPtr<T> arr, System::Predicate<T> match)
        {
            if (!arr || match.IsNull())
            {
                throw System::ArgumentNullException(u"arr or match");
            }
            for (auto val : arr->m_data)
                if (!match(val))
                    return false;
            return true;
        }

        /// NOT IMPLEMENTED.
        int32_t get_Rank() const { throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION); };

        /// Returns 32-bit integer that represents the total number of all elements in all dimensions of the array.
        /// @returns Total number of all elements in all dimensions
        int32_t get_Length() const
        {
            //TODO IF the array is multidimensional THEN OverflowException
            const int64_t len64 = get_LongLength();

            if (len64 > std::numeric_limits<int32_t>::max()) {
                throw OverflowException();
            }
            return static_cast<int32_t>(len64);
        }

        /// Returns 64-bit integer that represents the total number of all elements in all dimensions of the array.
        /// @returns Total number of all elements in all dimensions
        int64_t get_LongLength() const
        {
            return GetSizeTLength();
        }

        /// Returns an std::size_t variable that represents the total number of all elements in all dimensions of the array.
        /// @returns Total number of all elements in all dimensions
        size_t GetSizeTLength() const
        {
            return recursive_size(m_data);
        }

        /// Returns a number that represents the total number of all elements in all dimensions of the array.
        /// @returns Total number of all elements in all dimensions
        int Count() const { return get_Length(); }

        /// Copies all elements of the current array to the specefied destination array. Elements are insterted 
        /// into the destination array starting at index specified by dstIndex argument.
        /// @param dstArray Destination array
        /// @param dstIndex Index in destination array to start inserting copied items at
        /// @tparam DstType Type of elements in destination array
        template<typename DstType>
        void CopyTo(const ArrayPtr<DstType> &dstArray, int64_t dstIndex) const
        {
            this->CopyTo(dstArray, 0, dstIndex, GetSizeTLength());
        }

        /// Copies a specified number of elements from the current array starting at specified position to specefied destination array. Elements are insterted 
        /// into the destination array starting at index specified by dstIndex argument.
        /// @param dstArray Destination array
        /// @param srcIndex Index in source array to start copying items at
        /// @param dstIndex Index in destination array to start inserting copied items at
        /// @param count Number of elements to copy
        /// @tparam DstType Type of elements in destination array
        template<typename DstType>
        void CopyTo(const ArrayPtr<DstType> &dstArray, int64_t srcIndex, int64_t dstIndex, int64_t count) const
        {
            using namespace Collections::Generic::Details;

            if (!dstArray) {
                throw ArgumentNullException(u"dstArray");
            }
            if (srcIndex < 0 || dstIndex < 0 || count < 0) {
                throw ArgumentOutOfRangeException(u"srcIndex, dstIndex or count");
            }
            if (IsOutOfSize(srcIndex + count, m_data)
                || IsOutOfSize(dstIndex + count, dstArray->data())) {
                throw ArgumentException(u"srcIndex, dstIndex or count");
            }

            // casts are safe because bounds have already checked.

            if (dstArray.GetObjectOrNull() == (Object*)(this) && dstIndex > srcIndex && dstIndex < srcIndex + count)
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

        /// Performs specified action on each element of the specified array.
        /// @param arr Target array
        /// @param action The action to perform on each element of the array
        static void ForEach(const ArrayPtr<T>& arr, System::Action<T> action)
        {
            if (action.IsNull())
                throw ArgumentNullException(u"action");

            for (auto val : arr->m_data)
                action(val);
        }

        /// Determines the index of the first occurence of specified item in the array.
        /// @param arr Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @returns Index of the first occurence specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value)
        {
            return IndexOf(arr, value, 0);
        }

        /// Determines the index of the first occurence of the specified item in the array startig from the specified index.
        /// @param arr Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @param startIndex Index at which the search is started
        /// @returns Index of the first occurence of the specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value, int startIndex)
        {
            return IndexOf(arr, value, startIndex, arr->get_Length() - startIndex);
        }

        /// Determines the index of the first occurence of the specified item in a range of items of the array specified by the start index and the number of elements in the range.
        /// @param arr Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @param startIndex Index at which the search is started
        /// @param count Number of elements of the range to search in
        /// @returns Index of the first occurence of the specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int IndexOf(const ArrayPtr<ArrayType> &arr, const ValueType& value, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(u"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(u"startIndex or count");
            }

            auto begin = arr->data().begin() + startIndex;
            auto end = begin + count;
            auto it =
                std::find_if(begin, end, [&value](const ArrayType& item) { return Details::AreEqual(item, value); });

            return (it != end) ? static_cast<int>(it - arr->data().begin()) : -1;
        }

        /// Determines the index of the last occurence of the specified item in a range of items of the array specified by the start index and the number of elements in the range.
        /// @param arr Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @param startIndex Index at which the search is started
        /// @param count Number of elements of the range to search in
        /// @returns Index of the last occurence of the specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& arr, const ValueType& value, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(u"arr");
            }
            if (startIndex < 0 || count < 0
                || IsOutOfSize(startIndex, arr->data()) || IsOutOfSize(count, arr->data())
                || (startIndex - count + 1) < 0) {
                throw ArgumentOutOfRangeException(u"startIndex or count");
            }
            auto rbegin = arr->data().rbegin() + arr->data().size() - startIndex - 1;
            auto rend = rbegin + count;
            auto rit = std::find_if(rbegin, rend, [&value](const ArrayType& item) { return Details::AreEqual(item, value); });

            return (rit != rend) ? ASPOSECPP_CHECKED_CAST(int, rit.base() - arr->data().begin() - 1) : -1;
        }

        /// Determines the index of the last occurence of the specified item in the array startig from the specified index.
        /// @param items Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @param startIndex Index at which the search is started
        /// @returns Index of the last occurence of the specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& items, const ValueType& value, int startIndex)
        {
            return LastIndexOf(items, value, startIndex, (items->get_Length() == 0) ? 0 : startIndex + 1);
        }

        /// Determines the index of the last occurence of the specified item in the array.
        /// @param items Array to search the specified item in
        /// @param value Item index of which is to be determined
        /// @returns Index of the last occurence of the specified item if the item is found, otherwise -1
        /// @tparam ArrayType Type of elements in the target array
        /// @tparam ValueType type of the item to search for in the array
        template<typename ArrayType, typename ValueType>
        static int LastIndexOf(const ArrayPtr<ArrayType>& items, const ValueType& value)
        {
            return LastIndexOf(items, value, items->get_Length() - 1, items->get_Length());
        }

        /// Replaces @p count values starting at @p startIndex intedx in the specified array with default values.
        /// @param arr Target array
        /// @param startIndex Index at which to start replacing the items
        /// @param count The number of items to replace 
        /// @tparam Type Type of elements in the target array
        template<typename Type>
        static void Clear(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(u"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(u"startIndex or count");
            }

            for (auto i = 0; i < count; ++i)
                arr->data().at(startIndex + i) = Type();
        }

        /// Copies the specified number of elements from the source array to the destination array.
        /// @param srcArray Source array
        /// @param dstArray Destination array
        /// @param count The number of elements to copy
        template<typename SrcType, typename DstType>
        static void Copy(const ArrayPtr<SrcType> &srcArray,
            const ArrayPtr<DstType> &dstArray, int64_t count)
        {
            if (!srcArray) {
                throw ArgumentNullException(u"srcArray");
            }
            srcArray->CopyTo(dstArray, 0, 0, count);
        }

        /// Copies a specified number of elements from the source array starting at the specified index to the specified position in destination array.
        /// @param srcArray Source array
        /// @param srcIndex Index in the source array designating the beginning of the range of items to copy
        /// @param dstArray Destination array
        /// @param dstIndex Index in destination array to start inserting copied items at
        /// @param count The number of elements to copy
        /// @tparam SrcType Type of elements in source array
        /// @tparam DstType Type of elements in destination array
        template<typename SrcType, typename DstType>
        static void Copy(const ArrayPtr<SrcType> &srcArray, int64_t srcIndex,
            const ArrayPtr<DstType> &dstArray, int64_t dstIndex, int64_t count)
        {
            if (!srcArray) {
                throw ArgumentNullException(u"srcArray");
            }
            srcArray->CopyTo(dstArray, srcIndex, dstIndex, count);
        }

        /// Sorts elements in the specified array using default comparer.
        /// @param arr Targed array
        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr)
        {
            Sort(arr, 0, arr->get_Length());
        }

        /// Sorts a range of elements in the specified array using default comparer.
        /// @param arr Targed array
        /// @param startIndex The index designating the beginning of the range of elements to sort
        /// @param count The size of the range of elements to sort
        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(u"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(u"startIndex or count");
            }

            auto begin = arr->data().begin() + startIndex;
            auto end = begin + count;

            std::sort(begin, end, Collections::Generic::Details::ComparerType<Type>());
        }

        /// Sorts elements in the specified array using specified comparer.
        /// @param arr Targed array
        /// @param comparator IComparer<T> object used to compare elements of the array
        template<typename Type>
        static void Sort(ArrayPtr<Type> &arr, const SharedPtr<System::Collections::Generic::IComparer<T>>& comparator)
        {
            Collections::Generic::ComparerAdapter<T> adapter(comparator);
            std::sort(arr->m_data.begin(), arr->m_data.end(), adapter);
        }

        /// Sorts two arrays one containing keys and the other - corresponding items, based on the values of array contaninig keys, elements of which 
        /// are compared using operator<.
        /// @param keys Array that contains key values
        /// @param items Array that contains items that are mapped to the key values in @p keys array 
        /// @tparam TKey The type of the elements in the @p keys array
        /// @tparam TValue the type of the elements in the @p items array
        template<typename TKey, typename TValue>
        static void Sort(ArrayPtr<TKey>& keys, ArrayPtr<TValue>& items)
        {
            if (keys == nullptr)
                throw ArgumentNullException(u"keys");

            Sort(keys, items, 0, keys->get_Length());
        }

        /// Sorts two arrays one containing keys and the other - corresponding items, based on the values of array contaninig keys, elements of which 
        /// are compared using default comparer.
        /// @param keys Array that contains key values
        /// @param items Array that contains items that are mapped to the key values in @p keys array 
        /// @param index The index designating the beginnig of the range to sort
        /// @param length The number of elements in the range to sort
        /// @tparam TKey The type of the elements in the @p keys array
        /// @tparam TValue the type of the elements in the @p items array
        template<typename TKey, typename TValue>
        static void Sort(ArrayPtr<TKey>& keys, ArrayPtr<TValue>& items, int index, int length)
        {
            if (keys == nullptr)
                throw ArgumentNullException(u"keys");
            if (index < 0 || length < 0)
                throw ArgumentOutOfRangeException(length < 0 ? u"length" : u"index");
            if (index + length > keys->Count() || (items != nullptr && index + length > items->Count()))
                throw ArgumentException();

            if (items == nullptr)
            {
                typename std::vector<TKey>::iterator keys_begin = keys->m_data.begin() + index;
                typename std::vector<TKey>::iterator keys_end = keys_begin + length;

                std::sort(keys_begin, keys_end, Collections::Generic::Details::ComparerType<TKey>());
            }
            else
            {
                // Sorting keys and items via multimap
                std::multimap<TKey, TValue, Collections::Generic::Details::ComparerType<TKey>> map;
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

        /// Reverses elements in the specified array.
        /// @param arr Target array
        template<typename Type>
        static void Reverse(ArrayPtr<Type> &arr)
        {
            std::reverse(arr->m_data.begin(), arr->m_data.end());
        }

        /// Reverses a range of elements in the specified array.
        /// @param arr Target array
        /// @param startIndex Index in the array at which the range to reverse start
        /// @param count The size of the range to reverse
        template<typename Type>
        static void Reverse(ArrayPtr<Type> &arr, int startIndex, int count)
        {
            using namespace Collections::Generic::Details;
            if (!arr) {
                throw ArgumentNullException(u"arr");
            }
            if (startIndex < 0 || count < 0 || IsOutOfSize(startIndex + count, arr->data())) {
                throw ArgumentOutOfRangeException(u"startIndex or count");
            }

            std::reverse(arr->m_data.begin() + startIndex, arr->m_data.begin() + startIndex + count);
        }

        /// Changes the size of the specified array to the specified value or crates new array with specified size.
        /// @param arr Array to resize. If @p arr is null-pointer, the new array will be created
        /// @param new_size The new size of the array, or the size of the new array of @p arr is null
        template<typename Type>
        static void Resize(ArrayPtr<Type> &arr, int new_size)
        {
            if (new_size < 0)
                throw ArgumentOutOfRangeException(u"new_size");

            if (arr)
                arr->m_data.resize((typename vector_t::size_type)new_size);
            else
                arr = MakeObject<Array<T>>(new_size);
        }

        /// Sets value of the element at specified index.
        /// @param value A onst reference to the value to set
        /// @param index Index of the element
        void SetValue(const T &value, int index)
        {
            using namespace Collections::Generic::Details;
            if (IsOutOfBounds(index, m_data)) {
                throw ArgumentOutOfRangeException(u"index");
            }
            m_data[index] = value;
        }

        /// Returns a reference to the internal data structure used to store the array elements.
        vector_t& data() { return m_data; }

        /// Returns a constant reference to the internal data structure used to store the array elements.
        const vector_t& data() const { return m_data; }

        /// Returns a raw pointer to the beginning of the memory buffer where the array elements are stored.
        typename vector_t::pointer data_ptr() // VS2013 std::vector has no data() member
        {
            if(m_data.empty())
                return nullptr;

            return &m_data[0];
        }

        /// Returns a constant raw pointer to the beginning of the memory buffer where the array elements are stored
        const UnderlyingType * data_ptr() const { return data_ptr(); }

        /// Returns an iterator to the first element of the container.
        /// If the container is empty, the returned iterator will be equal to end().
        typename vector_t::iterator begin() noexcept
        {
            return m_data.begin();
        }

        /// Returns an iterator to the first element of the container.
        /// If the container is empty, the returned iterator will be equal to end().
        typename vector_t::const_iterator begin() const noexcept 
        {
            return m_data.begin();
        }

        /// Returns an iterator to the first element of the container.
        /// If the container is empty, the returned iterator will be equal to cend().
        typename vector_t::const_iterator cbegin() const noexcept 
        {
            return m_data.cbegin();
        }

        /// Returns an iterator to the element following the last element of the container.
        /// This element acts as a placeholder; attempting to access it results in undefined behavior.
        typename vector_t::iterator end() noexcept
        {
            return m_data.end();
        }

        /// Returns an iterator to the element following the last element of the container.
        /// This element acts as a placeholder; attempting to access it results in undefined behavior.
        typename vector_t::const_iterator end() const noexcept 
        {
            return m_data.end();
        }

        /// Returns an iterator to the element following the last element of the container.
        /// This element acts as a placeholder; attempting to access it results in undefined behavior.
        typename vector_t::const_iterator cend() const noexcept 
        {
            return m_data.cend();
        }

        /// Returns a reverse iterator to the first element of the reversed container. 
        /// It corresponds to the last element of the non-reversed container.
        /// If the container is empty, the returned iterator is equal to rend().
        typename vector_t::reverse_iterator rbegin() noexcept
        {
            return m_data.rbegin();
        }

        /// Returns a reverse iterator to the first element of the reversed container. 
        /// It corresponds to the last element of the non-reversed container.
        /// If the container is empty, the returned iterator is equal to rend().
        typename vector_t::const_reverse_iterator rbegin() const noexcept
        {
            return m_data.rbegin();
        }

        /// Returns a reverse iterator to the first element of the reversed container. 
        /// It corresponds to the last element of the non-reversed container.
        /// If the container is empty, the returned iterator is equal to crend().
        typename vector_t::const_reverse_iterator crbegin() const noexcept
        {
            return m_data.crbegin();
        }

        /// Returns a reverse iterator to the element following the last element of the reversed container.
        /// It corresponds to the element preceding the first element of the non-reversed container.
        /// This element acts as a placeholder, attempting to access it results in undefined behavior.
        typename vector_t::reverse_iterator rend() noexcept
        {
            return m_data.rend();
        }

        /// Returns a reverse iterator to the element following the last element of the reversed container.
        /// It corresponds to the element preceding the first element of the non-reversed container.
        /// This element acts as a placeholder, attempting to access it results in undefined behavior.
        typename vector_t::const_reverse_iterator rend() const noexcept
        {
            return m_data.rend();
        }

        /// Returns a reverse iterator to the element following the last element of the reversed container.
        /// It corresponds to the element preceding the first element of the non-reversed container.
        /// This element acts as a placeholder, attempting to access it results in undefined behavior.
        typename vector_t::const_reverse_iterator crend() const noexcept
        {
            return m_data.crend();
        }

        // ICollection interface
        /// Gets object to use for locking if making array operation thread-safe.
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
        /// Finds the smallest element in the array using operator<() to compare elements.
        /// @returns A copy of the smallest element in the array.
        UnderlyingType Min() const
        {
            return *std::min_element(m_data.cbegin(), m_data.cend());
        }

        /// Finds the largest element in the array using operator<() to compare elements.
        /// @returns A copy of the largest element in the array.
        UnderlyingType Max() const
        {
            return *std::max_element(m_data.cbegin(), m_data.cend());
        }

        /// Determines if the specified Array object contains an element that satisfies reqierements of the specified predicate.
        /// @param arr The array to look for the element in
        /// @param match Function object that defines requirements and checks if an element satisfies them
        /// @returns True if @p arr contains an element that satisfies requirements defined by @p match
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
        /// Does nothing.
        /// @param arr IGNORED
        /// @param dim IGNORED
        /// @throws IndexOutOfRangeException Always
        /// @tparam ErrType Any type that is not an std::vector
        template <typename ErrType>
        static int upper_bound(ErrType arr, int dim)
        {
            throw System::IndexOutOfRangeException();
        }
        /// Returns the upper bound of the specified dimension of the specified array.
        /// @param arr One- or multi-dimensional array
        /// @param dim The number of dimension of the array to determin the bound of
        /// @returns The upper bound of the specified dimension of the specified array
        /// @tparam VType The type of values of the array
        /// @tparam Alloc The allocator used by the std::vector object
        template <typename VType, typename Alloc>
        static int upper_bound(const std::vector<VType, Alloc> &arr, int dim)
        {
            if (!dim)
                return (int)arr.size() - 1;

            if (!arr.size())
                return -1;

            return upper_bound(arr[0], dim - 1);
        }

        /// Returns the number of elements of single-dimensional std::vector object, i.e. the std::vector object whose elements are not objects of std::vector class.
        /// @param v A constant reference to the std::vector object
        /// @returns The number of elements in the array
        /// @tparam U The type of elements in the array
        /// @tparam Alloc The type of the allocator used by std::vector object
        template <typename U, typename Alloc>
        static size_t recursive_size(const std::vector<U, Alloc>& v)
        {
            return v.size();
        }
        
        /// Returns the number of elements of multi-dimesional array represented by
        /// the std::vector object whose elements are std::vector objects.
        /// @param v A constant reference to the std::vector object that represents an array whose elements are std::vector objects
        /// @returns The number of elements in all dimensions of the specified multi-dimensional array
        /// @tparam U The type of the elements of the elements of the std::vector object accepted by the method as an argument
        /// @tparam Alloc1 The type of the allocator used by std::vector obects that are elements of the std::vector object accepted by the method as an argument
        /// @tparam Alloc2 The type of the allocator used by the std::vector object accepted by the method as an argument
        template <typename U, typename Alloc1, typename Alloc2>
        static size_t recursive_size(const std::vector<std::vector<U, Alloc1>, Alloc2>& v)
        {
            size_t rv = 0;
            for (const auto &i : v)
                rv += recursive_size(i);

            return rv;
        }

#ifdef __DBG_FOR_EACH_MEMEBR
        public:
            /// Applies visitor to container and elements.
            /// @param visitor Visitor to apply.
            void DBG_for_each_member(DBG::for_each_member_visitor &visitor) const override
            {
                visitor.add_self(this);
                DBG::for_each_of_Object(this, m_data, visitor);
            }
            /// Returns a c-string containing the name of the class the current object is instance of.
            const char* DBG_class_name() const override { return "Array<T>"; }
            /// Marks class as known.
            /// @return Always returns false.
            bool DBG_unknown_type() const override { return false; }
#endif
    };
    /// Makes sure that conversion (StaticCast, DynamicCast, etc.) to array pointer return ArrayPtr, not naked SmartPtr.
    template <typename TTo>
    struct CastResult<Array<TTo>>
    {
        /// An alias for the SmartPointer type that points to an Array object containing elements of type @p TTo.
        typedef ArrayPtr<TTo> type;
    };


    namespace Details {
        /// A factory method that creates an Array object that represents an empty array.
        /// @returns A raw pointer to a new instance of Array object representing an empty array.
        /// @tparam T The type of elements of the array
        template <typename T>
        inline Array<T>* CreateArray(Array<T>*)
        {
            return new Array<T>(0);
        }

    }

} // namespace System

#endif // _aspose_system_array_h_
