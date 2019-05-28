/// @file drawing/text/installed_font_collection.h
#ifndef _installed_font_collection_h_
#define _installed_font_collection_h_

#include <drawing/text/font_collection.h>

namespace System { namespace Drawing {  namespace Text {
    /// Represents the collection of the fonts installed in the system. NOT IMPLEMENTED.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS InstalledFontCollection: public FontCollection
    {
    public:
        /// Constructs a new instance of InstalledFontCollection class.
        ASPOSECPP_SHARED_API InstalledFontCollection();
    };

}}} // namespace System { namespace Drawing {   namespace Text {

#endif
