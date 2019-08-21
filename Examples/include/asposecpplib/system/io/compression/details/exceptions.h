/// @file system/io/compression/details/exceptions.h
#pragma once

#include <system/string.h>
#include <system/exceptions.h>

namespace Aspose { EXCEPTION_NAMESPACE(Aspose, Zip) {

/// Base exception type for all custom exceptions in the Zip library. It acts as a marker class.
DECLARE_INHERITED_EXCEPTION(ZipException, System::Exception);

/// Issued when an ZipEntry::ExtractWithPassword() method is invoked
/// with an incorrect password.
DECLARE_INHERITED_EXCEPTION(BadPasswordException, ZipException);

/// Indicates that a read was attempted on a stream, and bad or incomplete data was
/// received.
DECLARE_INHERITED_EXCEPTION(BadReadException, ZipException);

/// Issued when an CRC check fails upon extracting an entry from a zip archive.
DECLARE_INHERITED_EXCEPTION(BadCrcException, ZipException);

/// Issued when errors occur saving a self-extracting archive.
DECLARE_INHERITED_EXCEPTION(SfxGenerationException, ZipException);

/// Indicates that an operation was attempted on a ZipFile which was not possible
/// given the state of the instance. For example, if you call <c>Save()</c> on a ZipFile
/// which has no filename set, you can get this exception.
DECLARE_INHERITED_EXCEPTION(BadStateException, ZipException);

/// A general purpose exception class for exceptions in the Zlib library.
DECLARE_INHERITED_EXCEPTION(ZlibException, System::Exception);

}} // namespace Aspose::Zip
