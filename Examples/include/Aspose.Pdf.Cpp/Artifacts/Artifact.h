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
        /// <summary>
        /// Pagination artifacts. Ancillary page features such as running heads and folios (page numbers).
        /// </summary>
        Pagination,
        /// <summary>
        /// Layout artifacts. Purely cosmetic typographical or design elements such as footnote rules or background screens.
        /// </summary>
        Layout,
        /// <summary>
        /// Page artifacts. Production aids extraneous to the document itself, such as cut marks and colour bars.
        /// </summary>
        Page,
        /// <summary>
        /// Background artifacts. Images, patterns or coloured blocks.
        /// </summary>
        Background,
        /// <summary>
        /// Artifact type is not defined or unknown.
        /// </summary>
        Undefined
    };
    
    enum class ArtifactSubtype
    {
        /// <summary>
        /// Header artifact.
        /// </summary>
        Header,
        /// <summary>
        /// Footer artifact.
        /// </summary>
        Footer,
        /// <summary>
        /// Watermark artifact.
        /// </summary>
        Watermark,
        /// <summary>
        /// Background artifact.
        /// </summary>
        Background,
        /// <summary>
        /// Artifact subtype is not defined or unknown.
        /// </summary>
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
        
    private:
    
        System::Drawing::Color textColor;
        System::String fontResourceName;
        double fontSize;
        
    };
    
    
public:

    /// <summary>
    /// Gets name of artifact type. May be used if artifact type is non standard.
    /// </summary>
    System::String get_CustomType();
    /// <summary>
    /// Gets name of artifact type. May be used if artifact type is non standard.
    /// </summary>
    void set_CustomType(System::String value);
    /// <summary>
    /// Gets name of artifact subtype. May be used  if artifact subtype is not standard subtype.
    /// </summary>
    System::String get_CustomSubtype();
    /// <summary>
    /// Gets name of artifact subtype. May be used  if artifact subtype is not standard subtype.
    /// </summary>
    void set_CustomSubtype(System::String value);
    /// <summary>
    /// Gets artifact type. 
    /// </summary>
    Artifact::ArtifactType get_Type();
    /// <summary>
    /// Gets artifact type. 
    /// </summary>
    void set_Type(Artifact::ArtifactType value);
    /// <summary>
    /// Gets artifact subtype. If artifact has non-standard subtype, name of the subtype may be read via CustomSubtype.
    /// </summary>
    Artifact::ArtifactSubtype get_Subtype();
    /// <summary>
    /// Gets artifact subtype. If artifact has non-standard subtype, name of the subtype may be read via CustomSubtype.
    /// </summary>
    void set_Subtype(Artifact::ArtifactSubtype value);
    /// <summary>
    /// Gets collection of artifact internal operators.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> get_Contents();
    /// <summary>
    /// Gets XForm of the artifact (if XForm is used).
    /// </summary>
    System::SharedPtr<XForm> get_Form();
    /// <summary>
    /// Gets rectangle of the artifact.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Rectangle> get_Rectangle();
    /// <summary>
    /// Gets or sets artifact position.
    /// If this property is specified, then margins and alignments are ignored.
    /// </summary>
    System::SharedPtr<Point> get_Position();
    /// <summary>
    /// Gets or sets artifact position.
    /// If this property is specified, then margins and alignments are ignored.
    /// </summary>
    void set_Position(System::SharedPtr<Point> value);
    /// <summary>
    /// Right margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    double get_RightMargin();
    /// <summary>
    /// Right margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_RightMargin(double value);
    /// <summary>
    /// Left margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    double get_LeftMargin();
    /// <summary>
    /// Left margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_LeftMargin(double value);
    /// <summary>
    /// Top margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    double get_TopMargin();
    /// <summary>
    /// Top margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_TopMargin(double value);
    /// <summary>
    /// Bottom margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    double get_BottomMargin();
    /// <summary>
    /// Bottom margin of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_BottomMargin(double value);
    /// <summary>
    /// Horizontal alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    HorizontalAlignment get_ArtifactHorizontalAlignment();
    /// <summary>
    /// Horizontal alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_ArtifactHorizontalAlignment(HorizontalAlignment value);
    /// <summary>
    /// Vertical alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    VerticalAlignment get_ArtifactVerticalAlignment();
    /// <summary>
    /// Vertical alignment of artifact. 
    /// If position is specified explicitly (in Position property) this value is ignored.
    /// </summary>
    void set_ArtifactVerticalAlignment(VerticalAlignment value);
    /// <summary>
    /// Gets or sets articat rotatin angle.
    /// </summary>
    double get_Rotation();
    /// <summary>
    /// Gets or sets articat rotatin angle.
    /// </summary>
    void set_Rotation(double value);
    /// <summary>
    /// Gets text of the artifact.
    /// </summary>
    System::String get_Text();
    /// <summary>
    /// Gets text of the artifact.
    /// </summary>
    void set_Text(System::String value);
    /// <summary>
    /// Gets image of the artifact (if presents).
    /// </summary>
    System::SharedPtr<XImage> get_Image();
    /// <summary>
    /// Gets or sets opacity of the artifact. Possible values are in range 0..1.
    /// </summary>
    double get_Opacity();
    /// <summary>
    /// Gets or sets opacity of the artifact. Possible values are in range 0..1.
    /// </summary>
    void set_Opacity(double value);
    
    /// <summary>
    /// Constructor of artifact with specified type and subtype
    /// </summary>
    /// <param name="type">Name of artifact type.</param>
    /// <param name="subType">NAme of artifact subtype.</param>
    Artifact(System::String type, System::String subType);
    /// <summary>
    /// Constructor of artifact with specified type and subtype
    /// </summary>
    /// <param name="type">Artifact type.</param>
    /// <param name="subType">Artifact subtype.</param>
    Artifact(Artifact::ArtifactType type, Artifact::ArtifactSubtype subType);
    
    /// <summary>
    /// Sets text of the artifact. 
    /// </summary>
    /// <param name="formattedText">FormattedText object which contains artifact text.</param>
    void SetText(System::SharedPtr<Facades::FormattedText> formattedText);
    /// <summary>
    /// Sets image of the artifact. 
    /// </summary>
    /// <param name="imageStream">Stream which contains image data.</param>
    void SetImage(System::SharedPtr<System::IO::Stream> imageStream);
    /// <summary>
    /// Sets image of the artifact. 
    /// </summary>
    /// <param name="imageName">Name of image file.</param>
    void SetImage(System::String imageName);
    /// <summary>
    /// Sets PDF page which is placed on the document page as artifact. 
    /// </summary>
    /// <param name="page">Page which is placed as Artifcact. </param>
    void SetPdfPage(System::SharedPtr<Page> page);
    /// <summary>
    /// Dispose the artifact.
    /// </summary>
    void Dispose();
    /// <summary>
    /// Gets custom value of artifact. 
    /// </summary>
    /// <param name="name">Name of value.</param>
    /// <returns>Value, or null if value does not exists.</returns>
    System::String GetValue(System::String name);
    /// <summary>
    /// Sets custom value of artifact.
    /// </summary>
    /// <param name="name">Name of custom value.</param>
    /// <param name="value">Custom value in the artifact.</param>
    void SetValue(System::String name, System::String value);
    /// <summary>
    /// Remove custom value from the artifact.
    /// </summary>
    /// <param name="name">Name of custom value to be removed.</param>
    void RemoveValue(System::String name);
    /// <summary>
    /// Start delated updates. Use this feature if you need make several changes to the same artifact to improve performance. 
    /// Usually artifact operators are changed anytime when artifact property was changed. This causes changing of page contents
    /// everytime when artifact was changed. To avoid this effect put all artifact updates between StartUpdates/SaveUpdates calls.
    /// This allows to change page contents only once.
    /// </summary>
    /// <example>
    /// <code lang="C#">
    /// Artifact art = doc.Pages[1].Artifacts[1];
    /// art.BeginUpdates();
    /// art.Opacity = 0.3f;
    /// art.Position = new Point(10,10);
    /// art.Rotation = 30;
    /// art.SaveUpdates();
    /// </code>
    /// </example>
    void BeginUpdates();
    /// <summary>
    /// Saves all updates in artifact which were made after BeginUpdates() call.
    /// </summary>
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
    
    /// <summary>
    /// This constructor is used when artifact is read from the page. 
    /// ARtifactCollection passes page resources, initial matrix, operators of the artifact ("contents") and properties dictionary.
    /// </summary>
    /// <param name="owner"></param>
    /// <param name="resources"></param>
    /// <param name="matrix"></param>
    /// <param name="_contents"></param>
    /// <param name="_properties"></param>
    Artifact(System::SharedPtr<ArtifactCollection> owner, System::SharedPtr<Artifact::ArtifactContext> context, System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> _contents, System::SharedPtr<Engine::Data::IPdfDictionary> _properties);
    
    /// <summary>
    /// Generates operators of artifact contents.
    /// </summary>
    /// <returns>List of artifact operators.</returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetContents();
    /// <summary>
    /// Gets operators inside the artifact. 
    /// </summary>
    /// <returns>List of operators in the artifact.</returns>
    virtual System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> GetOperators();
    virtual void ModifyContents(System::SharedPtr<OperatorCollection> contents);
    System::Object::shared_members_type GetSharedMembers() override;
    
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
    
    /// <summary>
    /// This property is for internal usage only. Sometimes AdobeAcrobat sets scale for artifacts. 
    /// This property is for correct update of these artifacts.
    /// </summary>
    double get_Scale();
    
    bool mIsDisposed;
    
    void CollectOperators();
    System::SharedPtr<XImage> SearchImageInForm(System::SharedPtr<XForm> form);
    System::SharedPtr<XImage> GetImage(System::SharedPtr<Aspose::Pdf::Resources> res, System::String name);
    /// <summary>
    /// Returns artifact matrix.
    /// </summary>
    /// <param name="w"></param>
    /// <param name="h"></param>
    /// <returns></returns>
    System::SharedPtr<Aspose::Pdf::DOM::Matrix> GetMatrix();
    System::SharedPtr<Aspose::Pdf::Rectangle> GetRect();
    System::SharedPtr<Point> GetPosition();
    System::String SubstPageNumber(System::String text);
    /// <summary>
    /// Generates operators to show artifact text and adds required font to the page resources.
    /// </summary>
    /// <returns></returns>
    System::String ShowText();
    /// <summary>
    /// Generates operators to show image of the artifact and adds image as resource. 
    /// </summary>
    /// <returns></returns>
    System::String ShowImage();
    /// <summary>
    /// Generates operators to show PDF page as artifact and adds PDF page into page resources as XForm.
    /// </summary>
    /// <returns></returns>
    System::String ShowPage();
    /// <summary>
    /// Generates operator to set artifact opacity and adds required graphic state object to resources.
    /// </summary>
    /// <returns></returns>
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<Operator>>> SetOpacity();
    /// <summary>
    /// Initializes custom data in in the artifact dictionary.
    /// </summary>
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

