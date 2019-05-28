/// @file system/exception.h
/// Contains the declaration of System::Exception class.
#ifndef _aspose_system_exception_h_
#define _aspose_system_exception_h_

#include <system/object.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/runtime/serialization/streaming_context.h>
#include <exception>
#include <type_traits>
#include <cstdint>
#include <memory>

namespace System
{
namespace Runtime {
namespace Serialization {

class SerializationInfo;

}
}
    /// Represents an exception.
    /// This type should be allocated on stack and passed to functions by value or by reference.
    /// Never use System::SmartPtr class to manage objects of this type.
    class ASPOSECPP_SHARED_CLASS Exception: public System::Object, public std::exception
    {
        RTTI_INFO(System::Exception, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Constructs an instance of Exception class.
        ASPOSECPP_SHARED_API Exception();
        /// Constructs a null-instance of Exception class that does not represent any exception.
        ASPOSECPP_SHARED_API Exception(std::nullptr_t);
        /// Constructs an instance of Exception class and assigns the specified error message to it.
        /// @param message String that contains the error destription
        ASPOSECPP_SHARED_API Exception(const String& message);
        /// Constructs an instance of Exception class and assigns the specified error message and a reference to the inner exception object. 
        /// @param message String that contains the error destription
        /// @param innerException A reference to the exception object interpreted as a cause for the exception represented by the Exception being constructed 
        /// @tparam T The type of the object representing the inner exception
        template<typename T>
        Exception(const String &message, const T& innerException)
            : m_reference(GenerateReference()), m_message(message), m_HResult((int32_t)2148734208u)
        {
            m_innerexception = System::MakeObject<T>(innerException);
        }

        /// Constructs an instance of Exception which is a copy of and represents the same exception as the specified object.
        /// @param e An Exception object to copy the object being constructed from
        ASPOSECPP_SHARED_API Exception(const Exception &e);

        /// Assigns all the properties of the specified Exception object to the current object; as a result both current and the specified objects represent the same exception.
        /// @param e The Exception object to copy the attributes from
        /// @returns A reference to the self
        ASPOSECPP_SHARED_API Exception& operator=(const Exception &e);

        static void* operator new(std::size_t) = delete;
        static void* operator new[](std::size_t) = delete;

        /// Determines if the current Exception object is a null-object i.e. does not represent any exception.
        /// @returns True if the current Exception object is a null-object, otherwise - false
        ASPOSECPP_SHARED_API bool operator == (const std::nullptr_t) const;

        /// Determines if the current Exception object is not a null-object i.e. represents an exception.
        /// @returns True if the current Exception object is not a null-object, otherwise - false
        ASPOSECPP_SHARED_API bool operator != (const std::nullptr_t) const;

        /// Determines if the current and the specified Exception objects are equal.
        /// @param e The Exception object to compare the current object with
        /// @returns True if the currnent and the specified objects are the same object or both represent the same exception or both do not represent any exceptions (are null-objects), otherwise - false 
        ASPOSECPP_SHARED_API bool operator == (const Exception &e) const;

        /// Determines if the current Exception object is a null-object i.e. does not represent any exception.
        /// @returns True if the current Exception object is a null-object, otherwise - false
        ASPOSECPP_SHARED_API bool Equals(const std::nullptr_t) const;

        /// Determines if the current and the specified Exception objects are equal.
        /// @param e The Exception object to compare the current object with
        /// @returns True if the currnent and the specified objects are the same object or both represent the same exception or both do not represent any exceptions (are null-objects), otherwise - false 
        ASPOSECPP_SHARED_API bool Equals(const Exception &e) const;

        // imitate to C# .Message property for correct translation
        /// Returns the string containing the error destcription.
        virtual ASPOSECPP_SHARED_API String get_Message() const;

        /// Returns the string containing the stack trace.
        virtual ASPOSECPP_SHARED_API String get_StackTrace() const;

        /// Returns a reference to the object representing the inner exception.
        virtual ASPOSECPP_SHARED_API System::Exception& get_InnerException() const;

        /// Determines if the current Exception object is a null-object i.e. does not represent any exception.
        /// @returns True if the current Exception object is a null-object, otherwise - false
        ASPOSECPP_SHARED_API bool IsNull() const;

        /// Returns the copy of Exception object representing the inner-most exception.
        virtual ASPOSECPP_SHARED_API Exception GetBaseException() const;

        /// Returns a 32-bit integer value which is a HRESULT code associated with the exception reprsented by the current object.
        ASPOSECPP_SHARED_API int32_t get_HResult() ASPOSE_CONST;

        /// Returns the string representation of the current object.
        virtual ASPOSECPP_SHARED_API String ToString() ASPOSE_CONST override;

        /// Returns the description of the exception represented by the current object.
        virtual ASPOSECPP_SHARED_API const char* what() const noexcept override;

    protected:
        /// A unique unsigned 64-bit integer value that identifies particular exception.
        uint64_t m_reference;
        /// The error description.
        String m_message;
        /// The Exception object representing the inner exception.
        System::SharedPtr<System::Exception> m_innerexception;

        /// A string describing the std::exception portion of the current object.
        mutable std::string m_std_message;

        /// HRESULT code associated with the exception represented by the current object.
        mutable int32_t m_HResult;

        /// Deserializes exception.
        /// @param info SerializationInfo object holding serialized exception.
        /// @param context Streaming context bound to serialization info passed.
        ASPOSECPP_SHARED_API Exception(const System::SharedPtr<System::Runtime::Serialization::SerializationInfo>& info, System::Runtime::Serialization::StreamingContext context);

        // Use it in derived classes
        /// Returns a string containing additional description of the exception.
        virtual ASPOSECPP_SHARED_API String ExtraDescription() const;

    private:
        /// Returns a string containing the full description of the exception.
        virtual ASPOSECPP_SHARED_API String FullMessage() const;

        /// Generates and returns a unique identifier.
        static ASPOSECPP_SHARED_API uint64_t GenerateReference();
    };
} // System

/// Determines if the specified Exception objects are not equal.
/// @param e1 The first comparand
/// @param e2 The second comparand
/// @returns False if both objects are the same object or both represent the same exception or both do not represent any exceptions (are null-objects), otherwise - true 
ASPOSECPP_SHARED_API bool operator != (const System::Exception& e1, const System::Exception& e2);

/// Determines if the specified Exception object is a null-object i.e. does not represent any exception.
/// @param e The Exception object to check
/// @returns True if the specified Exception object is a null-object, otherwise - false
ASPOSECPP_SHARED_API bool operator == (const std::nullptr_t, const System::Exception &e);

/// Determines if the specified Exception object is not a null-object i.e. represents an exception.
/// @param e The Exception object to check
/// @returns True if the specified Exception object is not a null-object, otherwise - false
ASPOSECPP_SHARED_API bool operator != (const std::nullptr_t, const System::Exception &e);

/// A template predicate that determines if the specified type is a Exception class or its descendant.
/// @tparam T The type to check
template <typename T> struct IsException : std::is_base_of<System::Exception, T> {};

#endif // _aspose_system_exception_h_
