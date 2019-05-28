#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/idisposable.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// General facade interface that defines common facades methods.
/// </summary>
class ASPOSE_PDF_SHARED_API IFacade : public System::IDisposable
{
    typedef IFacade ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Binds PDF document for editing.
    /// </summary>
    /// <param name="srcFile">The path of input PDF document.</param>
    virtual void BindPdf(System::String srcFile) = 0;
    /// <summary>
    /// Binds PDF document for editing.
    /// </summary>
    /// <param name="srcStream">The stream of input PDF document.</param>
    virtual void BindPdf(System::SharedPtr<System::IO::Stream> srcStream) = 0;
    /// <summary>
    /// Binds PDF document for editing.
    /// </summary>
    /// <param name="srcDoc">Input PDF document.</param>
    virtual void BindPdf(System::SharedPtr<Document> srcDoc) = 0;
    /// <summary>
    /// Releases any resources associates with the current facade.
    /// </summary>
    virtual void Close() = 0;
    
};

/// <summary>
/// Facade interface that defines methods common for all saveable facades.
/// </summary>
class ASPOSE_PDF_SHARED_API ISaveableFacade : public virtual Aspose::Pdf::Facades::IFacade
{
    typedef ISaveableFacade ThisType;
    typedef Aspose::Pdf::Facades::IFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Saves the result PDF document to file.
    /// </summary>
    /// <param name="destFile">The path of output PDF document.</param>
    virtual void Save(System::String destFile) = 0;
    /// <summary>
    /// Saves the result PDF document to stream.
    /// </summary>
    /// <param name="destStream">The stream of output PDF document.</param>
    virtual void Save(System::SharedPtr<System::IO::Stream> destStream) = 0;
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose


