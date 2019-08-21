#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Optimization { enum class ImageEncoding; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressionOptions; } } }

namespace Aspose {

namespace Pdf {

namespace Optimization {

/// <summary>
/// The <b>Aspose.Pdf.Optimization</b> is a namespace for classes for managing of document optimization process.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// Class which describes document optimization algorithm.
/// Instance of this class may be used as parameter of OptimizeResources() method.
/// </summary>
class ASPOSE_PDF_SHARED_API OptimizationOptions : public System::Object
{
    typedef OptimizationOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
    /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
    /// </summary>
    bool get_LinkDuplcateStreams();
    /// <summary>
    /// If this flag is set to true, Resource streams will be analyzed. If duplicate streams are found (i.e. if stream contents is equal), then thes streams will be stored as one object. 
    /// This allows to decrease document size in some cases (for example, when same document was concatenedted multiple times).
    /// </summary>
    void set_LinkDuplcateStreams(bool value);
    /// <summary>
    /// If true page contents will be reused when document is optimized for equal pages.
    /// </summary>
    bool get_AllowReusePageContent();
    /// <summary>
    /// If true page contents will be reused when document is optimized for equal pages.
    /// </summary>
    void set_AllowReusePageContent(bool value);
    /// <summary>
    /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
    /// This may decrease document size for example when pages were extracted from document. 
    /// </summary>
    bool get_RemoveUnusedStreams();
    /// <summary>
    /// If this flag set to true, every resource is checked on it's usage. If resource is never used, then resources is removed.
    /// This may decrease document size for example when pages were extracted from document. 
    /// </summary>
    void set_RemoveUnusedStreams(bool value);
    /// <summary>
    /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
    /// </summary>
    bool get_RemoveUnusedObjects();
    /// <summary>
    /// If this flag is set to true, all document objects will be checked and unused objects (i.e. objects which does not have any reference) are removed from document.
    /// </summary>
    void set_RemoveUnusedObjects(bool value);
    /// <summary>
    /// Set of options which describe will images in the document be compressed and parameters of the compression.
    /// </summary>
    System::SharedPtr<Aspose::Pdf::Optimization::ImageCompressionOptions> get_ImageCompressionOptions();
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    bool get_CompressImages();
    /// <summary>
    /// If this flag is set to true images will be compressed in the document. compression level is specfied with ImageQuality property.
    /// </summary>
    void set_CompressImages(bool value);
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    bool get_ResizeImages();
    /// <summary>
    /// If this flag set to true and CompressImages is true images will be resized if image resoultion is greater then specified MaxResolution parameter.
    /// </summary>
    void set_ResizeImages(bool value);
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    int32_t get_ImageQuality();
    /// <summary>
    /// Specifies level of image compression when CompressIamges flag is used.
    /// </summary>
    void set_ImageQuality(int32_t value);
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    /// [Obsolete("Please use ImageCompressionOptions.MaxResolution instead.")]
    int32_t get_MaxResoultion();
    /// <summary>
    /// Specifies maximum resolution of images. If image has higher resolition it will be scaled 
    /// </summary>
    /// [Obsolete("Please use ImageCompressionOptions.MaxResolution instead.")]
    void set_MaxResoultion(int32_t value);
    /// <summary>
    /// Make fonts not embedded if set to true. 
    /// </summary>
    bool get_UnembedFonts();
    /// <summary>
    /// Make fonts not embedded if set to true. 
    /// </summary>
    void set_UnembedFonts(bool value);
    /// <summary>
    /// Remove private information (page piece info).
    /// </summary>
    bool get_RemovePrivateInfo();
    /// <summary>
    /// Remove private information (page piece info).
    /// </summary>
    void set_RemovePrivateInfo(bool value);
    /// <summary>
    /// Image encodre which will be used.
    /// </summary>
    Aspose::Pdf::Optimization::ImageEncoding get_ImageEncoding();
    /// <summary>
    /// Image encodre which will be used.
    /// </summary>
    void set_ImageEncoding(Aspose::Pdf::Optimization::ImageEncoding value);
    
    /// <summary>
    /// Creates optimization strategy will all options activated.
    /// </summary>
    /// <returns>OptimizationOptions object.</returns>
    static System::SharedPtr<OptimizationOptions> All();
    
    OptimizationOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    bool _linkDuplicateStreams;
    bool _removeUnusedStreams;
    bool _removeUnusedObjects;
    bool _unembedFonts;
    bool _allowReusePageContents;
    bool _removePrivateInfo;
    Aspose::Pdf::Optimization::ImageEncoding _imageEncoding;
    System::SharedPtr<Aspose::Pdf::Optimization::ImageCompressionOptions> _imageCompressionOptions;
    
};

} // namespace Optimization
} // namespace Pdf
} // namespace Aspose


