#ifndef _aspose_system_exception_h_
#define _aspose_system_exception_h_

#include "system/object.h"
#include "system/string.h"
#include "system/shared_ptr.h"
#include <exception>
#include <type_traits>
#include <cstdint>

namespace System
{
namespace Runtime {
namespace Serialization {

class SerializationInfo;
class StreamingContext;

}
}

    class Exception: public System::Object
                   , public std::exception
    {
        RTTI_INFO(System::Exception, ::System::BaseTypesInfo<System::Object>)

    public:
        Exception();
        Exception(std::nullptr_t);
        Exception(const String& message);

        template<typename T>
        Exception(const String &message, const T& innerException)
            : m_reference(this), m_message(message), m_HResult((int32_t)2148734208u)
        {
            m_innerexception = System::MakeObject<T>(innerException);
        }

        Exception(const Exception &e);

        Exception& operator=(const Exception &e);

        static void* operator new(std::size_t) = delete;
        static void* operator new[](std::size_t) = delete;

        bool operator == (const std::nullptr_t) const;
        bool operator != (const std::nullptr_t) const;

        bool operator == (const Exception &e) const;

        bool Equals(const std::nullptr_t) const;
        bool Equals(const Exception &e) const;

        // imitate to C# .Message property for correct translation
        virtual String get_Message() const;
        virtual String get_StackTrace() const;

        virtual System::Exception& get_InnerException() const;
        bool IsNull() const;

        virtual Exception GetBaseException() const;
        int32_t get_HResult() ASPOSE_CONST;

        virtual String ToString() ASPOSE_CONST override;

        virtual const char* what() const noexcept override;

    protected:
        const Exception * m_reference;
        String m_message;
        System::SharedPtr<System::Exception> m_innerexception;

        mutable std::string m_std_message;
        mutable int32_t m_HResult;

        Exception(System::SharedPtr<System::Runtime::Serialization::SerializationInfo> info, System::Runtime::Serialization::StreamingContext context);

        // Use it in derived classes
        virtual String ExtraDescription() const;

    private:
        virtual String FullMessage() const;
    };
} // System

bool operator != (const System::Exception& e1, const System::Exception& e2);

bool operator == (const std::nullptr_t, const System::Exception &e);
bool operator != (const std::nullptr_t, const System::Exception &e);

template <typename T> struct IsException : std::is_base_of<System::Exception, T> {};

#endif // _aspose_system_exception_h_
