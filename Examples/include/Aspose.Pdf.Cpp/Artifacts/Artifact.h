#ifndef _Aspose_Pdf_Artifacts_Artifact_h_
#define _Aspose_Pdf_Artifacts_Artifact_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/idisposable.h>
#include <system/enum.h>
#include <system/collections/list.h>
#include <system/collections/dictionary.h>
#include <drawing/color.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class BackgroundArtifact; } }
namespace Aspose { namespace Pdf { class FooterArtifact; } }
namespace Aspose { namespace Pdf { class HeaderArtifact; } }
namespace Aspose { namespace Pdf { class WatermarkArtifact; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Operator; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Facades { class FormattedText; } } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { namespace DOM { class Matrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class ConcatenateMatrix; } } }
namespace Aspose { namespace Pdf { namespace Operators { class Do; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SelectFont; } } }
namespace Aspose { namespace Pdf { namespace Operators { class SetRGBColor; } } }
namespace Aspose { namespace Pdf { namespace Operators { class GS; } } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { class XImage; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class OperatorCollection; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumeration of possible artifacts subtype.
/// </summary>
class ASPOSE_PDF_SHARED_API Artifact : public System::IDisposable
{
    typedef Artifact ThisType;
    typedef System::IDisposable BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::BackgroundArtifact;
    friend class Aspose::Pdf::FooterArtifact;
    friend class Aspose::Pdf::HeaderArtifact;
    friend class Aspose::Pdf::WatermarkArtifact;
    
public:

    enum class ArtifactType
    {
        Pagination,
        Layout,
        Page,
        Background,
        Undefined
    };
    
    enum class ArtifactSubtype
    {
        Header,
        Footer,
        Watermark,
        Background,
        Undefined
    };
    
    
protected:

    class ASPOSE_PDF_SHARED_API ArtifactContext : public System::Object
    {
        typedef ArtifactContext ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Resources> resources;
        System::String fontName;
        System::SharedPtr<DOM::Matrix> initialMatrix;
        
        ArtifactContext(System::SharedPtr<Resources> resources, System::SharedPtr<DOM::Matrix> matrix, System::String fontName);
        ArtifactContext();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ArtifactContext"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API TextAttributes : public System::Object
    {
        typedef TextAttributes ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        TextAttributes();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "TextAttributes"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::Drawing::Color textColor;
        System::String fontResourceName;
        double fontSize;
        
    };
    
    
public:

    System::String get_CustomType();
    void set_CustomType(System::String value);
    System::String get_CustomSubtype();
    void set_CustomSubtype(System::String value);
    Artifact::ArtifactType get_Type();
    void set_Type(Artifact::ArtifactType value);
    Artifact::ArtifactSubtype get_Subtype();
    void set_Subtype(Artifact::ArtifactSubtype value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Contents();
    System::SharedPtr<XForm> get_Form();
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    System::SharedPtr<Point> get_Position();
    void set_Position(System::SharedPtr<Point> value);
    double get_RightMargin();
    void set_RightMargin(double value);
    double get_LeftMargin();
    void set_LeftMargin(double value);
    double get_TopMargin();
    void set_TopMargin(double value);
    double get_BottomMargin();
    void set_BottomMargin(double value);
    HorizontalAlignment get_ArtifactHorizontalAlignment();
    void set_ArtifactHorizontalAlignment(HorizontalAlignment value);
    VerticalAlignment get_ArtifactVerticalAlignment();
    void set_ArtifactVerticalAlignment(VerticalAlignment value);
    double get_Rotation();
    void set_Rotation(double value);
    System::String get_Text();
    void set_Text(System::String value);
    System::SharedPtr<XImage> get_Image();
    double get_Opacity();
    void set_Opacity(double value);
    
    Artifact(System::String type, System::String subType);
    Artifact(Artifact::ArtifactType type, Artifact::ArtifactSubtype subType);
    
    void SetText(System::SharedPtr<Facades::FormattedText> formattedText);
    void SetImage(System::SharedPtr<System::IO::Stream> imageStream);
    void SetImage(System::String imageName);
    void SetPdfPage(System::SharedPtr<Page> page);
    void Dispose();
    System::String GetValue(System::String name);
    void SetValue(System::String name, System::String value);
    void RemoveValue(System::String name);
    void BeginUpdates();
    void SaveUpdates();
    
    virtual ~Artifact();
    
protected:

    double topMargin;
    double bottomMargin;
    double leftMargin;
    double rightMargin;
    HorizontalAlignment horizontalAlignment;
    VerticalAlignment verticalAlignment;
    System::SharedPtr<Engine::Data::IPdfDictionary> engineDict;
    System::SharedPtr<ArtifactCollection> owner;
    static System::String AsposeTag;
    
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> get_Matrix();
    System::String get_Tag();
    System::String get_Name();
    System::SharedPtr<ArtifactCollection> get_Owner();
    void set_Owner(System::SharedPtr<ArtifactCollection> value);
    System::SharedPtr<Aspose::Pdf::Resources> get_Resources();
    void set_Resources(System::SharedPtr<Aspose::Pdf::Resources> value);
    System::SharedPtr<Engine::Data::IPdfDictionary> get_EngineDict();
    
    Artifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetContents();
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    virtual void ModifyContents(System::SharedPtr<OperatorCollection> contents);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "Artifact"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    bool updateRequest;
    bool updatesDelayed;
    System::String type;
    System::String subType;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> contents;
    System::String text;
    System::SharedPtr<Facades::FormattedText> formattedText;
    System::SharedPtr<Point> position;
    double rotation;
    System::SharedPtr<System::IO::Stream> imageStream;
    bool ownsImageStream;
    System::SharedPtr<Page> page;
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> matrix;
    System::SharedPtr<Artifact::ArtifactContext> context;
    System::SharedPtr<Operators::ConcatenateMatrix> setMatrixOperator;
    System::SharedPtr<Operators::Do> doOperator;
    System::SharedPtr<Operators::SelectFont> tfOperator;
    System::SharedPtr<Operators::SetRGBColor> rgOperator;
    System::SharedPtr<Operators::GS> gsOperator;
    double opacity;
    System::String name;
    System::SharedPtr<System::Collections::Generic::Dictionary<System::String, System::String>> customData;
    System::String tag;
    static System::String AsposeCustomData;
    
    double get_Scale();
    
    bool mIsDisposed;
    
    void CollectOperators();
    System::SharedPtr<XImage> SearchImageInForm(System::SharedPtr<XForm> form);
    System::SharedPtr<XImage> GetImage(System::SharedPtr<Aspose::Pdf::Resources> res, System::String name);
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> GetMatrix();
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRect();
    System::SharedPtr<Point> GetPosition();
    System::String SubstPageNumber(System::String text);
    System::String ShowText();
    System::String ShowImage();
    System::String ShowPage();
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> SetOpacity();
    void InitializeCustomData();
    void Update();
    
};

} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Artifact::ArtifactType>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Artifact::ArtifactType, const char_t*>, 5>& values();
};

template<>
struct EnumMetaInfo<Aspose::Pdf::Artifact::ArtifactSubtype>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Artifact::ArtifactSubtype, const char_t*>, 5>& values();
};


#endif // _Aspose_Pdf_Artifacts_Artifact_h_

