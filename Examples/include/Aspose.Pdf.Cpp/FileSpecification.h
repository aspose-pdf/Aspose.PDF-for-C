#ifndef _Aspose_Pdf_FileSpecification_h_
#define _Aspose_Pdf_FileSpecification_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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

    FileEncoding get_Encoding();
    void set_Encoding(FileEncoding value);
    bool get_IncludeContents();
    void set_IncludeContents(bool value);
    System::String get_Description();
    void set_Description(System::String value);
    System::SharedPtr<System::IO::Stream> get_StreamContents();
    System::SharedPtr<System::IO::Stream> get_Contents();
    void set_Contents(System::SharedPtr<System::IO::Stream> value);
    System::SharedPtr<FileParams> get_Params();
    void set_Params(System::SharedPtr<FileParams> value);
    System::String get_MIMEType();
    void set_MIMEType(System::String value);
    System::String get_Name();
    void set_Name(System::String value);
    System::String get_UnicodeName();
    void set_UnicodeName(System::String value);
    System::String get_FileSystem();
    void set_FileSystem(System::String value);
    
    FileSpecification(System::String file);
    FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name);
    FileSpecification(System::String file, System::String description);
    FileSpecification(System::SharedPtr<System::IO::Stream> stream, System::String name, System::String description);
    FileSpecification(System::String fileName, System::SharedPtr<InteractiveFeatures::Annotations::Annotation> annot);
    FileSpecification();
    
protected:

    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    System::SharedPtr<Engine::Data::IPdfObject> get_EngineObj();
    
    FileSpecification(System::SharedPtr<Engine::Data::IPdfPrimitive> specification);
    
    System::SharedPtr<Engine::Data::IPdfPrimitive> createFileSpecification(System::SharedPtr<Engine::Data::ITrailerable> trailer);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "FileSpecification"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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

