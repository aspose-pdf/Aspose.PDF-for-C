#ifndef _aspose_zip_exceptions_h_
#define _aspose_zip_exceptions_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.
// Exceptions.cs
// ------------------------------------------------------------------
// Copyright (c) 2008, 2009 Dino Chiesa and Microsoft Corporation.
// All rights reserved.
// This code module is part of DotNetZip, a zipfile class library.
// ------------------------------------------------------------------
// This code is licensed under the Microsoft Public License.
// See the file License.txt for the license details.
// More info on: http://dotnetzip.codeplex.com
// ------------------------------------------------------------------
// last saved (in emacs):
// Time-stamp: <2009-August-14 00:52:07>
// ------------------------------------------------------------------
// This module defines exceptions used in the class library.

#include <system/string.h>
#include <system/exceptions.h>

#ifdef ASPOSE_FOUNDATION_NS
namespace Aspose { namespace Foundation { namespace Zip {
#else
namespace Aspose { namespace Zip {
#endif

/// Base exception type for all custom exceptions in the Zip library. It acts as a marker class.

class ASPOSECPP_SHARED_CLASS ZipException : public System::Exception
{
    typedef ZipException ThisType;
    typedef System::Exception BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:
    ASPOSECPP_SHARED_API ZipException();
    ASPOSECPP_SHARED_API ZipException(std::nullptr_t);
    ASPOSECPP_SHARED_API ZipException(const System::String& message);
    ASPOSECPP_SHARED_API ZipException(const System::String& message, const System::Exception& innerException);

};


/// Issued when an ZipEntry::ExtractWithPassword() method is invoked
/// with an incorrect password.

class ASPOSECPP_SHARED_CLASS BadPasswordException : public ZipException
{
    typedef BadPasswordException ThisType;
    typedef ZipException BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API BadPasswordException();
    ASPOSECPP_SHARED_API BadPasswordException(std::nullptr_t);
    ASPOSECPP_SHARED_API BadPasswordException(const System::String& message);
    ASPOSECPP_SHARED_API BadPasswordException(const System::String& message, const System::Exception& innerException);

};

/// Indicates that a read was attempted on a stream, and bad or incomplete data was
/// received.

class ASPOSECPP_SHARED_CLASS BadReadException : public ZipException
{
    typedef BadReadException ThisType;
    typedef ZipException BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API BadReadException();
    ASPOSECPP_SHARED_API BadReadException(std::nullptr_t);
    ASPOSECPP_SHARED_API BadReadException(const System::String& message);
    ASPOSECPP_SHARED_API BadReadException(const System::String& message, const System::Exception& innerException);

};

/// Issued when an CRC check fails upon extracting an entry from a zip archive.

class ASPOSECPP_SHARED_CLASS BadCrcException : public ZipException
{
    typedef BadCrcException ThisType;
    typedef ZipException BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API BadCrcException();
    ASPOSECPP_SHARED_API BadCrcException(std::nullptr_t);
    ASPOSECPP_SHARED_API BadCrcException(const System::String& message);

};

/// Issued when errors occur saving a self-extracting archive.

class ASPOSECPP_SHARED_CLASS SfxGenerationException : public ZipException
{
    typedef SfxGenerationException ThisType;
    typedef ZipException BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API SfxGenerationException();
    ASPOSECPP_SHARED_API SfxGenerationException(std::nullptr_t);
    ASPOSECPP_SHARED_API SfxGenerationException(const System::String& message);

};

/// Indicates that an operation was attempted on a ZipFile which was not possible
/// given the state of the instance. For example, if you call <c>Save()</c> on a ZipFile
/// which has no filename set, you can get this exception.

class ASPOSECPP_SHARED_CLASS BadStateException : public ZipException
{
    typedef BadStateException ThisType;
    typedef ZipException BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API BadStateException();
    ASPOSECPP_SHARED_API BadStateException(std::nullptr_t);
    ASPOSECPP_SHARED_API BadStateException(const System::String& message);
    ASPOSECPP_SHARED_API BadStateException(const System::String& message, const System::Exception& innerException);

};

/// A general purpose exception class for exceptions in the Zlib library.

class ASPOSECPP_SHARED_CLASS ZlibException : public System::Exception
{
    typedef System::Exception BaseType;

    ASPOSECPP_SHARED_RTTI_INFO_DECL();

public:

    ASPOSECPP_SHARED_API ZlibException();
    ASPOSECPP_SHARED_API ZlibException(std::nullptr_t);
    ASPOSECPP_SHARED_API ZlibException(const System::String& s);
};


#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_exceptions_h_

