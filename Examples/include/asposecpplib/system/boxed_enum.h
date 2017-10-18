#ifndef _aspose_system_boxed_enum_h_
#define _aspose_system_boxed_enum_h_

#include <system/boxed_value.h>
#include <system/reflection.h>
#include <cstdint>

namespace System
{
    template<class E>
    class BoxedEnum : public System::BoxedValue<E>
    {
        RTTI_INFO_TEMPLATE_CLASS(BoxedEnum, System::BaseTypesInfo<System::BoxedValue<E>>);

    public:
        BoxedEnum(E e) : System::BoxedValue<E>(e) {}

        bool IsBoxedEnum() override
        {
            return true;
        }

        uint64_t GetUnsignedLongLongValue() override
        {
            return static_cast<uint64_t>(System::BoxedValue<E>::unbox());
        }

        System::String ToString() ASPOSE_CONST override
        {
            return System::BoxedValue<E>::ToString();
        }
    };
}

#endif //_aspose_system_boxed_enum_h_
