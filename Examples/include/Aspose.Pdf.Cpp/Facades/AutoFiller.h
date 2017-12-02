#ifndef _Aspose_Pdf_Facades_AutoFiller_h_
#define _Aspose_Pdf_Facades_AutoFiller_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/io/memory_stream.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <cstdint>

#include "Facades/IFacade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class Form; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary>
/// Represents a class to receive data from database or other datasource, fills them into the designed fields of the template pdf and at last generates new pdf file or stream.
/// It has two template file input modes:input as a stream or a pdf file.
/// It has four types of output modes:one merged stream, one merged file, many small streams, many small files.
/// It can recieve literal data contained in a System.Data.DataTable.
/// </summary>
/// <example>
/// <code></code>
/// </example>
class ASPOSE_PDF_SHARED_API AutoFiller FINAL : public Aspose::Pdf::Facades::ISaveableFacade
{
    typedef AutoFiller ThisType;
    typedef Aspose::Pdf::Facades::ISaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Sets the fields which will not be flattened.
    /// If this property is not set, all the fields will be flattened.
    /// </summary>
    void set_UnFlattenFields(System::ArrayPtr<System::String> value);
    /// <summary>
    /// Gets or sets the OutputStream. One of four output modes. Its classical use case is Response.OutputStream.
    /// Please refer to the online demo.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_OutputStream();
    /// <summary>
    /// Gets or sets the OutputStream. One of four output modes. Its classical use case is Response.OutputStream.
    /// Please refer to the online demo.
    /// </summary>
    void set_OutputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets the many Output Streams. One of four output modes.
    /// </summary>
    System::ArrayPtr<System::SharedPtr<System::IO::Stream>> get_OutputStreams();
    /// <summary>
    /// Gets or sets the many Output Streams. One of four output modes.
    /// </summary>
    void set_OutputStreams(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> value);
    /// <summary>
    /// Gets or sets the input template stream. One of two input modes.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_InputStream();
    /// <summary>
    /// Gets or sets the input template stream. One of two input modes.
    /// </summary>
    void set_InputStream(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets or sets the input template file. One of two input modes.
    /// </summary>
    System::String get_InputFileName();
    /// <summary>
    /// Gets or sets the input template file. One of two input modes.
    /// </summary>
    void set_InputFileName(System::String value);
    /// <summary>
    /// Gets or sets the one big merged output file. One of the four output modes.
    /// </summary>
    System::String get_OutputFileName();
    /// <summary>
    /// Gets or sets the one big merged output file. One of the four output modes.
    /// </summary>
    void set_OutputFileName(System::String value);
    /// <summary>
    /// Gets or sets the Generating Path of the small pdf files if many small pdf files to be generated. It works with another property <see cref="BasicFileName"/>BasicFileName.
    /// One of the four output modes.
    /// </summary>
    System::String get_GeneratingPath();
    /// <summary>
    /// Gets or sets the Generating Path of the small pdf files if many small pdf files to be generated. It works with another property <see cref="BasicFileName"/>BasicFileName.
    /// One of the four output modes.
    /// </summary>
    void set_GeneratingPath(System::String value);
    /// <summary>
    /// Gets or sets the basic file name if many small files will be generated. The generated file will be like "BasicFileName0","BasicFileName1",...
    /// It works with another property <see cref="GeneratingPath"/>GeneratingPath.
    /// </summary>
    System::String get_BasicFileName();
    /// <summary>
    /// Gets or sets the basic file name if many small files will be generated. The generated file will be like "BasicFileName0","BasicFileName1",...
    /// It works with another property <see cref="GeneratingPath"/>GeneratingPath.
    /// </summary>
    void set_BasicFileName(System::String value);
    
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    void Save();
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    /// <param name="destFile">Output file name.</param>
    void Save(System::String destFile);
    /// <summary>
    /// Saves all the pdfs.
    /// </summary>
    /// <param name="destStream">Output stream.</param>
    void Save(System::SharedPtr<System::IO::Stream> destStream);
    /// <summary>
    /// Binds a Pdf file.
    /// </summary>
    /// <param name="srcFile">Pdf file name.</param>
    void BindPdf(System::String srcFile);
    /// <summary>
    /// Binds a Pdf file.
    /// </summary>
    /// <param name="srcStream">Pdf file stream.</param>
    void BindPdf(System::SharedPtr<System::IO::Stream> srcStream);
    /// <summary>
    /// Binds a Pdf document.
    /// </summary>
    /// <param name="srcDoc">Pdf document.</param>
    void BindPdf(System::SharedPtr<Document> srcDoc);
    /// <summary>
    /// Closes the object and output streams.
    /// </summary>
    void Close();
    /// <summary>
    /// Closes the object and output streams.
    /// </summary>
    void Dispose();
    
    virtual ~AutoFiller();
    
    AutoFiller();
    
protected:

    bool UseConcatenationAnyway;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool genMultiPdfs;
    System::ArrayPtr<System::SharedPtr<Form>> forms;
    System::SharedPtr<System::IO::Stream> outputStream;
    System::ArrayPtr<System::SharedPtr<System::IO::Stream>> outputStreams;
    System::ArrayPtr<System::SharedPtr<System::IO::MemoryStream>> midtermStreams;
    System::SharedPtr<System::IO::Stream> inputStream;
    System::String inputFileName;
    System::String outputFileName;
    System::String generatingPath;
    System::String basicFileName;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, int32_t>> unFlattenFields;
    bool mIsDisposed;
    
    /// <summary>
    /// Judges whether the field is a field to be flattened.
    /// </summary>
    /// <param name="fieldName"></param>
    /// <returns></returns>
    bool IsFlattenField(System::String fieldName);
    void CopyStream(System::SharedPtr<System::IO::Stream> src, System::SharedPtr<System::IO::Stream> dest);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_AutoFiller_h_

