#ifndef _Aspose_Pdf_FileSpecification_h_
#define _Aspose_Pdf_FileSpecification_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfAConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { class EmbeddedFileCollection; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileEditor; } } }
namespace Aspose { namespace Pdf { class FileParams; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class FileAttachmentAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class GoToRemoteAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class LaunchAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class SubmitFormAction; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { class RenditionAction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { enum class FileEncoding; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Filters { enum class FilterType; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing embedded file.
/// </summary>
class ASPOSE_PDF_SHARED_API FileSpecification FINAL : public System::Object
{
    typedef FileSpecification ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfAConvertStrategy;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::EmbeddedFileCollection;
    friend class Aspose::Pdf::Facades::PdfFileEditor;
    friend class Aspose::Pdf::FileParams;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::FileAttachmentAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::GoToRemoteAction;
    friend class Aspose::Pdf::InteractiveFeatures::LaunchAction;
    friend class Aspose::Pdf::InteractiveFeatures::SubmitFormAction;
    friend class Aspose::Pdf::InteractiveFeatures::RenditionAction;
    
public:

    /// <summary>
    /// Gets or sets encoding format.
    /// Possible values: Zip - file is compressed with ZIP, 
    /// None - file is not compressed.
    /// </summary>
    FileEncoding get_Encoding();
    /// <summary>
    /// Gets or sets encoding format.
    /// Possible values: Zip - file is compressed with ZIP, 
    /// None - file is not compressed.
    /// </summary>
    void set_Encoding(FileEncoding value);
    /// <summary>
    /// If true, contents of the file will be included in the file specification. 
    /// </summary>
    bool get_IncludeContents();
    /// <summary>
    /// If true, contents of the file will be included in the file specification. 
    /// </summary>
    void set_IncludeContents(bool value);
    /// <summary>
    /// Gets or sets text associated with the file specification. 
    /// </summary>
    System::String get_Description();
    /// <summary>
    /// Gets or sets text associated with the file specification. 
    /// </summary>
    void set_Description(System::String value);
    /// <summary>
    /// Gets contents of file as stream. 
    /// Contents is not loaded into memory which allows to decrease memory usage.
    /// But this stream does not support positioning and Length property. If you need this features please use Contents property instead.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_StreamContents();
    /// <summary>
    /// Gets or sets contents file. 
    /// This property returns data loaded in memory which may cause Out of memory exception for large data.
    /// To decrease memory usage please use StreamContents.
    /// </summary>
    System::SharedPtr<System::IO::Stream> get_Contents();
    /// <summary>
    /// Gets or sets contents file. 
    /// This property returns data loaded in memory which may cause Out of memory exception for large data.
    /// To decrease memory usage please use StreamContents.
    /// </summary>
    void set_Contents(System::SharedPtr<System::IO::Stream> value);
    /// <summary>
    /// Gets file paramteres.
    /// </summary>
    System::SharedPtr<FileParams> get_Params();
    /// <summary>
    /// Gets file paramteres.
    /// </summary>
    void set_Params(System::SharedPtr<FileParams> value);
    /// <summary>
    /// Gets subtype of the embedded file
    /// </summary>
    System::String get_MIMEType();
    /// <summary>
    /// Gets subtype of the embedded file
    /// </summary>
    void set_MIMEType(System::String value);
    /// <summary>
    /// Gets or sets file specification name. 
    /// </summary>
    System::String get_Name();
    /// <summary>
    /// Gets or sets file specification name. 
    /// </summary>
    void set_Name(System::String value);
    /// <summary>
    /// Gets or sets file specification unicode name. 
    /// </summary>
    System::String get_UnicodeName();
    /// <summary>
    /// Gets or sets file specification unicode name. 
    /// </summary>
    void set_UnicodeName(System::String value);
    /// <summary>
    /// Gets or sets name of the file system.
    /// </summary>
    System::String get_FileSystem();
    /// <summary>
    /// Gets or sets name of the file system.
    /// </summary>
    void set_FileSystem(System::String value);
    
    /// <summary>
    /// Constructor for FileSpecification
    /// </summary>
    /// <param name="file">File path.</param>
    FileSpecification(System::String file);
    /// <summary>
    /// Constructor for file specification.
    /// </summary>
    /// <param name="stream">Stream containing data file.</param>
    /// <param name="name">File specification.</param>
    FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="file">File path.</param>
    /// <param name="description">File description. </param>
    FileSpecification(System::String file, System::String description);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="stream">Stream to be used in the document.</param>
    /// <param name="name">A file specification string.</param>
    /// <param name="description">File description.</param>
    FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name, System::String description);
    /// <summary>
    /// Constructor for FileSpecification.
    /// </summary>
    /// <param name="fileName">File path.</param>
    /// <param name="annot">The annotation.</param>
    FileSpecification(System::String fileName, System::SharedPtr<InteractiveFeatures::Annotations::Annotation> annot);
    /// <summary>
    /// Create new empty file specification. 
    /// </summary>
    FileSpecification();
    
protected:

    /// <summary>
    /// Pdf dictionary containing information about the file.
    /// </summary>
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Engine::Data::IPdfObject> get_EngineObj();
    
    FileSpecification(System::SharedPtr<Engine::Data::IPdfPrimitive> specification);
    
    /// <summary>
    /// Creates file specification 
    /// </summary>
    /// <param name="trailer">Trailerable object.</param>
    /// <returns>PDF object which describes file specification</returns>
    System::SharedPtr<Engine::Data::IPdfPrimitive> createFileSpecification(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::IPdfObject> _engineObj;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::String _description;
    System::SharedPtr<FileParams> _parms;
    System::String _name;
    System::String _unicodeName;
    System::SharedPtr<System::IO::Stream> _contents;
    System::String _fileSystem;
    bool _includeContents;
    FileEncoding _encoding;
    
    System::SharedPtr<System::IO::Stream> get_contents();
    void set_contents(System::SharedPtr<System::IO::Stream> value);
    
    Engine::Filters::FilterType TranslateEncoding(FileEncoding encoding);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_FileSpecification_h_

