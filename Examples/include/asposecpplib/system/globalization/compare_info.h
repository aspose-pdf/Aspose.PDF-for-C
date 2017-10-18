#ifndef compare_info_h
#define compare_info_h

#include "system/object.h"
#include "system/string.h"
#include <system/globalization/compare_options.h>
#include <system/details/culture_data_ptr.h>

namespace System { namespace Globalization {

    class CompareInfo: public System::Object//public IDeserializationCallback
    {
        FRIEND_FUNCTION_System_MakeObject;
    public:

        int Compare(const String& string1, const String& string2);
        int Compare(const String& a, const String& b, System::Globalization::CompareOptions opt);
        int IndexOf(const String& source, const String& value, CompareOptions options);
        int IndexOf(const String& source, const String& value, int startIndex, CompareOptions options);

        String get_Name();

    private:
        friend class CultureInfo;

        CompareInfo(Details::CultureDataPtr cultureData);

        String m_name;
    };

}} // namespace System::Globalization
#endif // compare_info_h
