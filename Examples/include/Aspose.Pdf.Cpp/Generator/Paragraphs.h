#ifndef _Aspose_Pdf_Generator_Paragraphs_h_
#define _Aspose_Pdf_Generator_Paragraphs_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "Generator/BaseParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class NewParagraphPlacementInfo; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents paragraph collection.
/// </summary>
//<<--REFACTORING: Old code: public class Paragraphs : IEnumerable
class ASPOSE_PDF_SHARED_API Paragraphs : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>>
{
    typedef Paragraphs ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Get paragraphs count.
    /// </summary>
    int32_t get_Count();
    
    /// <summary>
    /// Add paragraph to collection.
    /// </summary>
    /// <param name="paragraph">The paragraph.</param>
    void Add(System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Add paragraph to collection.
    /// </summary>
    /// <param name="paragraph">The paragraph.</param>
    /// <param name="placementInfo">The placement info.</param>
    void Add(System::SharedPtr<BaseParagraph> paragraph, System::SharedPtr<NewParagraphPlacementInfo> placementInfo);
    /// <summary>
    /// Remove paragraphs range.
    /// </summary>
    /// <param name="index">The first paragraph index.</param>
    /// <param name="count">The paragraphs count.</param>
    /// <returns>The paragraphs collection</returns>
    System::SharedPtr<Paragraphs> GetRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove paragraphs range.
    /// </summary>
    /// <param name="index">The first paragraph index.</param>
    /// <param name="count">The paragraphs count.</param>
    void RemoveRange(int32_t index, int32_t count);
    /// <summary>
    /// Remove paragraph from collection.
    /// </summary>
    /// <param name="paragraph">The paragraph.</param>
    void Remove(System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Insert paragraph to collection.
    /// </summary>
    /// <param name="index">The index for paragraph.</param>
    /// <param name="paragraph">The paragraph.</param>
    void Insert(int32_t index, System::SharedPtr<BaseParagraph> paragraph);
    /// <summary>
    /// Clear paragraphs.
    /// </summary>
    void Clear();
    
    /// <summary>
    /// Gets or sets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <returns></returns>
    System::SharedPtr<BaseParagraph> idx_get(int32_t index);
    /// <summary>
    /// Gets or sets paragraph from or to collection.
    /// </summary>
    /// <param name="index">The paragraph index.</param>
    /// <returns></returns>
    void idx_set(int32_t index, System::SharedPtr<BaseParagraph> value);
    
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<BaseParagraph>>> GetEnumerator();
    
    Paragraphs();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<BaseParagraph>>> paragraphs;
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Generator_Paragraphs_h_

