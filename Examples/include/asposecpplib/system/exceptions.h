/// @file system/exceptions.h
/// Contains some macro definintions used in the definition of System::Exception class.
#ifndef __exceptions_h__
#define __exceptions_h__

#include <string>
#include <memory>
#include "system/exception.h"
#include "system/nullable.h"

#ifndef E_FAIL__
/// An alias for HRESULT code for unspecified error.
#define E_FAIL__ 0x80004005
#endif


//EXCEPTION_NAMESPACE(Parent::Name::Space, Class) or EXCEPTION_NAMESPACE(, System) if there is no parent
/// Declares a namespace 'ns' and in its scope declares a string object
/// that contains the full name of the namespace.
#define EXCEPTION_NAMESPACE(pns, ns) namespace ns\
{\
    const System::String CURRENT_NAMESPACE = System::String(_T(#pns)).IsEmpty() ? System::String(_T(#ns)) : System::String(_T(#pns)"::" _T(#ns));\
}\
namespace ns

//Reflection helpers similar ones from reflection.h
/// Macros which introduces ThisTypeInfo structure keeping a static instance of TypeInfo associated with @p thistype class.
#define __ThisTypeInfo_Runtime_NameSpace(thisType) \
        struct ThisTypeInfo : System::TypeInfoPtr { \
            std::u16string wname = thisType.ToU16Str(); \
            ThisTypeInfo() { \
                ptr = std::make_unique<System::TypeInfo>(wname.c_str());

// baseTypes: System::BaseTypesInfo<TypeA, TypeB, TypeC>
/// Macros which adds RTTI info to be used by @p thisType exception class inheriting @p baseTypes classes.
#define RTTI_INFO_NAMESPACE(thisType, baseTypes) \
    __RTTI_INFO_METHODS(thisType, baseTypes) \
    __ThisTypeInfo_Runtime_NameSpace((CURRENT_NAMESPACE + _T("::") + _T(#thisType))) \
    RTTI_INFO_END()

//Exception related macros
/// Creates a declaration of an exception class with name @p name
/// as a descendant of the @p parent. 
#define DECLARE_INHERITED_EXCEPTION(name, parent) \
struct ASPOSECPP_SHARED_CLASS name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
protected: \
    name(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : parent(info, context) {} \
};

/// Creates a declaration of an exception class with @p name name, @p parent baseclass end extra @p code int field available through constructors and getters.
#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_CODE(name, parent, code) \
struct ASPOSECPP_SHARED_CLASS name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(int code) : parent(u""), m_##code(code) {} \
    name(const System::String &message) : parent(message) {} \
    name(int code, const System::String &message) : parent(message), m_##code(code) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    int get_##code() { return m_##code; } \
protected: \
    name(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : parent(info, context) {} \
    virtual String ExtraDescription() const override { return String::FromUtf8(std::to_string(m_##code)); } \
    int m_##code = E_FAIL__; \
};

/// Creates a declaration of an exception class with name @p name
/// as a descendant of the 'parent' and adds a String member named @p member to it.
/// Should be used for cases where exception message argument preceeds extra member one in constructors.
#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(name, parent, member) \
struct ASPOSECPP_SHARED_CLASS name : parent { \
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
    name(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : parent(info, context) {} \
    virtual String ExtraDescription() const override { return m_##member; } \
    String m_##member; \
};

/// Creates a declaration of an exception class with name @p name
/// as a descendant of the 'parent' and adds a String member named @p member to it. 
/// Should be used for cases where extra member argument preceeds exception message one in constructors.
#define DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(name, parent, member) \
struct ASPOSECPP_SHARED_CLASS name : parent {\
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &member) : m_##member(member) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    name(const System::String &member, const System::String &message) : parent(message), m_##member(member) {} \
    template<typename T> name(const System::String& member, const T&, const System::String& message) : parent(message), m_##member(member) {} \
    String get_##member() { return m_##member; } \
protected: \
    name(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : parent(info, context) {} \
    virtual String ExtraDescription() const override { return m_##member; } \
    String m_##member; \
};

/// Exception type declaration macros used by ExtrenalException-alike exceptions.
#define DECLARE_EXTERNAL_EXCEPTION(name, parent, code) \
struct ASPOSECPP_SHARED_CLASS name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {} \
    name(const System::String &message, int code) : parent(message), m_##code(code) {} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {} \
    int get_##code() { return m_##code; } \
protected: \
    name(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : parent(info, context) {} \
    virtual String ExtraDescription() const override { return String::FromUtf8(std::to_string(m_##code)); } \
    int m_##code = E_FAIL__; \
};

/// Creates a declaration of an exception class with name @p name
/// as a descendant of the @p parent class and with @p hresult as HRESULT
/// associated with this exception. 
#define DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(name, parent, hresult) \
struct ASPOSECPP_SHARED_CLASS name : parent { \
    RTTI_INFO_NAMESPACE(name, System::BaseTypesInfo<parent>) \
public: \
    name() : parent() {m_HResult = hresult;} \
    name(std::nullptr_t): parent(nullptr) {} \
    name(const System::String &message) : parent(message) {m_HResult = hresult;} \
    name(const System::String &message, const Exception& innerException) : parent(message, innerException) {m_HResult = hresult;} \
};

EXCEPTION_NAMESPACE(, System) {
    /// A base class for classes that represent system (rather than application) exceptions. 
    DECLARE_INHERITED_EXCEPTION(SystemException, Exception);
    /// A base class for classes that represent application (rather than system) exceptions.
    DECLARE_INHERITED_EXCEPTION(ApplicationException, Exception);
    /// The exception that is thrown when a method is invoked on an object which is in the state inconsistent with this call. 
    DECLARE_INHERITED_EXCEPTION(InvalidOperationException, Exception);
    /// InvalidProgramException is present for compatibility reasons only.
    DECLARE_INHERITED_EXCEPTION(InvalidProgramException, Exception);
    /// InvalidTimeZoneException is thrown when time zone information is invalid.
    DECLARE_INHERITED_EXCEPTION(InvalidTimeZoneException, Exception);
    /// TimeZoneNotFoundException is thrown when time zone information is not found.
    DECLARE_INHERITED_EXCEPTION(TimeZoneNotFoundException, Exception);
    /// ObjectDisposedException is thrown when a method is invoked on a disposed object.
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ObjectDisposedException, InvalidOperationException, ObjectName);
    /// NotImplementedException is thrown when a method that is not implemented and serves as a stub.
    DECLARE_INHERITED_EXCEPTION(NotImplementedException, SystemException);
    /// NotSupportedException is thrown when a method being invoked is not supported or when an operation attempted on a stream is not supported.
    DECLARE_INHERITED_EXCEPTION(NotSupportedException, SystemException);
    /// PlatformNotSupportedException is thrown when a feature does not run on a particular platform.
    DECLARE_INHERITED_EXCEPTION(PlatformNotSupportedException, NotSupportedException);
    /// ArgumentException is thrown when an argument passed to a method being invoked is invalid.
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(ArgumentException, SystemException, ParamName);
    /// ArgumentNullException is thrown when a method being invoked is passed a null argument when the method expects a non-null value.
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ArgumentNullException, ArgumentException, ParamName);
    /// ArgumentOutOfRangeException is thrown when a method being invoked is passed an argument that falls out of the expected range of values for that argument.
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(ArgumentOutOfRangeException, ArgumentException, ParamName);
    /// FormatException is thrown when the format of the method's argument is not valid. 
    DECLARE_INHERITED_EXCEPTION(FormatException, SystemException);
    /// UriFormatException is thrown when the format of URI is not valid.
    DECLARE_INHERITED_EXCEPTION(UriFormatException, FormatException);
    /// ArithmeticException is throw when an error occurs during execution of arithmetic, conversion of casting operations.
    DECLARE_INHERITED_EXCEPTION(ArithmeticException, SystemException);
    /// OverflowException is thrown when an operation results in an overflow.
    DECLARE_INHERITED_EXCEPTION(OverflowException, ArithmeticException);
    /// DivideByZeroException is thrown when division by 0 is attempted in an arithmetic operation
    DECLARE_INHERITED_EXCEPTION(DivideByZeroException, ArithmeticException);
    /// OutOfMemoryException is throw when the application is out of memory.
    DECLARE_INHERITED_EXCEPTION(OutOfMemoryException, SystemException);
    //DECLARE_INHERITED_EXCEPTION(DecoderFallbackException, ArgumentException);
    //DECLARE_INHERITED_EXCEPTION(EncoderFallbackException, ArgumentException);
    /// IndexOutOfRangeException is thrown when an access to an element of a collection is attempted using an index that is outside its bounds.
    DECLARE_INHERITED_EXCEPTION(IndexOutOfRangeException, SystemException);
    /// RankException is thrown when an array argument with the number of dimensions different from the expected is passed to a method. 
    DECLARE_INHERITED_EXCEPTION(RankException, SystemException);
    /// InvalidCastException is thrown when invalid casting operation of invalid explicit conversion is attempted.
    DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(InvalidCastException, SystemException, (int32_t)2147500034u);
    /// NullReferenceException is thrown when dereferencing of a null-reference is attempted.
    DECLARE_INHERITED_EXCEPTION(NullReferenceException, SystemException);
    /// UnauthorizedAccessException is thrown when access is denied by the operating system because of an I/O error or a security error.
    DECLARE_INHERITED_EXCEPTION(UnauthorizedAccessException, SystemException);
    /// MemberAccessException is thrown when access to non-existent class' member is attempted or when access to the member is not permitted.
    DECLARE_INHERITED_EXCEPTION(MemberAccessException, SystemException);
    /// MemberAccessException is thrown when access to non-existent method is attempted or when access to the method is not permitted.
    DECLARE_INHERITED_EXCEPTION(MethodAccessException, MemberAccessException);
    /// OperationCanceledException is thrown in a thread upon cancellation of an operation that the thread was executing.
    DECLARE_INHERITED_EXCEPTION(OperationCanceledException, SystemException);
    /// StackOverflowException is thrown when the thread's execution stack overflows.
    DECLARE_INHERITED_EXCEPTION(StackOverflowException, SystemException);
    /// TimeoutException 
    DECLARE_INHERITED_EXCEPTION(TimeoutException, SystemException);
    /// ExecutionEngingException is present for compatibility reasons only.
    DECLARE_INHERITED_EXCEPTION_WITH_HRESULT(ExecutionEngineException, SystemException, (int32_t)2148734214u);
    /// TypeInitializationException is present for compatibility reasons only.
    DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER2(TypeInitializationException, SystemException, TypeName);
    /// DataMisalignedException thrown when a unit of data is read from or written to an address that is not a multiple of the data size.
    DECLARE_INHERITED_EXCEPTION(DataMisalignedException, SystemException);


    EXCEPTION_NAMESPACE(System, IO) {
        /// IOException is thrown when I/O error occurs.
        DECLARE_INHERITED_EXCEPTION(IOException, SystemException);
        /// EndOfStreamException is thrown when operation of reading from or writing to a stream past its end is attempted.
        DECLARE_INHERITED_EXCEPTION(EndOfStreamException, IOException);
        /// InvalidDataException is thrown when a data stream is not in valid format.
        DECLARE_INHERITED_EXCEPTION(InvalidDataException, SystemException);
        /// DirectoryNotFoundException is thrown when a directory or a file is not found.
        DECLARE_INHERITED_EXCEPTION(DirectoryNotFoundException, IOException);
        /// FileLoadException is thrown when a error occurs during loading of a file.
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(FileLoadException, IOException, FileName);
        /// FileNotFoundException is thrown when access to a file that does not exist on disk is attempted.
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(FileNotFoundException, IOException, FileName);
    }

    EXCEPTION_NAMESPACE(System, Globalization) {
        /// CultureNotFoundException is thrown when an attempt is made to construct a culture that is not available.
        struct ASPOSECPP_SHARED_CLASS CultureNotFoundException : ArgumentException {
            RTTI_INFO_NAMESPACE(CultureNotFoundException, System::BaseTypesInfo<ArgumentException>)
        public:
            CultureNotFoundException() : ArgumentException() {}
            CultureNotFoundException(std::nullptr_t): ArgumentException(nullptr) {}
            CultureNotFoundException(const String& message) : ArgumentException(message) {}
            CultureNotFoundException(const String& paramName, const String& message) : ArgumentException(message, paramName) {}
            CultureNotFoundException(const String& message, const Exception& innerException) : ArgumentException(message, innerException) {}
            CultureNotFoundException(const String& paramName, int invalidCultureId, const String& message) : ArgumentException(message, paramName), m_invalid_culture_id(invalidCultureId) {}
            CultureNotFoundException(const String& message, int invalidCultureId, Exception innerException) : ArgumentException(message, innerException), m_invalid_culture_id(invalidCultureId) {}
            CultureNotFoundException(const String& paramName, const String& invalidCultureName, const String& message) : ArgumentException(message, paramName), m_invalid_culture_name(invalidCultureName) {}
            CultureNotFoundException(const String& message, const String& invalidCultureName, Exception innerException) : ArgumentException(message, innerException), m_invalid_culture_name(invalidCultureName) {}
            virtual Nullable<int> get_InvalidCultureId() const { return m_invalid_culture_id; }
            virtual String get_InvalidCultureName() const { return m_invalid_culture_name; }
        protected:
            CultureNotFoundException(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context) : ArgumentException(info, context) {}
        private:
            Nullable<int> m_invalid_culture_id;
            String m_invalid_culture_name;
        };
    }

    EXCEPTION_NAMESPACE(System, Security) {
        /// SecurityException is thrown when a security error occurs.
        DECLARE_INHERITED_EXCEPTION(SecurityException, SystemException);

        EXCEPTION_NAMESPACE(System::Security, Cryptography) {
            /// CryptographicException is thrown when an error occurs during cryptographic operation.
            DECLARE_INHERITED_EXCEPTION(CryptographicException, SystemException);
        }
        EXCEPTION_NAMESPACE(System::Security, Authentication) 
        {
            /// AuthenticationException 
            DECLARE_INHERITED_EXCEPTION(AuthenticationException, SystemException);
        }
    }

    EXCEPTION_NAMESPACE(System, Threading) {
        /// ThreadStateException is thrown when the current thread is in non-valid state for the method call.
        DECLARE_INHERITED_EXCEPTION(ThreadStateException, SystemException);
        /// SemaphoreFullException is thrown by the Semaphore.Release() method if it is called when the semaphore's count is at the maximum.
        DECLARE_INHERITED_EXCEPTION(SemaphoreFullException, SystemException);
        /// ThreadAbortException 
        DECLARE_INHERITED_EXCEPTION(ThreadAbortException, SystemException);
		/// ThreadInterruptedException is thrown when a Thread is interrupted while it is in a waiting state.
        DECLARE_INHERITED_EXCEPTION(ThreadInterruptedException, SystemException);
    }

    EXCEPTION_NAMESPACE(System, ComponentModel)
    {
        /// Win32Exception for compatibility reasons.
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_CODE(Win32Exception, SystemException, NativeErrorCode);
        /// ArgumentException is thrown when an argument which is an enumerator passed to a method being invoked is invalid.
        DECLARE_INHERITED_EXCEPTION_WITH_EXTRA_MEMBER(InvalidEnumArgumentException, ArgumentException, ParamName);
    }

    EXCEPTION_NAMESPACE(System, Collections)
    {
        EXCEPTION_NAMESPACE(System::Collections, Generic)
        {
            /// KeyNotFoundException is thrown when access to a collection element is attempted using the key that does not match any key in the collection.
            DECLARE_INHERITED_EXCEPTION(KeyNotFoundException, SystemException);
        }
    }

    EXCEPTION_NAMESPACE(System, Net)
    {
        /// WebException is thrown when an error occurs while accessing the network.
        DECLARE_INHERITED_EXCEPTION(WebException, InvalidOperationException);
    }

    EXCEPTION_NAMESPACE(System, Web)
    {
        /// HttpException is thrown when an error occurs while processing an HTTP request.
        DECLARE_INHERITED_EXCEPTION(HttpException, Exception);
    }

    EXCEPTION_NAMESPACE(System, Runtime)
    {
        EXCEPTION_NAMESPACE(System::Runtime, InteropServices)
        {
            /// ExternalException is a base class for classes that represent COM interop exceptions or SEH exceptions.
            DECLARE_EXTERNAL_EXCEPTION(ExternalException, Exception, ErrorCode);
        }

        EXCEPTION_NAMESPACE(System::Runtime, Serialization)
        {
            /// SerializationException is thrown when an error occurs during serialization or deserialization.
            DECLARE_INHERITED_EXCEPTION(SerializationException, SystemException);
        }
    }

    EXCEPTION_NAMESPACE(System, Reflection)
    {
        /// ReflectionTypeLoadException is thrown by the Module.GetTypes method if any of the classes in a module fail to load. 
        DECLARE_INHERITED_EXCEPTION(ReflectionTypeLoadException, Exception);
        DECLARE_INHERITED_EXCEPTION(TargetInvocationException, ApplicationException);
    }
}

EXCEPTION_NAMESPACE(,NUnit)
{
    EXCEPTION_NAMESPACE(NUnit, Framework)
    {
        /// AssertionException is thrown when an assertion fails.
        DECLARE_INHERITED_EXCEPTION(AssertionException, System::SystemException);
    }
}

#endif
