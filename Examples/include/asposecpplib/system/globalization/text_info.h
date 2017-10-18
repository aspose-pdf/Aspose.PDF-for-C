#ifndef _aspose_system_globalization_text_info_h_
#define _aspose_system_globalization_text_info_h_

#include <system/object.h>
#include <system/string.h>
#include <system/exceptions.h>
#include <system/details/culture_data_ptr.h>

namespace System { namespace Globalization {

    class TextInfo : public System::Object
    {
        FRIEND_FUNCTION_System_MakeObject;
        RTTI_INFO(System::Globalization::TextInfo, ::System::BaseTypesInfo<System::Object>)

    public:
        String ToTitleCase(String str) const;
        virtual String get_ListSeparator() const;

        virtual int get_ANSICodePage() const;
        virtual int get_WindowsCodePage() const;

    private:
        friend class CultureInfo;

        TextInfo(Details::CultureDataPtr cultureData);

        void CalculateListSeparator();

        Details::CultureDataPtr m_cultureData;
        String m_listSeparator;
    };

}} // namespace System::Globalization

#endif // _aspose_system_globalization_text_info_h_
