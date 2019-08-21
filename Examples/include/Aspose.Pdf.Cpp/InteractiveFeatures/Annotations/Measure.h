#pragma once

#include <xml/xml_writer.h>
#include <xml/xml_reader.h>
#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/enum.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class LineAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PolyAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { namespace Annotations { class Measure; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }

namespace Aspose {

namespace Pdf {

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
    
public:

    class NumberFormatList;
    
private:
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::LineAnnotation;
    friend class Aspose::Pdf::Annotations::PolyAnnotation;
    
public:

    class ASPOSE_PDF_SHARED_API NumberFormat : public System::Object
    {
        typedef NumberFormat ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::Annotations::Measure;
        
    public:
    
        enum class FractionStyle
        {
            /// <summary>
            /// Show fractional values as decimal fraction.
            /// </summary>
            ShowAsDecimal,
            /// <summary>
            /// Show fractional value as fraction.
            /// </summary>
            ShowAsFraction,
            /// <summary>
            /// Round fractional values to the nearest whole integer.
            /// </summary>
            Round,
            /// <summary>
            /// Truncate to achieve whole units.
            /// </summary>
            Truncate
        };
        
        
    public:
    
        /// <summary>
        /// A text string specifying a label for displaying the units.
        /// </summary>
        System::String get_UnitLabel();
        /// <summary>
        /// A text string specifying a label for displaying the units.
        /// </summary>
        void set_UnitLabel(System::String value);
        /// <summary>
        /// The conversion factor used to multiply a value in partial units of the previous number format array element to obtain a value in the units of this number format.
        /// </summary>
        double get_ConvresionFactor();
        /// <summary>
        /// The conversion factor used to multiply a value in partial units of the previous number format array element to obtain a value in the units of this number format.
        /// </summary>
        void set_ConvresionFactor(double value);
        /// <summary>
        /// In what manner fractional values are displayed.
        /// </summary>
        Measure::NumberFormat::FractionStyle get_FractionDisplayment();
        /// <summary>
        /// In what manner fractional values are displayed.
        /// </summary>
        void set_FractionDisplayment(Measure::NumberFormat::FractionStyle value);
        /// <summary>
        /// If FractionDisplayment is ShowAsDecimal, this value is precision of fractional value; It shall me multiple of 10. Default is 100.
        /// </summary>
        int32_t get_Precision();
        /// <summary>
        /// If FractionDisplayment is ShowAsDecimal, this value is precision of fractional value; It shall me multiple of 10. Default is 100.
        /// </summary>
        void set_Precision(int32_t value);
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value is denominator of the fraction. Default value is 16.
        /// </summary>
        int32_t get_Denominator();
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value is denominator of the fraction. Default value is 16.
        /// </summary>
        void set_Denominator(int32_t value);
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value determines meay or not the fraction be reduced. If value is true fraction may not be reduced.
        /// </summary>
        bool get_ForceDenominator();
        /// <summary>
        /// If FractionDisplayment is ShowAsFraction, this value determines meay or not the fraction be reduced. If value is true fraction may not be reduced.
        /// </summary>
        void set_ForceDenominator(bool value);
        /// <summary>
        /// Text that shall be used between orders of thousands in display of numerical values. An empty string indicates that no text shall be added. Default is comma.
        /// </summary>
        System::String get_ThousandsSeparator();
        /// <summary>
        /// Text that shall be used between orders of thousands in display of numerical values. An empty string indicates that no text shall be added. Default is comma.
        /// </summary>
        void set_ThousandsSeparator(System::String value);
        /// <summary>
        /// Text that shall be used as the decimal position in displaying numerical values. An empty string indicates that the default shall be used. Default is period character.
        /// </summary>
        System::String get_FractionSeparator();
        /// <summary>
        /// Text that shall be used as the decimal position in displaying numerical values. An empty string indicates that the default shall be used. Default is period character.
        /// </summary>
        void set_FractionSeparator(System::String value);
        /// <summary>
        /// Text that shall be concatenated to the left of the label.
        /// </summary>
        System::String get_BeforeText();
        /// <summary>
        /// Text that shall be concatenated to the left of the label.
        /// </summary>
        void set_BeforeText(System::String value);
        /// <summary>
        /// Text that shall be concatenated after the label
        /// </summary>
        System::String get_AfterText();
        /// <summary>
        /// Text that shall be concatenated after the label
        /// </summary>
        void set_AfterText(System::String value);
        
        /// <summary>
        /// Constructor for NumberFormat class.
        /// </summary>
        /// <param name="measure">Measure object which contains this number format.</param>
        NumberFormat(System::SharedPtr<Measure> measure);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
        
        NumberFormat(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
        
        Measure::NumberFormat::FractionStyle TranslateFractionStyle(System::String fractionStyle);
        void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
        void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
        System::Object::shared_members_type GetSharedMembers() override;
        
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
        friend class Aspose::Pdf::Annotations::Measure;
        
    public:
    
        /// <summary>
        /// Count if items in the list. 
        /// </summary>
        int32_t get_Count();
        
        /// <summary>
        /// Constructor for NumberFormatList. 
        /// </summary>
        /// <param name="measure">Parent measure object.</param>
        NumberFormatList(System::SharedPtr<Measure> measure);
        
        /// <summary>
        /// Adds number format to list.
        /// </summary>
        /// <param name="value">Value to be added into list.</param>
        void Add(System::SharedPtr<Measure::NumberFormat> value);
        /// <summary>
        /// Inserts number format into list.
        /// </summary>
        /// <param name="index">Index where new element will be added.</param>
        /// <param name="value">Value to be inserted.</param>
        void Insert(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        /// <summary>
        /// Removes number format from list.
        /// </summary>
        /// <param name="index">Index of item to be removed.</param>
        void RemoveAt(int32_t index);
        
        /// <summary>
        /// Gets number format in list by its index.
        /// </summary>
        /// <param name="index">Index of the item to be retreived.</param>
        /// <returns>Retreived measure item.</returns>
        System::SharedPtr<Measure::NumberFormat> idx_get(int32_t index);
        /// <summary>
        /// Sets number format in list by its index.
        /// </summary>
        /// <param name="index">Index of the item to be retreived.</param>
        /// <param name="value">Retreived measure item.</param>
        void idx_set(int32_t index, System::SharedPtr<Measure::NumberFormat> value);
        
    protected:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_EngineArray();
        
        NumberFormatList(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array);
        
        void WriteXfdfAtributes(System::SharedPtr<System::Xml::XmlWriter> writer);
        void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader, System::SharedPtr<Measure> measure);
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> array;
        
    };
    
    
public:

    /// <summary>
    /// A text string expressing the scale ratio of the drawing.
    /// </summary>
    System::String get_ScaleRatio();
    /// <summary>
    /// A text string expressing the scale ratio of the drawing.
    /// </summary>
    void set_ScaleRatio(System::String value);
    /// <summary>
    /// A number format array for measurement of change along the xaxis and, if Y is not present, along the y axis as well
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_XFormat();
    /// <summary>
    /// A number format array for measurement of change along the xaxis and, if Y is not present, along the y axis as well
    /// </summary>
    void set_XFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of change along the y axis.
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_YFormat();
    /// <summary>
    /// A number format array for measurement of change along the y axis.
    /// </summary>
    void set_YFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of distance in any direction.
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_DistanceFormat();
    /// <summary>
    /// A number format array for measurement of distance in any direction.
    /// </summary>
    void set_DistanceFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of area.
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_AreaFormat();
    /// <summary>
    /// A number format array for measurement of area.
    /// </summary>
    void set_AreaFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of angles.
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_AngleFormat();
    /// <summary>
    /// A number format array for measurement of angles.
    /// </summary>
    void set_AngleFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// A number format array for measurement of the slope of a line.
    /// </summary>
    System::SharedPtr<Measure::NumberFormatList> get_SlopeFormat();
    /// <summary>
    /// A number format array for measurement of the slope of a line.
    /// </summary>
    void set_SlopeFormat(System::SharedPtr<Measure::NumberFormatList> value);
    /// <summary>
    /// Point that shall specify the origin of the measurement coordinate system in default user space coordinates.
    /// </summary>
    System::SharedPtr<Point> get_Origin();
    /// <summary>
    /// Point that shall specify the origin of the measurement coordinate system in default user space coordinates.
    /// </summary>
    void set_Origin(System::SharedPtr<Point> value);
    /// <summary>
    /// A factor that shall be used to convert the largest units along the y axis to the largest units along the x axis.
    /// </summary>
    double get_XYFactor();
    /// <summary>
    /// A factor that shall be used to convert the largest units along the y axis to the largest units along the x axis.
    /// </summary>
    void set_XYFactor(double value);
    
    /// <summary>
    /// Creates Measure object for measure annotations. 
    /// </summary>
    /// <param name="annotation">Annotation for which measure will be bound.</param>
    Measure(System::SharedPtr<Annotation> annotation);
    
protected:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> get_EngineDict();
    
    Measure(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dictionary);
    
    void WriteXfdfAttributes(System::SharedPtr<System::Xml::XmlWriter> writer);
    void ReadXfdf(System::SharedPtr<System::Xml::XmlReader> reader);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> _engineDict;
    
    void assertObject();
    System::SharedPtr<Measure::NumberFormatList> getNumberFormatList(System::String key);
    void setNumberFormatList(System::String key, System::SharedPtr<Measure::NumberFormatList> value);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Annotations::Measure::NumberFormat::FractionStyle>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Annotations::Measure::NumberFormat::FractionStyle, const char_t*>, 4>& values();
};



