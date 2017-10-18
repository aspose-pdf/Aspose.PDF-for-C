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
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotCaptureVariablesAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotCaptureAttribute FINAL : public System::Attribute
{
    typedef DoNotCaptureAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotCaptureAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotObfuscateAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotObfuscateTypeAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotPruneAttribute FINAL : public System::Attribute
{
    typedef DoNotPruneAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotPruneAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotPruneTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotPruneTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotPruneTypeAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotSealTypeAttribute FINAL : public System::Attribute
{
    typedef DoNotSealTypeAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotSealTypeAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API ReportExceptionAttribute FINAL : public System::Attribute
{
    typedef ReportExceptionAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ReportExceptionAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
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
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ReportUsageAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API ObfuscateControlFlowAttribute FINAL : public System::Attribute
{
    typedef ObfuscateControlFlowAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ObfuscateControlFlowAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotObfuscateControlFlowAttribute FINAL : public System::Attribute
{
    typedef DoNotObfuscateControlFlowAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotObfuscateControlFlowAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API ObfuscateToAttribute FINAL : public System::Attribute
{
    typedef ObfuscateToAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ObfuscateToAttribute(System::String newName);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ObfuscateToAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API ObfuscateNamespaceToAttribute FINAL : public System::Attribute
{
    typedef ObfuscateNamespaceToAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    ObfuscateNamespaceToAttribute(System::String newName);
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ObfuscateNamespaceToAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API DoNotEncodeStringsAttribute FINAL : public System::Attribute
{
    typedef DoNotEncodeStringsAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DoNotEncodeStringsAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API EncodeStringsAttribute FINAL : public System::Attribute
{
    typedef EncodeStringsAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "EncodeStringsAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

class ASPOSE_PDF_SHARED_API ExcludeFromMemberRefsProxyAttribute FINAL : public System::Attribute
{
    typedef ExcludeFromMemberRefsProxyAttribute ThisType;
    typedef System::Attribute BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "ExcludeFromMemberRefsProxyAttribute"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Security
} // namespace Aspose

#endif // _Aspose_Pdf_Security_SmartAssembly_Attributes_h_

