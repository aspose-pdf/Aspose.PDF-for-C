#pragma once

#include <system/object.h>
#include <system/array.h>
#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

namespace Text {

namespace CMaps {

/// <summary>
/// Declares a functionality for codespace ranges used by all CMaps.
/// </summary>
class ICMapCodeSpaceRange : public System::Object
{
    typedef ICMapCodeSpaceRange ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Detects is passed code belongs to codespace range.
    /// </summary>
    /// <param name="value">byte to check</param>
    /// <returns>true/false</returns>
    virtual bool IsInRange(uint8_t value) = 0;
    /// <summary>
    /// Detects is passed code, represented as array of bytes belongs to codespace range.
    /// </summary>
    /// <param name="values">bytes to check</param>
    /// <param name="length">count of bytes in a checked byte array</param>
    /// <returns>true/false</returns>
    virtual bool IsInRange(System::ArrayPtr<uint8_t> values, int32_t length) = 0;
    /// <summary>
    /// Detects is passed code belongs to codespace range.
    /// </summary>
    /// <param name="value">byte to check</param>
    /// <returns>true/false</returns>
    virtual bool IsInRange(char16_t value) = 0;
    /// <summary>
    /// Detects is passed code, represented as array of chars belongs to codespace range.
    /// </summary>
    /// <param name="values">chars to check</param>
    /// <param name="length">count of bytes in a checked char array</param>
    /// <returns>true/false</returns>
    virtual bool IsInRange(System::ArrayPtr<char16_t> values, int32_t length) = 0;
    /// <summary>
    /// Detects is the passed raw code represented in byte array form has a partial match
    /// with CMap's codespace ranges - partial match means that first element(s) in array
    /// is in range(s) but all the raw code bytes are not fully in any range.
    /// </summary>
    /// <param name="values">raw code in a byte array form</param>
    /// <param name="size">count of bytes in byte array</param>
    /// <returns>true/false</returns>
    virtual bool HasPartialMatch(System::ArrayPtr<uint8_t> values, int32_t size) = 0;
    /// <summary>
    /// Returns size for codespace range
    /// </summary>
    /// <returns></returns>
    virtual int32_t GetSize() = 0;
    /// <summary>
    /// Gets codespace range data - all start and end bytes.
    /// </summary>
    /// <param name="start"></param>
    /// <param name="end"></param>
    virtual void GetAllBytes(System::ArrayPtr<uint8_t> start, System::ArrayPtr<uint8_t> end) = 0;
    
};

} // namespace CMaps
} // namespace Text
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


