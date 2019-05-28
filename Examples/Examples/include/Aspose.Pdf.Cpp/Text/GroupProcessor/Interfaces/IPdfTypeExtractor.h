#pragma once

#include <system/idisposable.h>

#include "Text/GroupProcessor/Interfaces/IDocumentTextExtractor.h"
#include "Text/GroupProcessor/Interfaces/IDocumentPageTextExtractor.h"

namespace Aspose {

namespace Pdf {

namespace GroupProcessor {

/// <summary>
/// Represents interface to interacting with extractor.
/// </summary>
class ASPOSE_PDF_SHARED_API IPdfTypeExtractor : public Aspose::Pdf::GroupProcessor::IDocumentTextExtractor, public Aspose::Pdf::GroupProcessor::IDocumentPageTextExtractor, public System::IDisposable
{
    typedef IPdfTypeExtractor ThisType;
    typedef Aspose::Pdf::GroupProcessor::IDocumentTextExtractor BaseType;
    typedef Aspose::Pdf::GroupProcessor::IDocumentPageTextExtractor BaseType1;
    typedef System::IDisposable BaseType2;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1, BaseType2> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    virtual int32_t get_PageCount() = 0;
    virtual System::String get_Version() = 0;
    virtual bool get_IsFastExtractionUsed() = 0;
    
    virtual System::ArrayPtr<System::String> ExtractAllText() = 0;
    virtual System::String ExtractPageText(int32_t pageNumber) = 0;
    virtual void Dispose() = 0;
    
};

} // namespace GroupProcessor
} // namespace Pdf
} // namespace Aspose


