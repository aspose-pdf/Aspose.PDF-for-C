#ifndef _Aspose_Pdf_Facades_PdfAnnotationEditor_h_
#define _Aspose_Pdf_Facades_PdfAnnotationEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/io/stream.h>
#include <system/collections/ilist.h>
#include <system/array.h>
#include <drawing/color.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { enum class AnnotationType; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { class Rectangle; } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class for work with PDF document annotations (comments).
/// </summary>
class ASPOSE_PDF_SHARED_API PdfAnnotationEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfAnnotationEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    void ImportAnnotationFromXfdf(System::String xfdfFile);
    void ImportAnnotationFromXfdf(System::String xfdfFile, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotType);
    void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfSteam, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotType);
    void ImportAnnotationFromXfdf(System::SharedPtr<System::IO::Stream> xfdfSteam);
    void ImportAnnotations(System::ArrayPtr<System::String> annotFile, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotType);
    void ImportAnnotations(System::ArrayPtr<System::String> annotFile);
    void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotType);
    void ImportAnnotations(System::ArrayPtr<System::SharedPtr<System::IO::Stream>> annotFileStream);
    void ModifyAnnotationsAuthor(int32_t start, int32_t end, System::String srcAuthor, System::String desAuthor);
    void FlatteningAnnotations();
    void FlatteningAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotType);
    void DeleteAnnotations();
    void DeleteAnnotations(System::String annotType);
    void DeleteAnnotation(System::String annotName);
    void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    void ExportAnnotationsXfdf(System::SharedPtr<System::IO::Stream> xmlOutputStream, int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotTypes);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<System::String> annotTypes);
    System::SharedPtr<System::Collections::Generic::IList<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation>>> ExtractAnnotations(int32_t start, int32_t end, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotTypes);
    
    PdfAnnotationEditor();
    PdfAnnotationEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    void ModifyAnnotations(int32_t start, int32_t end, System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Annotations::Annotation> annotation);
    void RedactArea(int32_t pageIndex, System::SharedPtr<Rectangle> rect, System::Drawing::Color color);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfAnnotationEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::ArrayPtr<int32_t> GetAnnotCounts();
    void Decimate(System::ArrayPtr<int32_t> prevAnnotCounts, System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotTypes);
    void Decimate(System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> annotTypes);
    static System::ArrayPtr<Aspose::Pdf::InteractiveFeatures::Annotations::AnnotationType> ConvertAnnotTypeArray(System::ArrayPtr<System::String> annotTypes);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfAnnotationEditor_h_

