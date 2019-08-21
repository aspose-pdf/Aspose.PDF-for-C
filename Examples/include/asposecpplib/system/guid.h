/// @file system/guid.h
/// Contains the declaration of System::Guid class.
#ifndef _aspose_system_guid_h_
#define _aspose_system_guid_h_

#include <fwd.h>
#include <system/array.h>
#include <system/boxable_traits.h>


#ifdef ASPOSECPP_SHARED_EXPORTS
#include <boost/uuid/uuid.hpp>
#endif


namespace boost { namespace uuids {
    /// Forward declaration of uuid struct.
    ASPOSECPP_3RD_PARTY_STRUCT(uuid);
} }


namespace System {
    namespace Detail {
        /// Declaration of data type used to store the GUID.
        ASPOSECPP_3RD_PARTY_TYPE_HOLDER(boost::uuids::uuid, uuid, sizeof(std::uint8_t[16]), uint8_t, UuidHolder);
    }

/// Represents a Globally Unique IDentifier
/// This type should be allocated on stack and passed to functions by value or by reference.
/// Never use System::SmartPtr class to manage objects of this type.
class ASPOSECPP_SHARED_CLASS Guid
{
public:
    /// Constructs an object that represents a GUID consisting of all zeroes.
    ASPOSECPP_SHARED_API Guid();
    /// Constructs an object that represents a GUID specified as an array of unsigned 8-bit integer values.
    /// @param b A byte-array containing separate bytes of the GUID
    ASPOSECPP_SHARED_API Guid(const ArrayPtr<uint8_t>& b);
    /// Constructs an object that represents a GUID specified as a string
    /// @param g The string representation of a GUID to be represented by the object buing constructed
    ASPOSECPP_SHARED_API Guid(const String& g);
    /// Constucts an instance of Guad class from the specified GUID components.
    /// @param a Bits 0-31 of the GUID
    /// @param b Bits 32-47 of the GUID
    /// @param c Bits 48-63 of the GUID
    /// @param d A byte array containing bits 64-127 of the GUID
    ASPOSECPP_SHARED_API Guid(int32_t a, int16_t b, int16_t c, const ArrayPtr<uint8_t>& d);
    /// Constucts an instance of Guad class from the specified unsigned integers and bytes.
    /// @param a Bits 0-31 of the GUID
    /// @param b Bits 32-47 of the GUID
    /// @param c Bits 48-63 of the GUID
    /// @param d Bits 64-71 of the GUID
    /// @param e Bits 72-79 of the GUID
    /// @param f Bits 80-87 of the GUID
    /// @param g Bits 88-95 of the GUID
    /// @param h Bits 96-103 of the GUID
    /// @param i Bits 104-111 of the GUID
    /// @param j Bits 112-119 of the GUID
    /// @param k Bits 120-127 of the GUID
    ASPOSECPP_SHARED_API Guid(int32_t a, int16_t b, int16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    /// Constucts an instance of Guad class from the specified unsigned integers and bytes.
    /// @param a Bits 0-31 of the GUID
    /// @param b Bits 32-47 of the GUID
    /// @param c Bits 48-63 of the GUID
    /// @param d Bits 64-71 of the GUID
    /// @param e Bits 72-79 of the GUID
    /// @param f Bits 80-87 of the GUID
    /// @param g Bits 88-95 of the GUID
    /// @param h Bits 96-103 of the GUID
    /// @param i Bits 104-111 of the GUID
    /// @param j Bits 112-119 of the GUID
    /// @param k Bits 120-127 of the GUID
    ASPOSECPP_SHARED_API Guid(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    /// Destructor.
    ASPOSECPP_SHARED_API ~Guid();
    /// Constructs an object that represents the same GUID as the specified object.
    /// @param guid The Guid object to copy the GUID value from
    ASPOSECPP_SHARED_API Guid(const Guid &guid);
    /// Assigns to the current object the GUID value represented by the specified Guid object.
    /// @param guid The Guid object to copy the GUID value from
    /// @returns A reference to the self
    ASPOSECPP_SHARED_API Guid& operator = (const Guid &guid);
    /// Performs arithmetic comparison of the GUIDs represented by the current and specified objects.
    /// @param g The comparand
    /// @returns -1 if the GUID represented by the current object is less than the GUID represented by @p g; 0 if the GUIDs are equal; 1 if the GUID represented by the current object is greater than the GUID represented by @p g
    ASPOSECPP_SHARED_API int CompareTo(const Guid& g) const;
    /// Determines if the GUIDs represented by the current and specified objects are equal.
    /// @param g The comparand
    /// @returns True if the GUIDs represented by the current and the specified objects are equal, otherwise - false
    ASPOSECPP_SHARED_API bool Equals(const Guid& g) const;
    /// Converts the GUID represented by the current object into array of bytes.
    /// @returns A byte array containing bytes constituting the GUID represented by the current object
    ASPOSECPP_SHARED_API ArrayPtr<uint8_t> ToByteArray() const;
    /// Converts the GUID represented by the current object to its string representation.
    ASPOSECPP_SHARED_API String ToString() const;
    /// Converts the GUID represented by the current object to its string representation using the specified string format.
    /// @param format The format to use
    /// @returns The string representation of the GUID value represented by the current object
    ASPOSECPP_SHARED_API String ToString(const String& format) const;
    /// Determines if the GUIDs represented by the current and specified objects are not equal.
    /// @param b The comparand
    /// @returns True if the GUIDs represented by the current and the specified objects are not equal, otherwise - false
    ASPOSECPP_SHARED_API bool operator != (const Guid& b) const;
    /// Determines if the GUIDs represented by the current and specified objects are equal.
    /// @param b The comparand
    /// @returns True if the GUIDs represented by the current and the specified objects are equal, otherwise - false
    ASPOSECPP_SHARED_API bool operator == (const Guid& b) const;
    /// Represents a GUID that has a value of 0.
    static Guid ASPOSECPP_SHARED_API Empty;
    /// Generates a new GUID and returns a Guid object that represents it.
    static ASPOSECPP_SHARED_API Guid NewGuid();
    /// Converts the specified string representation of a GUID into equivalent Guid object.
    /// @param input The string containing the string representation of GUID
    /// @returns A Guid object representig a GUID equivalent to that represented by @p input
    static ASPOSECPP_SHARED_API Guid Parse(const String& input);
    /// Tries to convert the specified string into Guid object.
    /// @param input The string to convert
    /// @param g Output Guid object, if successfull.
    /// @returns True, if input string represents valid Guid, otherwise false.
    static ASPOSECPP_SHARED_API bool TryParse(const String& input, Guid& g);
    /// Returns a hash code for the current object.
    ASPOSECPP_SHARED_API int GetHashCode() const;

private:
    /// Constructs a new instance of Guid class that represents the specified GUID.
    /// @param uuid The GUID to be represented by the object being constructed
    Guid(boost::uuids::uuid uuid);
    /// Initializes the current object with the specified values.
    void Init(uint32_t a, uint16_t b, uint16_t c, uint8_t d, uint8_t e, uint8_t f, uint8_t g, uint8_t h, uint8_t i, uint8_t j, uint8_t k);
    /// Converts the low 4 bits of the specified integer value to its hexadecimal representation.
    /// @param a The integer value to convert
    /// @returns The hexadecimal digit equivalent to the low 4 bits of @p a
    static char_t HexToChar(int a);
    /// Converts two numbers into the form used to represent GUIDs.
    /// @param guid_str Output data string.
    /// @param offset Starting offset in output data string.
    /// @param a First number.
    /// @param b Second number.
    /// @param hex Whether to add '0x' prefixes before each number.
    /// @return Offset in output string after output is done.
    static size_t HexsToChars(std::u16string & guid_str, size_t offset, uint8_t a, uint8_t b, bool hex = false);

    /// The GUID value represented by the current object.
    Detail::UuidHolder m_uuid;

};

/// IsBoxable<T> specialization for Guid.
template<> struct IsBoxable<Guid> : std::true_type {};

} // namespace System

namespace std
{
    /// Hashing implementation for Guid class.
    template <>
    struct hash<System::Guid>
    {
        /// Hasher algorithm which calls into actual GetHashCode() implementation.
        /// @param g Guid object to hash
        std::size_t operator()(const System::Guid& g) const
        {
            return static_cast<std::size_t>(g.GetHashCode());
        }
    };
}

#endif // _aspose_system_guid_h_
