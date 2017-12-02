#ifndef _Aspose_Pdf_XImageCollection_h_
#define _Aspose_Pdf_XImageCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

// C# preprocessor directive: #if SUPPORT_ASPOSE_IMAGING 

/* C# INACTIVE CODE:
using Aspose.Imaging.FileFormats.Tiff;
using Aspose.Imaging.FileFormats.Tiff.Enums;
using Aspose.Imaging.ImageOptions;
*/

// C# preprocessor directive: #endif 


#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <drawing/imaging/image_codec_info.h>

#include "XImage.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Annotations { class StampAnnotation; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing XImage collection.
/// </summary>
//<<--REFACTORING: Old code: public sealed class XImageCollection : ICollection
class ASPOSE_PDF_SHARED_API XImageCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>>
{
    typedef XImageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::InteractiveFeatures::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ArtifactCollection;
    
private:

    class ASPOSE_PDF_SHARED_API ImagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>>
    {
        typedef ImagesEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<XImage> get_Current() const;
        
        ImagesEnumerator(System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> images, System::SharedPtr<XImageCollection> parent);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~ImagesEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<XImageCollection> _parent;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _images;
        int32_t _cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Count of images in collection.
    /// </summary>
    int32_t get_Count() const;
    /// <summary>
    /// Returns true if object is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Returns synchronization object.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets array of image names.
    /// </summary>
    System::ArrayPtr<System::String> get_Names();
    
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data (in JPEG format).</param> 
    void Add(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data (in JPEG format).</param>
    /// <param name="quality">JPEG quality.</param>
    void Add(System::SharedPtr<System::IO::Stream> image, int32_t quality);
    /// <summary>
    /// Removes index from collection by index.
    /// </summary>
    /// <param name="index">Image index.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Removes index from collection by name.
    /// </summary>
    /// <param name="name">Name of image which must to be deleted.</param>
    void Delete(System::String name);
    /// <summary>
    /// Deletes images from collection.
    /// </summary>
    void Delete();
    /// <summary>
    /// Returns collection enumerator.
    /// </summary>
    /// <returns>Enumerator of collection</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XImage>>> GetEnumerator();
    /// <summary>
    /// Copies array of images into collection.
    /// </summary>
    /// <param name="array">Array to be copied.</param>
    /// <param name="index">Index where images will be copied into collection.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<XImage>> array, int32_t index);
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="index">Index of collection item which will be replaced.</param>
    /// <param name="stream">Stream containing image data (in JPEG format).</param>
    void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream);
    /// <summary>
    /// Replace image in collection with another image. 
    /// </summary>
    /// <param name="index">Index of collection item which will be replaced.</param>
    /// <param name="stream">Stream containing image data (in JPEG format).</param>
    /// <param name="quality">JPEG quality.</param>
    void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    
    /// <summary>
    /// Gets image from collection by its index.
    /// </summary>
    /// <param name="index">Image index</param>
    /// <returns>Retreived image.</returns>
    System::SharedPtr<XImage> idx_get(int32_t index);
    /// <summary>
    /// Gets image from collection by its name.
    /// </summary>
    /// <param name="name">Image name.</param>
    /// <returns>Retreived image.</returns>
    System::SharedPtr<XImage> idx_get(System::String name);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDataStream> MakeImageFromSteram(System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    /// <summary>
    /// Determines whether emf format is used.
    /// </summary>
    /// <param name="stream">Input stream with image.</param>
    /// <returns>Is emf format is detected than jpeg stream returned; otherwise, input stream.</returns>
    static System::SharedPtr<System::IO::Stream> IsMetafile(System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, bool isBlackWhite);
    
    XImageCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    void Add(System::String name, System::SharedPtr<Engine::Data::IPdfObject> image);
    System::String Add(System::SharedPtr<Engine::Data::IPdfObject> image);
    bool HasImage(System::String imgName);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Resources> _parent;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> _hash;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    
    System::ArrayPtr<uint8_t> GetImageMask(System::SharedPtr<System::Drawing::Image> image);
    System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo> GetEncoder(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void AddDCTDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img, int32_t quality, System::SharedPtr<System::Drawing::Image>& originalImage);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite);
    /// <summary>
    /// </summary>
    void Add(System::SharedPtr<XImage> const &item);
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<XImage> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<XImage> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    System::SharedPtr<XImage> get(int32_t index);
    System::SharedPtr<XImage> get(System::String name);
    static System::String GetUniqueImageName(System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XImageCollection_h_

