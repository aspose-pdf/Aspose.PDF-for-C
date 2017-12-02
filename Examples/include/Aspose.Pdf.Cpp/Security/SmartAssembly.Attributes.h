#ifndef _Aspose_Pdf_Security_SmartAssembly_Attributes_h_
#define _Aspose_Pdf_Security_SmartAssembly_Attributes_h_
// Copyright (c) 2001-2015 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/attribute.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Security {

class ASPOSE_PDF_SHARED_API DoNotCaptureVariablesAttribute FINAL : public System::Attribute
{
    typedef DoNotCaptureVariablesAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotCaptureAttribute FINAL : public System::Attribute
{
    typedef DoNotCaptureAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotPruneAttribute FINAL : public System::Attribute
{
    typedef DoNotPruneAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotPruneTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotPruneTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotSealTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotSealTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API ReportExceptionAttribute FINAL : public System::Attribute
{
    typedef ReportExceptionAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API ReportUsageAttribute : public System::Attribute
{
    typedef ReportUsageAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ReportUsageAttribute();
    ReportUsageAttribute(System::String featureName);
    
};

class ASPOSE_PDF_SHARED_API ObfuscateControlFlowAttribute FINAL : public System::Attribute
{
    typedef ObfuscateControlFlowAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateControlFlowAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateControlFlowAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API ObfuscateToAttribute FINAL : public System::Attribute
{
    typedef ObfuscateToAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ObfuscateToAttribute(System::String newName);
    
};

class ASPOSE_PDF_SHARED_API ObfuscateNamespaceToAttribute FINAL : public System::Attribute
{
    typedef ObfuscateNamespaceToAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ObfuscateNamespaceToAttribute(System::String newName);
    
};

class ASPOSE_PDF_SHARED_API DoNotEncodeStringsAttribute FINAL : public System::Attribute
{
    typedef DoNotEncodeStringsAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API EncodeStringsAttribute FINAL : public System::Attribute
{
    typedef EncodeStringsAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

class ASPOSE_PDF_SHARED_API ExcludeFromMemberRefsProxyAttribute FINAL : public System::Attribute
{
    typedef ExcludeFromMemberRefsProxyAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

} // namespace Security
} // namespace Aspose

#endif // _Aspose_Pdf_Security_SmartAssembly_Attributes_h_

