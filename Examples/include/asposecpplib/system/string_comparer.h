#ifndef _string_comparer_h_
#define _string_comparer_h_
#include "system/collections/icomparer.h"
#include "system/collections/iequality_comparer.h"
#include "system/object.h"
#include "system/string.h"
#include "system/globalization/culture_info.h"
#include "defines.h"

namespace System
{
    class StringComparer;
    typedef SharedPtr<StringComparer> StringComparerPtr;

    class StringComparer
        : virtual public System::Object
        , public Collections::Generic::IComparer<String>
        , public Collections::Generic::IEqualityComparer<String>
    {
        typedef StringComparer ThisType;
        typedef System::Object BaseType;

        RTTI_INFO_DECL();

    public:

#ifdef ASPOSE_COMPARE_BY_REF
        typedef const String& args_type;
#else
        typedef String args_type;
#endif

        static StringComparerPtr get_Ordinal();
        static StringComparerPtr get_OrdinalIgnoreCase();

        static StringComparerPtr get_InvariantCulture();
        static StringComparerPtr get_InvariantCultureIgnoreCase();

        static StringComparerPtr get_CurrentCulture();
        static StringComparerPtr get_CurrentCultureIgnoreCase();

        static StringComparerPtr Create(System::SharedPtr<System::Globalization::CultureInfo> culture, bool ignoreCase);

        // IComparer<String>
        virtual int Compare(args_type x, args_type y) ASPOSE_CONST override;

        // IEqualityComparer<String>
        virtual bool Equals(String x, String y) ASPOSE_CONST override;
        virtual int GetHashCode(String obj) const override;
    };

} // namespace System

#endif // _string_comparer_h_