/// @file drawing/text/private_font_collection.h
#ifndef _private_font_collection_h_
#define _private_font_collection_h_

#include "font_collection.h"
#include "drawing/font_family.h"

#include <map>

namespace System{ namespace Drawing{ namespace Text{
    /// Represents a collection of font families provided by the client application.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS PrivateFontCollection FINAL: public FontCollection
    {
    public:
        /// Adds a font from the specified file to the collection.
        /// @param filename A path to the file containing the font to add
        ASPOSECPP_SHARED_API void AddFontFile(const String& filename);

        // AddMemoryFont replacement
        /// Adds the specified font to the collection.
        /// @param data A byte array containing the font data
        /// @param len The size of the @p data buffer in bytes
        ASPOSECPP_SHARED_API void AddFont(const System::ArrayPtr<uint8_t>& data, int len);

        /// Returns an array of FontFamily objects associated with the font collection represented by the current object.
        ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<FontFamily> > get_Families() override;
    private:
        /// Font family map that associats FontFamily objects with the names of font families
        /// represented by those objects.
        std::map<std::string, SharedPtr<FontFamily>> m_font_family_map;
    };

}}}

#endif //_private_font_collection_h_
