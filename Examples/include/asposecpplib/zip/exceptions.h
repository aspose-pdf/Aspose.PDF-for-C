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

class ZipException : public System::Exception
{
    typedef ZipException ThisType;
    typedef System::Exception BaseType;

    RTTI_INFO_DECL();

public:
    ZipException();
    ZipException(std::nullptr_t);
    ZipException(const System::String& message);
    ZipException(const System::String& message, const System::Exception& innerException);

};


/// Issued when an ZipEntry::ExtractWithPassword() method is invoked
/// with an incorrect password.

class BadPasswordException : public ZipException
{
    typedef BadPasswordException ThisType;
    typedef ZipException BaseType;

    RTTI_INFO_DECL();

public:

    BadPasswordException();
    BadPasswordException(std::nullptr_t);
    BadPasswordException(const System::String& message);
    BadPasswordException(const System::String& message, const System::Exception& innerException);

};

/// Indicates that a read was attempted on a stream, and bad or incomplete data was
/// received.

class BadReadException : public ZipException
{
    typedef BadReadException ThisType;
    typedef ZipException BaseType;

    RTTI_INFO_DECL();

public:

    BadReadException();
    BadReadException(std::nullptr_t);
    BadReadException(const System::String& message);
    BadReadException(const System::String& message, const System::Exception& innerException);

};

/// Issued when an CRC check fails upon extracting an entry from a zip archive.

class BadCrcException : public ZipException
{
    typedef BadCrcException ThisType;
    typedef ZipException BaseType;

    RTTI_INFO_DECL();

public:

    BadCrcException();
    BadCrcException(std::nullptr_t);
    BadCrcException(const System::String& message);

};

/// Issued when errors occur saving a self-extracting archive.

class SfxGenerationException : public ZipException
{
    typedef SfxGenerationException ThisType;
    typedef ZipException BaseType;

    RTTI_INFO_DECL();

public:

    SfxGenerationException();
    SfxGenerationException(std::nullptr_t);
    SfxGenerationException(const System::String& message);

};

/// Indicates that an operation was attempted on a ZipFile which was not possible
/// given the state of the instance. For example, if you call <c>Save()</c> on a ZipFile
/// which has no filename set, you can get this exception.

class BadStateException : public ZipException
{
    typedef BadStateException ThisType;
    typedef ZipException BaseType;

    RTTI_INFO_DECL();

public:

    BadStateException();
    BadStateException(std::nullptr_t);
    BadStateException(const System::String& message);
    BadStateException(const System::String& message, const System::Exception& innerException);

};

/// A general purpose exception class for exceptions in the Zlib library.

class ZlibException : public System::Exception
{
    typedef System::Exception BaseType;

    RTTI_INFO_DECL();

public:

    ZlibException();
    ZlibException(std::nullptr_t);
    ZlibException(const System::String& s);
};


#ifdef ASPOSE_FOUNDATION_NS
}}} // namespace Aspose::Foundation::Zip
#else
}} // namespace Aspose::Zip
#endif

#endif // _aspose_zip_exceptions_h_

