/// @file drawing/text/font_collection.h
#ifndef _font_collection_h_
#define _font_collection_h_

#include <system/idisposable.h>
#include <system/array.h>

namespace System { namespace Drawing {
    class FontFamily;
}}

namespace System { namespace Drawing {  namespace Text {
    /// A base class for installed and private font collections.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS FontCollection: public IDisposable
    {
    public:
        /// Returns an array of FontFamily objects associated with the font collection represented by the current object.
        virtual ASPOSECPP_SHARED_API ArrayPtr<SharedPtr<FontFamily>> get_Families();
        /// Releases operating system resources acquired by the current object.
        virtual ASPOSECPP_SHARED_API void Dispose() override;
    };

}}} // namespace System { namespace Drawing {   namespace Text {

#endif
