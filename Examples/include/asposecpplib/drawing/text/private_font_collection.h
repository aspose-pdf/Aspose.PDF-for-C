#ifndef _private_font_collection_h_
#define _private_font_collection_h_

#include "font_collection.h"
#include "drawing/font_family.h"

#include <map>

namespace System{ namespace Drawing{ namespace Text{

    class PrivateFontCollection FINAL: public FontCollection
    {
    public:
        void AddFontFile(String filename);

        // AddMemoryFont replacement
        void AddFont(System::ArrayPtr<uint8_t> data, int len);

        ArrayPtr<SharedPtr<FontFamily> > get_Families() override;
    private:

        std::map<std::string, SharedPtr<FontFamily>> m_font_family_map;
    };

}}}

#endif //_private_font_collection_h_
