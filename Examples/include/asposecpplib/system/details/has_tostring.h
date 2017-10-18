#ifndef _has_tostring_h_
#define _has_tostring_h_

namespace System
{
    class String;

    namespace Details
    {
        template <class T>
        struct IsSharedPtr
        {
            typedef int type;
            enum { value = 0 };
        };
        template <class T>
        struct IsSharedPtr<SharedPtr<T> >
        {
            typedef T type;
            enum { value = 1 };
        };

        template<typename T>
        class HasToString
        {
            template <typename U, String (U::*)()> struct Check;
            template <typename U> static char func(Check<U, &U::ToString> *);
            template <typename U> static int func(...);

            template <typename U, String (U::*)() const> struct ConstCheck;
            template <typename U> static char cfunc(ConstCheck<U, &U::ToString> *);
            template <typename U> static int cfunc(...);

        public:
            enum { value = sizeof(func<T>(0)) == sizeof(char) || sizeof(cfunc<T>(0)) == sizeof(char) };
        };

        template<typename T>
        class HasPtrToString
        {
        public:
            enum
            {
                value = HasToString< typename IsSharedPtr<T>::type >::value
            };
        };

    } // namespace Details
} // namespace System
#endif // _has_tostring_h_