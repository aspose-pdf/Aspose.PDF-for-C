#ifndef _installed_font_collection_h_
#define _installed_font_collection_h_

#include <drawing/text/font_collection.h>

namespace System { namespace Drawing {  namespace Text {

    class InstalledFontCollection: public FontCollection
    {
    public:
        InstalledFontCollection();
    };

}}} // namespace System { namespace Drawing {   namespace Text {

#endif
