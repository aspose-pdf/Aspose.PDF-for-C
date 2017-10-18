#ifndef _font_collection_h_
#define _font_collection_h_

#include <system/idisposable.h>
#include <system/array.h>

namespace System { namespace Drawing {
    class FontFamily;
}}

namespace System { namespace Drawing {  namespace Text {

    class FontCollection: public IDisposable
    {
    public:

        virtual ArrayPtr<SharedPtr<FontFamily>> get_Families();

        virtual void Dispose() override;
    };

}}} // namespace System { namespace Drawing {   namespace Text {

#endif
