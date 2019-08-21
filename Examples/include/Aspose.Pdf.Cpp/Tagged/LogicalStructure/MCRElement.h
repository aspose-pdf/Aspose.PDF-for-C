#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/nullable.h>

#include "Tagged/LogicalStructure/Element.h"

namespace Aspose { namespace Pdf { namespace Tagged { namespace Helpers { class StructureElementUtil; } } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class LinkElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class TableElement; } } }
namespace Aspose { namespace Pdf { class Image; } }
namespace Aspose { namespace Pdf { namespace Text { class TextSegment; } } }
namespace Aspose { namespace Pdf { namespace Text { class TextFragment; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace Operators { class BDC; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class ITextElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class BLSTextElement; } } }
namespace Aspose { namespace Pdf { class Paragraphs; } }
namespace Aspose { namespace Pdf { class Hyperlink; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

/// <summary>
///     Represents marked-content reference object in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API MCRElement FINAL : public Aspose::Pdf::LogicalStructure::Element
{
    typedef MCRElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::Element BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::Helpers::StructureElementUtil;
    friend class Aspose::Pdf::LogicalStructure::LinkElement;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    friend class Aspose::Pdf::Tagged::TaggedContext;
    friend class Aspose::Pdf::LogicalStructure::TableElement;
    
public:

    /// <summary>
    ///     <para>Gets image source for marked-content reference element.</para>
    ///     <para>For just created <see cref="Aspose::Pdf::LogicalStructure::IllustrationElement" />. Is null in other cases.</para>
    /// </summary>
    /// <value>Image source for marked-content reference element.</value>
    System::String get_ImageSrc();
    /// <summary>
    ///     <para>Gets text content for marked-content reference element.</para>
    ///     <para>For just created object wich implement <see cref="Aspose::Pdf::LogicalStructure::ITextElement" />. Is null in other cases.</para>
    /// </summary>
    /// <value>Text content for marked-content reference element.</value>
    System::String get_Content();
    /// <summary>
    ///     Gets MCID of marked-content reference object.
    /// </summary>
    /// <value>MCID of marked-content reference object.</value>
    int32_t get_MCID();
    
    /// <summary>
    ///     Returns a string that represents the current object.
    /// </summary>
    /// <returns>String that represents the current object.</returns>
    virtual System::String ToString();
    
protected:

    bool get_IsCreatedElement();
    System::SharedPtr<Aspose::Pdf::Page> get_Page();
    void set_Page(System::SharedPtr<Aspose::Pdf::Page> value);
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> get_TextFragment();
    void set_TextFragment(System::SharedPtr<Aspose::Pdf::Text::TextFragment> value);
    System::SharedPtr<StructureElement> get_ParentStructureElement();
    System::SharedPtr<ITextElement> get_ParentTextElement();
    System::SharedPtr<BLSTextElement> get_ParentBLSTextElement();
    System::SharedPtr<Paragraphs> get_ContextParagraphs();
    int32_t get_NewMCID();
    void set_NewMCID(int32_t value);
    System::SharedPtr<Operators::BDC> get_BdcOperator();
    void set_BdcOperator(System::SharedPtr<Operators::BDC> value);
    /// <summary>
    ///     <para>Gets image source for marked-content reference element.</para>
    ///     <para>For just created <see cref="Aspose::Pdf::LogicalStructure::IllustrationElement" />. Is null in other cases.</para>
    /// </summary>
    /// <value>Image source for marked-content reference element.</value>
    void set_ImageSrc(System::String value);
    System::Nullable<double> get_ImageResolution();
    void set_ImageResolution(System::Nullable<double> value);
    System::Nullable<double> get_ImageWidth();
    void set_ImageWidth(System::Nullable<double> value);
    System::Nullable<double> get_ImageHeight();
    void set_ImageHeight(System::Nullable<double> value);
    /// <summary>
    ///     <para>Gets text content for marked-content reference element.</para>
    ///     <para>For just created object wich implement <see cref="Aspose::Pdf::LogicalStructure::ITextElement" />. Is null in other cases.</para>
    /// </summary>
    /// <value>Text content for marked-content reference element.</value>
    void set_Content(System::String value);
    /// <summary>
    ///     Gets MCID of marked-content reference object.
    /// </summary>
    /// <value>MCID of marked-content reference object.</value>
    void set_MCID(int32_t value);
    
    void SetHyperlink(System::SharedPtr<Hyperlink> hyperlink);
    
    MCRElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
    virtual void PreSave();
    virtual void Save();
    virtual bool CanBeAppended(System::SharedPtr<Element> element);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _imageSrc;
    System::Nullable<double> _imageResolution;
    System::Nullable<double> _imageWidth;
    System::Nullable<double> _imageHeight;
    System::SharedPtr<Image> _image;
    System::String _content;
    System::SharedPtr<Aspose::Pdf::Text::TextSegment> _textSegment;
    System::SharedPtr<Aspose::Pdf::Text::TextFragment> _textFragment;
    System::SharedPtr<Aspose::Pdf::Page> _page;
    int32_t _newMcId;
    System::SharedPtr<Operators::BDC> _bdcOperator;
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


