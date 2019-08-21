/// @file system/collections/bitarray.h
#ifndef _BitArray_h_
#define _BitArray_h_

#include "system/collections/icollection.h"
#include "system/collections/ienumerable.h"
#include "system/array.h"

#include <memory>
#include <vector>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/dynamic_bitset.hpp>
#endif


namespace boost {
    /// Forward declaration of boost type.
    template <class, class> class dynamic_bitset;
}


namespace System {
namespace Collections {

namespace Detail{
    /// Bitset type to use in BitArray implementation.
    typedef boost::dynamic_bitset<uint32_t, std::allocator<uint32_t>> BitsetType;

    /// Structure to emulate size of boost bitset structure.
    struct BitsetSizeEquivalent 
    { 
        /// A dummy vector field.
        std::vector<uint32_t> m_data; 
        /// A dummy size_t field.
        std::size_t m_size; 
    };
    /// Structure to emulate size of boost bitset reference structure.
    struct BitsetReferenceSizeEquivalent 
    { 
        /// A dummy reference to uint32_t field.
        uint32_t &m_ref; 
        /// A dummy uint32_t field.
        uint32_t m_mask;
        /// Dummy declaration for warning-safety.
        BitsetReferenceSizeEquivalent() = delete;
    };

    /// Wrapper to hold bitset data without actually including boost headers.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER(BitsetType, dynamic_bitset, sizeof(BitsetSizeEquivalent), std::uint32_t*, BitsetHolder);
    /// Wrapper to hold bitset reference data without actually including boost headers.
    ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(BitsetType::reference, reference, sizeof(BitsetReferenceSizeEquivalent), BitsetReferenceSizeEquivalent, BitsetReferenceHolder);
}

/// Array of bits which can be addressed by index.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS BitArray
    : virtual public Object
    , public Generic::ICollection<bool>
{
    /// RTTI information.
    RTTI_INFO(BitArray, ::System::BaseTypesInfo<System::Object>);

public:
    /// Underlying data type.
    typedef Detail::BitsetType bitset;

    /// Enumerator type for iteration purposes.
    class Enumerator : virtual public Object, public Generic::IEnumerator<bool>
    {
        /// RTTI information.
        RTTI_INFO(BitArray::Enumerator, ::System::BaseTypesInfo<System::Object>);

        /// Reference to data structure.
        bitset& m_data;
        /// Current index in bit array.
        int m_current;

    public:
        /// Creates enumerator.
        /// @param parent BitArray to iterate through.
        ASPOSECPP_SHARED_API Enumerator(const SharedPtr<BitArray>& parent);
        /// Gets addressed bit in boolean form.
        /// @return Boolean representation of current bit.
        ASPOSECPP_SHARED_API bool get_Current() ASPOSE_CONST override;
        /// Moves to the next bit.
        /// @return false if container end is hit, true otherwise.
        ASPOSECPP_SHARED_API bool MoveNext() override;
        /// Resets enumerator to position before first element.
        ASPOSECPP_SHARED_API void Reset() override;
    };

    /// Reference class to allow treating BitArray elements in contexts where bool is required.
    class ASPOSECPP_SHARED_CLASS Reference
    {
    public:
        /// Deletes reference.
        ~Reference();
        /// Converts referenced value to bool.
        /// @return true if bit is non-zero, false otherwise.
        ASPOSECPP_SHARED_API operator bool() const;
        /// Inverts referenced value.
        /// @return true if bit is zero, false otherwise.
        ASPOSECPP_SHARED_API bool operator ~ () const;
        /// Sets referenced bit value.
        /// @param value to set.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator = (bool value);
        /// Copies bit value.
        /// @param reference Reference to source bit.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator = (const Reference &reference);
        /// Assignment or operator.
        /// @param value RHS operand.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator |= (bool value);
        /// Assignment end operator.
        /// @param value RHS operand.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator &= (bool value);
        /// Assignment xor operator.
        /// @param value RHS operand.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator ^= (bool value);
        /// Assignment substraction operator.
        /// @param value RHS operand.
        /// @return This reference.
        ASPOSECPP_SHARED_API Reference& operator -= (bool value);
    private:
        /// Ensures internal structure access.
        friend class BitArray;
        /// Constructor.
        /// @tparam T Formal argument type name to avoid exposing name of internal class of boost::dynamic_bitset to the code that doesn't have boost references
        /// @param reference Actual boost bit reference.
        template <typename T> Reference(const T &reference);
        /// Actual reference value.
        Detail::BitsetReferenceHolder m_reference;
    };

    /// Creates enumerator object.
    /// @return Constructed enumerator object.
    ASPOSECPP_SHARED_API SharedPtr<Generic::IEnumerator<bool> > GetEnumerator() override;

    /// Copy constructor.
    /// @param bits Container to copy data from.
    ASPOSECPP_SHARED_API BitArray(const bitset& bits);
    /// Copy constructor.
    /// @param bits Container to copy data from.
    ASPOSECPP_SHARED_API BitArray(const BitArray& bits);
    /// Copy constructor.
    /// @param values Container to elementwise copy data from.
    ASPOSECPP_SHARED_API BitArray(const System::ArrayPtr<bool>& values);
    /// Copy constructor.
    /// @param bytes Container to bitwise copy data from.
    ASPOSECPP_SHARED_API BitArray(const System::ArrayPtr<uint8_t>& bytes);
    /// Copy constructor.
    /// @param values Container to bitwise copy data from.
    ASPOSECPP_SHARED_API BitArray(const System::ArrayPtr<int>& values);
    /// Fill constructor.
    /// @param length Number of elements to fill.
    /// @param defaultValue  Filling value.
    ASPOSECPP_SHARED_API BitArray(int length, bool defaultValue = false);

    /// Accessor function.
    /// @param index Index of bit to access.
    /// @return Reference allowing operations on referred bit.
    ASPOSECPP_SHARED_API Reference operator[](int index);

    /// Getter function.
    /// @param index Index of bit to extract.
    /// @return Value of referenced bit.
    ASPOSECPP_SHARED_API bool idx_get(int index) const;
    /// Setter function.
    /// @param index Index of bit to set.
    /// @param value New bit value.
    ASPOSECPP_SHARED_API void idx_set(int index, bool value);

    /// Gets container size.
    /// @return Actual number of elements in container.
    ASPOSECPP_SHARED_API int get_Length() const;
    /// Gets container size.
    /// @return Actual number of elements in container.
    ASPOSECPP_SHARED_API int get_Count() const override;

    /// Adds value to the end of container.
    /// @param item Value to push.
    ASPOSECPP_SHARED_API void Add(const bool &item) override;
    /// Deletes all elements.
    ASPOSECPP_SHARED_API void Clear() override;
    /// Checks whether specific value is present in container. Not implemented.
    /// @param item Item to look for.
    /// @return true if the element is present, false otherwise.
    ASPOSECPP_SHARED_API bool Contains(const bool &item) const override;
    /// Returns first occurance of specified value. Not implemented.
    /// @param item Value to remove.
    /// @return true if value is found and removed, false otherwise.
    ASPOSECPP_SHARED_API bool Remove(const bool &item) override;
    /// Copies data to existing array elements.
    /// @param array Destination array.
    /// @param arrayIndex Destination array beginning index.
    ASPOSECPP_SHARED_API void CopyTo(System::ArrayPtr<bool> array, int arrayIndex) override;

    /// Calculates bitwise 'and' between two BitSets.
    /// @param value RHS operand.
    /// @return Bitwise 'and' result.
    ASPOSECPP_SHARED_API BitArray And(const BitArray& value);
    /// Calculates bitwise 'or' between two BitSets.
    /// @param value RHS operand.
    /// @return Bitwise 'or' result.
    ASPOSECPP_SHARED_API BitArray Or(const BitArray& value);
    /// Calculates bitwise 'xor' between two BitSets.
    /// @param value RHS operand.
    /// @return Bitwise 'xor' result.
    ASPOSECPP_SHARED_API BitArray Xor(const BitArray& value);
    /// Negates BitSet.
    /// @return Negated BitSet.
    ASPOSECPP_SHARED_API BitArray Not();

    /// Gets BitArray element.
    /// @param index Index of bit to get.
    /// @return Boolean representation of addressed bit.
    ASPOSECPP_SHARED_API bool Get(int index) const;
    /// Sets BitArray element.
    /// @param index Index of bit to set.
    /// @param value Boolean representation of value being set.
    ASPOSECPP_SHARED_API void Set(int index, bool value);
    /// Sets all elements to specific value.
    /// @param value Filling value.
    ASPOSECPP_SHARED_API void SetAll(bool value);

    /// Underlying data structure access.
    /// @return Reference to underlying data structure.
    ASPOSECPP_SHARED_API bitset& data();
    /// Underlying data structure access.
    /// @return Const reference to underlying data structure.
    ASPOSECPP_SHARED_API const bitset& data() const;

    /// Bitwise comparison operator.
    /// @param other RHS operand.
    /// @return true if sizes and all bits match, false otherwise.
    ASPOSECPP_SHARED_API bool operator == (const BitArray &other) const;
    /// Bitwise comparison operator.
    /// @param other RHS operand.
    /// @return false if sizes and all bits match, true otherwise.
    ASPOSECPP_SHARED_API bool operator != (const BitArray &other) const;

    /// Formal implementation of weak template arguments mechanism; inapplicable to this class.
    ASPOSECPP_SHARED_API void SetTemplateWeakPtr(unsigned int argument) override;

protected:
    /// Internal data structure.
    Detail::BitsetHolder m_data;
};

/// Pointer to BitArray.
/// This type is a pointer to manage other object's deletion.
/// It should be allocated on stack and passed to functions either by value or by const reference.
class ASPOSECPP_SHARED_CLASS BitArrayPtr : public SharedPtr<BitArray>
{
public:
    /// Initializes null pointer.
    ASPOSECPP_SHARED_API BitArrayPtr();
    /// Conversion constructor.
    /// @param obj value to convert.
    ASPOSECPP_SHARED_API BitArrayPtr(const SharedPtr<BitArray>& obj);

    /// Bit accessor.
    /// @param idx Index to address.
    /// @return Reference to addressed bit.
    ASPOSECPP_SHARED_API BitArray::Reference operator[] (int idx) const;

    /// Checks if specific value is null.
    ASPOSECPP_SHARED_API bool IsNull() const;
};

} // namespace Collections
} // namespace System

#endif // _BitArray_h_
