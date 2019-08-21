#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/icloneable.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>

#include "Generator/BaseParagraph.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represents paragraph collection.
/// </summary>
class ASPOSE_PDF_SHARED_API Paragraphs : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>>, public System::ICloneable
{
    typedef Paragraphs ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::BaseParagraph>> BaseType;
    typedef System::ICloneable BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    friend class Aspose::Pdf::Document;
    
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
    /// Inserts the elements of a collection into the list at the specified index.
    /// </summary>
    void InsertRange(int32_t index, System::SharedPtr<System::Collections::Generic::IEnumerable<System::SharedPtr<BaseParagraph>>> collection);
    
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
    static int32_t _anonymous_method_0(System::SharedPtr<BaseParagraph> x, System::SharedPtr<BaseParagraph> y);
    /// <summary>
    /// Clones a new <see cref="Clone"/> object.
    /// </summary>
    /// <returns>The new <see cref="Clone"/> object.</returns>
    System::SharedPtr<System::Object> Clone();
    void cpp_switch_last_paragraph_to_week();
    
    Paragraphs();
    
protected:

    bool IsZIndexSet();
    /// <summary>
    /// Sort collection by zindex.
    /// </summary>
    void Sort();
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<BaseParagraph>>> paragraphs;
    
};

} // namespace Pdf
} // namespace Aspose


