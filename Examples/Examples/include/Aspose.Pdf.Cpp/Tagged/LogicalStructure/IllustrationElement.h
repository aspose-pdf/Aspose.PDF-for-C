#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include "Tagged/LogicalStructure/StructureElement.h"

namespace Aspose { namespace Pdf { namespace LogicalStructure { class FigureElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class FormulaElement; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class FormElement; } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContext; } } }
namespace Aspose { namespace Pdf { namespace LogicalStructure { class StructureTypeStandard; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Tagged { class TaggedContent; } } }

namespace Aspose {

namespace Pdf {

namespace LogicalStructure {

// Structure Element Category
/// <summary>
///     Represents a base class for illustration structure elements in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API IllustrationElement : public Aspose::Pdf::LogicalStructure::StructureElement
{
    typedef IllustrationElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::StructureElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::LogicalStructure::FigureElement;
    friend class Aspose::Pdf::LogicalStructure::FormulaElement;
    friend class Aspose::Pdf::LogicalStructure::FormElement;
    
public:

    /// <summary>
    ///     Appends image to current illustration element.
    /// </summary>
    /// <param name="imageSrc">Image source.</param>
    /// <param name="imageResolution">(Optional) Image Resolution. Default: 300 DPI.</param>
    virtual void SetImage(System::String imageSrc, double imageResolution = 300);
    /// <summary>
    ///     Appends image to current illustration element.
    /// </summary>
    /// <param name="imageSrc">Image source.</param>
    /// <param name="imageWidth">Image width.</param>
    /// <param name="imageHeight">Image height.</param>
    virtual void SetImage(System::String imageSrc, double imageWidth, double imageHeight);
    
protected:

    IllustrationElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<StructureTypeStandard> structureType, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

// Illustration Element's Children
/// <summary>
///     Represents Figure structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API FigureElement FINAL : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FigureElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    FigureElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Formula structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API FormulaElement FINAL : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FormulaElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    FormulaElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

/// <summary>
///     Represents Form structure element in logical structure.
/// </summary>
class ASPOSE_PDF_SHARED_API FormElement FINAL : public Aspose::Pdf::LogicalStructure::IllustrationElement
{
    typedef FormElement ThisType;
    typedef Aspose::Pdf::LogicalStructure::IllustrationElement BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Tagged::TaggedContent;
    
protected:

    FormElement(System::SharedPtr<Aspose::Pdf::Tagged::TaggedContext> taggedContext, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> pdfEngineEntity);
    
};

} // namespace LogicalStructure
} // namespace Pdf
} // namespace Aspose


