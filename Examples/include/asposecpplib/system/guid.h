#ifndef _aspose_system_guid_h_
#define _aspose_system_guid_h_

#include <fwd.h>
#include <system/array.h>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/uuid/uuid.hpp>
#endif


namespace boost { namespace uuids {
    ASPOSECPP_3RD_PARTY_STRUCT(uuid);
} }


namespace System {
    namespace Detail {
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::uuids::uuid, uuid, sizeof(std::uint8_t[16]), uint8_t, UuidHolder);
    }

class Guid
{
public:

    Guid();
    Guid(ArrayPtr<uint8_t> b);
    Guid(const String& g);
    Guid(int a, int16_t b, int16_t c, ArrayPtr<uint8_t> d);
    Guid(int a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    Guid(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    ~Guid();

    Guid(const Guid &guid);
    Guid& operator = (const Guid &guid);

    int CompareTo(const Guid& g);
    bool Equals(const Guid& g) const;

    ArrayPtr<uint8_t> ToByteArray();
    String ToString() const;

    String ToString(const String& format) const;

    bool operator != (const Guid& b) const;
    bool operator == (const Guid& b) const;

    static Guid ASPOSECPP_SHARED_API Empty;
    static Guid NewGuid();
    static Guid Parse(const String& input);

    int GetHashCode() const;

private:

    Guid(boost::uuids::uuid uuid);

    void Init(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);

    static char_t HexToChar(int a);
    static size_t HexsToChars(std::wstring & guid_str, size_t offset, uint8_t a, uint8_t b, bool hex = false);

    Detail::UuidHolder m_uuid;

};

} // namespace System

namespace std
{
    template <>
    struct hash<System::Guid>
    {
        std::size_t operator()(const System::Guid& g) const
        {
            return g.GetHashCode();
        }
    };
}

#endif // _aspose_system_guid_h_