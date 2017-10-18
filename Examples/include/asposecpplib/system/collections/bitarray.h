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
    template <class, class> class dynamic_bitset;
}


namespace System {
namespace Collections {

    namespace Detail{
        typedef boost::dynamic_bitset<uint32_t, std::allocator<uint32_t>> BitsetType;

        struct BitsetSizeEquivalent { std::vector<uint32_t> m_data; std::size_t m_size; };
        struct BitsetReferenceSizeEquivalent { uint32_t &m_ref; uint32_t m_mask; };

        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(BitsetType, dynamic_bitset, sizeof(BitsetSizeEquivalent), std::uint32_t*, BitsetHolder);
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER_HIDDEN_TYPE(BitsetType::reference, reference, sizeof(BitsetReferenceSizeEquivalent), BitsetReferenceSizeEquivalent, BitsetReferenceHolder);
    }

    class BitArray
        : virtual public Object
        , public Generic::ICollection<bool>
    {
        RTTI_INFO(BitArray, ::System::BaseTypesInfo<System::Object>);

    public:

        typedef Detail::BitsetType bitset;

        class Enumerator : virtual public Object, public Generic::IEnumerator<bool>
        {
            RTTI_INFO(BitArray::Enumerator, ::System::BaseTypesInfo<System::Object>);

            bitset& m_data;
            int m_current;

        public:

            Enumerator(const SharedPtr<BitArray>& parent);

            bool get_Current() ASPOSE_CONST override;

            bool MoveNext() override;

            void Reset() override;
        };

        class Reference
        {
        public:
            ~Reference();
            operator bool() const;
            bool operator ~ () const;
            Reference& operator = (bool value);
            Reference& operator = (const Reference &reference);
            Reference& operator |= (bool value);
            Reference& operator &= (bool value);
            Reference& operator ^= (bool value);
            Reference& operator -= (bool value);
        private:
            friend class BitArray;
            template <typename T> Reference(const T &reference); //Template to avoid exposing name of internal class of boost::dynamic_bitset to the code that doesn't have boost references
            Detail::BitsetReferenceHolder m_reference;
        };

        SharedPtr<Generic::IEnumerator<bool> > GetEnumerator() override;

        BitArray(const bitset& bits);

        BitArray(const BitArray& bits);

        BitArray(const System::ArrayPtr<bool>& values);

        BitArray(const System::ArrayPtr<uint8_t>& bytes);

        BitArray(const System::ArrayPtr<int>& values);

        BitArray(int length, bool defaultValue = false);

        Reference operator[](int index);

        bool idx_get(int index) const;
        void idx_set(int index, bool value);

        int get_Length() const;
        int get_Count() const override;

        void Add(const bool &item) override;
        void Clear() override;
        bool Contains(const bool &item) const override;
        bool Remove(const bool &item) override;
        void CopyTo(System::ArrayPtr<bool> array, int arrayIndex) override;

        BitArray And(const BitArray& value);

        BitArray Or(const BitArray& value);

        BitArray Xor(const BitArray& value);

        BitArray Not();

        bool Get(int index) const;

        void Set(int index, bool value);

        void SetAll(bool value);

        bitset& data();
        const bitset& data() const;

        bool operator == (const BitArray &other) const;
        bool operator != (const BitArray &other) const;

    protected:

        Detail::BitsetHolder m_data;
    };

    class BitArrayPtr : public SharedPtr<BitArray>
    {
    public:

        BitArrayPtr();
        BitArrayPtr(const SharedPtr<BitArray>& obj);

        BitArray::Reference operator[] (size_t idx) const;
    };

} // namespace Collections
} // namespace System

#endif // _BitArray_h_
