#ifndef __exceptions_h__
#define __exceptions_h__

#include <string>
#include <memory>
#include "system/exception.h"

#ifndef E_FAIL__
#define E_FAIL__ 0x80004005
#endif


//EXCEPTION_NAMESPACE(Parent::Name::Space, Class) or EXCEPTION_NAMESPACE(, System) if there is no parent
#define EXCEPTION_NAMESPACE(pns, ns) namespace ns\
{\
    const System::String CURRENT_NAMESPACE = System::String(_T(#pns)).IsEmpty() ? System::String(_T(#ns)) : System::String(_T(#pns)"::" _T(#ns));\
}\
namespace ns

//Reflection helpers similar ones from reflection.h
#define __ThisTypeInfo_Runtime_NameSpace(thisType) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            std::wstring wname = thisType.ToWCS(); \
            ThisTypeInfo() { \
                ptr = std::make_unique<System::TypeInfo>(wname.c_str());

// baseTypes: System::BaseTypesInfo<TypeA, TypeB, TypeC>
#define RTTI_INFO_NAMESPACE(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime_NameSpace((CURRENT_NAMESPACE + _T("::") + _T(#thisType))) \
    RTTI_INFO_END()

//Exception related macros
#define DECLARE_INHERITED_EXCEPTION(name, parent) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
};

#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_CODE(name, parent, code) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(int code) : parent(L""), m_##code(code) {} \
    name(const System::String &message) : parent(message) {} \
    name(int code, const System::String &message) : parent(message), m_##code(code) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    int get_##code() { return m_##code; } \
protected: \
    virtual String ExtraDescription() const { return String::FromUtf8(std::to_string(m_##code)); } \
    int m_##code = E_FAIL__; \
};

#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(name, parent, member) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    name(const System::String &message, const System::String & member) : parent(message), m_##member(member) {} \
    name(const System::String &message, const System::String & member, const Exception& innerException) \
        : parent(message, innerException), m_##member(member) {} \
    String get_##member() { return m_##member; } \
protected: \
    virtual String ExtraDescription() const { return m_##member; } \
    String m_##member; \
};

#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(name, parent, member) \
struct name : parent {\
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    name(const System::String & member, const System::String &message) : parent(message), m_##member(member) {} \
    name(const System::String & member, int value, const System::String &message) : parent(message), m_##member(member) {} \
    name(const System::String & member, const System::String& value, const System::String &message) : parent(message), m_##member(member) {} \
    String get_##member() { return m_##member; } \
protected: \
    virtual String ExtraDescription() const { return m_##member; } \
    String m_##member; \
};

#define DECLARE_INHERITED_EXCEPTION_MSG_SUFFIX(name, suffix, parent) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message + (suffix)) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
};

#define DECLARE_EXTERNAL_EXCEPTION(name, parent, code) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, int code) : parent(message), m_##code(code) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    int get_##code() { return m_##code; } \
protected: \
    virtual String ExtraDescription() const { return String::FromUtf8(std::to_string(m_##code)); } \
    int m_##code = E_FAIL__; \
};

#define DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(name, parent, hresult) \
struct name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {m_HResult = hresult;} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {m_HResult = hresult;} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {m_HResult = hresult;} \
};

EXCEPTION_NAMESPACE(, System) {
    DECLARE_INHERITED_EXCEPTION(SystemException, Exception);
    DECLARE_INHERITED_EXCEPTION(ApplicationException, Exception);
    DECLARE_INHERITED_EXCEPTION(InvalidOperationException, Exception);
    DECLARE_INHERITED_EXCEPTION(InvalidProgramException, Exception);
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ObjectDisposedException, InvalidOperationException, ObjectName);
    DECLARE_INHERITED_EXCEPTION_MSG_SUFFIX(NotImplementedException, String(L" is not implemented"), SystemException);
    DECLARE_INHERITED_EXCEPTION_MSG_SUFFIX(NotSupportedException, String(L" is not supported"), SystemException);
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(ArgumentException, SystemException, ParamName);
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ArgumentNullException, ArgumentException, ParamName);
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ArgumentOutOfRangeException, ArgumentException, ParamName);
    DECLARE_INHERITED_EXCEPTION(IOException, SystemException);
    DECLARE_INHERITED_EXCEPTION(FormatException, SystemException);
    DECLARE_INHERITED_EXCEPTION(UriFormatException, FormatException);
    DECLARE_INHERITED_EXCEPTION(ArithmeticException, SystemException);
    DECLARE_INHERITED_EXCEPTION(OverflowException, ArithmeticException);
    DECLARE_INHERITED_EXCEPTION(DivideByZeroException, ArithmeticException);
    DECLARE_INHERITED_EXCEPTION(OutOfMemoryException, SystemException);
    //DECLARE_INHERITED_EXCEPTION(DecoderFallbackException, ArgumentException);
    //DECLARE_INHERITED_EXCEPTION(EncoderFallbackException, ArgumentException);
    DECLARE_INHERITED_EXCEPTION(IndexOutOfRangeException, SystemException);
    DECLARE_INHERITED_EXCEPTION(RankException, SystemException);
    DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(InvalidCastException, SystemException, (int32_t)2147500034u);
    DECLARE_INHERITED_EXCEPTION(NullReferenceException, SystemException);
    DECLARE_INHERITED_EXCEPTION(UnauthorizedAccessException, SystemException);
    DECLARE_INHERITED_EXCEPTION(MemberAccessException, SystemException);
    DECLARE_INHERITED_EXCEPTION(MethodAccessException, MemberAccessException);
    DECLARE_INHERITED_EXCEPTION(StackOverflowException, SystemException);
    DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(ExecutionEngineException, SystemException, (int32_t)2148734214u);


    EXCEPTION_NAMESPACE(System, IO) {
        DECLARE_INHERITED_EXCEPTION(IOException, SystemException);
        DECLARE_INHERITED_EXCEPTION(EndOfStreamException, IOException);
        DECLARE_INHERITED_EXCEPTION(InvalidDataException, SystemException);
        DECLARE_INHERITED_EXCEPTION(DirectoryNotFoundException, IOException);
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(FileLoadException, IOException, FileName);
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(FileNotFoundException, IOException, FileName);
    }

    EXCEPTION_NAMESPACE(System, Globalization) {
        DECLARE_INHERITED_EXCEPTION_MSG_SUFFIX(CultureNotFoundException, String(L" culture not found"), ArgumentException);
    }

    EXCEPTION_NAMESPACE(System, Security) {
        DECLARE_INHERITED_EXCEPTION(SecurityException, SystemException);

        EXCEPTION_NAMESPACE(System::Security, Cryptography) {
            DECLARE_INHERITED_EXCEPTION(CryptographicException, SystemException);
        }
    }

    EXCEPTION_NAMESPACE(System, Threading) {
        DECLARE_INHERITED_EXCEPTION(ThreadStateException, SystemException);
    }

    EXCEPTION_NAMESPACE(System, ComponentModel)
    {
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_CODE(Win32Exception, SystemException, NativeErrorCode);
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(InvalidEnumArgumentException, ArgumentException, ParamName);
    }

    EXCEPTION_NAMESPACE(System, Collections)
    {
        EXCEPTION_NAMESPACE(System::Collections, Generic)
        {
            DECLARE_INHERITED_EXCEPTION(KeyNotFoundException, SystemException);
        }
    }

    EXCEPTION_NAMESPACE(System, Net)
    {
        DECLARE_INHERITED_EXCEPTION(WebException, InvalidOperationException);
    }

    EXCEPTION_NAMESPACE(System, Web)
    {
        DECLARE_INHERITED_EXCEPTION(HttpException, Exception);
    }

    EXCEPTION_NAMESPACE(System, Runtime)
    {
        EXCEPTION_NAMESPACE(System::Runtime, InteropServices)
        {
            DECLARE_EXTERNAL_EXCEPTION(ExternalException, Exception, ErrorCode);
        }
    }
}

EXCEPTION_NAMESPACE(,NUnit)
{
    EXCEPTION_NAMESPACE(NUnit, Framework)
    {
    DECLARE_INHERITED_EXCEPTION(AssertionException, System::SystemException);
    }
}

#endif
