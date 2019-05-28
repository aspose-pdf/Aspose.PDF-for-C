#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <drawing/color.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ApsUsingConverter; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v17_6; } } }
namespace Aspose { namespace Pdf { enum class SaveFormat; } }
namespace Aspose { namespace Pdf { class IWarningCallback; } }
namespace Aspose { namespace Pdf { enum class ApsToXpsSavingType; } }
namespace Aspose { class DocumentInfo; }
namespace Aspose { namespace Pdf { class SaveOptions; } }
namespace Aspose { namespace Pdf { class HtmlSaveOptions; } }
namespace Aspose { namespace Pdf { class SvgSaveOptions; } }

namespace Aspose {

namespace Pdf {

/// <summary>
///  enumerates possible types of saved external resources
/// </summary>
class ASPOSE_PDF_SHARED_API SaveOptions : public System::Object
{
    typedef SaveOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    class BorderInfo;
    
private:
    friend class Aspose::Pdf::ApsUsingConverter;
    friend class Aspose::Pdf::Tests::RegressionTests_v17_6;
    
public:

    enum class HtmlBorderLineType
    {
        /// <summary>
        /// No line will be shown
        /// </summary> 
        None = 0,
        /// <summary>
        /// dotted line will be shown
        /// </summary> 
        Dotted = 1,
        /// <summary>
        /// dashed line will be shown
        /// </summary> 
        Dashed = 2,
        /// <summary>
        /// solid line will be shown
        /// </summary> 
        Solid = 3,
        /// <summary>
        /// double line will be shown
        /// </summary> 
        Double = 4,
        /// <summary>
        /// grove line will be shown
        /// </summary> 
        Groove = 5,
        /// <summary>
        /// ridhe line will be shown
        /// </summary> 
        Ridge = 6,
        /// <summary>
        /// inset line will be shown
        /// </summary> 
        Inset = 7,
        /// <summary>
        /// outset line will be shown
        /// </summary> 
        Outset = 8
    };
    
    enum class NodeLevelResourceType
    {
        /// <summary>
        /// Means that supplied resource is image
        /// </summary>
        Image = 0,
        /// <summary>
        /// Means that supplied resource is font
        /// </summary>
        Font = 1
    };
    
    
public:

    class ASPOSE_PDF_SHARED_API BorderPartStyle : public System::Object
    {
        typedef BorderPartStyle ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        friend class Aspose::Pdf::SaveOptions;
        
    public:
    
        System::Drawing::Color Color;
        SaveOptions::HtmlBorderLineType LineType;
        
        /// <summary>
        /// Represents border line's width in points. Must be number greater then zero.
        /// </summary> 
        int32_t get_WidthInPoints();
        /// <summary>
        /// Represents border line's width in points. Must be number greater then zero.
        /// </summary> 
        void set_WidthInPoints(int32_t value);
        
        BorderPartStyle();
        
    protected:
    
        System::SharedPtr<SaveOptions::BorderPartStyle> Clone();
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        int32_t _width;
        
    };
    
    class ASPOSE_PDF_SHARED_API BorderInfo : public System::Object
    {
        typedef BorderInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<SaveOptions::BorderPartStyle> TopStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> LeftStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> RightStyleIfAny;
        System::SharedPtr<SaveOptions::BorderPartStyle> BottomStyleIfAny;
        
        /// <summary>
        ///   Creates instance of BorderInfo class
        /// </summary>
        BorderInfo();
        /// <summary>
        ///   Creates instance of BorderInfo class and initializes
        ///   all elements of border(Top, Left, Right, Bottom)
        ///   with attributes copied from supplied border style
        /// </summary>
        /// <param name="commonStyle">style of border parts that will be used for all elements of border(left, right, top, bottom)</param>
        BorderInfo(System::SharedPtr<SaveOptions::BorderPartStyle> commonStyle);
        
    protected:
    
        bool get_AtLeastOneBorderSideNeeded();
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    };
    
    class ASPOSE_PDF_SHARED_API ResourceSavingInfo : public System::Object
    {
        typedef ResourceSavingInfo ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::HtmlSaveOptions;
        friend class Aspose::Pdf::SvgSaveOptions;
        
    public:
    
        /// <summary>
        ///  Set by converter.
        ///  Supposed file name that goes from converter to code of custom method
        ///  Can be use in custom code to decide how to process or where save that file
        /// </summary>
        SaveOptions::NodeLevelResourceType get_ResourceType();
        
        System::String SupposedFileName;
        System::SharedPtr<System::IO::Stream> ContentStream;
        bool CustomProcessingCancelled;
        
    protected:
    
        ResourceSavingInfo(SaveOptions::NodeLevelResourceType resourceType);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        SaveOptions::NodeLevelResourceType _resourceType;
        
        ResourceSavingInfo();
        
    };
    
    
public:

    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Save operation continues, however the user may also return Abort in which case the Save operation should cease.
    /// </summary>
    System::SharedPtr<IWarningCallback> get_WarningHandler();
    /// <summary>
    /// Callback to handle any warnings generated. 
    /// The WarningHandler returns ReturnAction enum item specifying either Continue or Abort. 
    /// Continue is the default action and the Save operation continues, however the user may also return Abort in which case the Save operation should cease.
    /// </summary>
    void set_WarningHandler(System::SharedPtr<IWarningCallback> value);
    /// <summary>
    /// Format of data save.
    /// </summary>
    Aspose::Pdf::SaveFormat get_SaveFormat();
    /// <summary>
    /// Gets or sets boolean value which indicates will Response object be closed after document saved into response.
    /// </summary>
    bool get_CloseResponse();
    /// <summary>
    /// Gets or sets boolean value which indicates will Response object be closed after document saved into response.
    /// </summary>
    void set_CloseResponse(bool value);
    
    SaveOptions();
    
protected:

    Aspose::Pdf::SaveFormat _saveFormat;
    System::String ApsIntermediateFileIfAny;
    System::String XpsIntermediateFileIfAny;
    System::String PngIntermediateFileIfAny;
    ApsToXpsSavingType ApsAsXpsSavingType;
    System::SharedPtr<Aspose::DocumentInfo> DocumentInfoForSaveAsXps;
    System::String PlainApsIntermediateTempFileIfAny;
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<IWarningCallback> _warningHandler;
    bool _closeResponse;
    
};

} // namespace Pdf
} // namespace Aspose


