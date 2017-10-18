#ifndef _Aspose_Pdf_InteractiveFeatures_Annotations_Measure_h_
#define _Aspose_Pdf_InteractiveFeatures_Annotations_Measure_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class LineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class PolylineAnnotation; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Measure; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class Annotation; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Annotations {

/// <summary>
/// Class which describes Measure coordinate system. 
/// </summary>
class ASPOSE_PDF_SHARED_API Measure : public System::Object
{
    typedef Measure ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::LineAnnotation;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::PolylineAnnotation;
    
public:

    class NumberFormatList;
    class ASPOSE_PDF_SHARED_API NumberFormat : public System::Object
    {
        typedef NumberFormat ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::InteractiveFeatures::Annotations::Measure;
        
    public:
    
        enum class FractionStyle
        {
            ShowAsDecimal,
            ShowAsFraction,
            Round,
            Truncate
        };
        
        
    public:
    
        System::String get_UnitLabel();
        void set_UnitLabel(System::String value);
        double get_ConvresionFactor();
        void set_ConvresionFactor(double value);
        Measure::NumberFormat::FractionStyle get_FractionDisplayment();
        void set_FractionDisplayment(Measure::NumberFormat::FractionStyle value);
        int32_t get_Precision();
        void set_Precision(int32_t value);
        int32_t get_Denominator();
        void set_Denominator(int32_t value);
        bool get_ForceDenominator();
        void set_ForceDenominator(bool value);
        System::String get_ThousandsSeparator();
        void set_ThousandsSeparator(System::String value);
        System::String get_FractionSeparator();
        void set_FractionSeparator(System::String value);
        System::String get_BeforeText();
        void set_BeforeText(System::String value);
        System::String get_AfterText();
        void set_AfterText(System::String value);
        
        NumberFormat(System::SharedPtr<Measure> measure);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
        
        NumberFormat(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "NumberFormat"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
        
        System::String getString(System::String key);
        
    };
    
    class ASPOSE_PDF_SHARED_API NumberFormatList : public System::Object
    {
        typedef NumberFormatList ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::InteractiveFeatures::Annotations::Measure;
        
    public:
    
        int32_t get_Count();
        
        NumberFormatList(System::SharedPtr<Measure> measure);
        
        void Add(System::SharedPtr<Measure::NumberFormat> value);
        void Insert(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        void RemoveAt(int32_t index);
        
        System::SharedPtr<Measure::NumberFormat> idx_get(int32_t index);
        void idx_set(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineArray();
        
        NumberFormatList(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "NumberFormatList"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array;
        
    };
    
    
public:

    System::String get_ScaleRatio();
    void set_ScaleRatio(System::String value);
    System::SharedPtr<Measure::NumberFormatList> get_XFormat();
    void set_XFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Measure::NumberFormatList> get_YFormat();
    void set_YFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Measure::NumberFormatList> get_DistanceFormat();
    void set_DistanceFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Measure::NumberFormatList> get_AreaFormat();
    void set_AreaFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Measure::NumberFormatList> get_AngleFormat();
    void set_AngleFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Measure::NumberFormatList> get_SlopeFormat();
    void set_SlopeFormat(System::SharedPtr<Measure::NumberFormatList> value);
    System::SharedPtr<Point> get_Origin();
    void set_Origin(System::SharedPtr<Point> value);
    double get_XYFactor();
    void set_XYFactor(double value);
    
    Measure(System::SharedPtr<Annotation> annotation);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    
    Measure(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Measure"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    void assertObject();
    System::SharedPtr<Measure::NumberFormatList> getNumberFormatList(System::String key);
    void setNumberFormatList(System::String key, System::SharedPtr<Measure::NumberFormatList> value);
    
};

} // namespace Annotations
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Annotations_Measure_h_

