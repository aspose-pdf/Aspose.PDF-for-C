#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <drawing/imaging/image_codec_info.h>

#include "XImage.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Interchange { class ContentSequenceXObject; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class PdfConvertStrategy; } } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class Redaction; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace ConvertStrategies { class TransparentContentRemoval; } } } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor; } } }
namespace Aspose { namespace Pdf { namespace Optimization { class ImageCompressor2; } } }
namespace Aspose { namespace Pdf { namespace Facades { class PdfFileMend; } } }
namespace Aspose { namespace Pdf { class ImageStamp; } }
namespace Aspose { namespace Pdf { namespace Annotations { class StampAnnotation; } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Resources; } }
namespace Aspose { namespace Pdf { class XForm; } }
namespace Aspose { namespace Pdf { class DataUtils; } }
namespace Aspose { namespace Pdf { class ApsToPdfGraphicStateBuilder; } }
namespace Aspose { namespace Pdf { class ArtifactCollection; } }
namespace Aspose { namespace Pdf { class RgbToDeviceGrayConversionStrategy; } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v8_1; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v11_6; } } }
namespace Aspose { namespace Pdf { namespace Tests { class RegressionTests_v19_5; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Collections { template<typename,typename> class AsposeHashDictionary; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfObject; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDataStream; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { enum class ImageFilterType; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class representing XImage collection.
/// </summary>
class ASPOSE_PDF_SHARED_API XImageCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>>
{
    typedef XImageCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::XImage>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Interchange::ContentSequenceXObject;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::PdfConvertStrategy;
    friend class Aspose::Pdf::Annotations::Redaction;
    friend class Aspose::Pdf::Engine::IO::ConvertStrategies::TransparentContentRemoval;
    friend class Aspose::Pdf::Optimization::ImageCompressor;
    friend class Aspose::Pdf::Optimization::ImageCompressor2;
    friend class Aspose::Pdf::Facades::PdfFileMend;
    friend class Aspose::Pdf::ImageStamp;
    friend class Aspose::Pdf::Annotations::StampAnnotation;
    friend class Aspose::Pdf::Page;
    friend class Aspose::Pdf::Resources;
    friend class Aspose::Pdf::XForm;
    friend class Aspose::Pdf::XImage;
    friend class Aspose::Pdf::DataUtils;
    friend class Aspose::Pdf::ApsToPdfGraphicStateBuilder;
    friend class Aspose::Pdf::ArtifactCollection;
    friend class Aspose::Pdf::RgbToDeviceGrayConversionStrategy;
    friend class Aspose::Pdf::Tests::RegressionTests_v8_1;
    friend class Aspose::Pdf::Tests::RegressionTests_v11_6;
    friend class Aspose::Pdf::Tests::RegressionTests_v19_5;
    
protected:

    class ThresholdMaskParameters : public System::Object
    {
        typedef ThresholdMaskParameters ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        uint8_t get_BlackOverWhiteThreshold();
        void set_BlackOverWhiteThreshold(uint8_t value);
        uint8_t get_WhiteOverBlackThreshold();
        void set_WhiteOverBlackThreshold(uint8_t value);
        uint8_t get_BitMask();
        void set_BitMask(uint8_t value);
        
        ThresholdMaskParameters();
        
    private:
    
        uint8_t _blackOverWhiteThreshold;
        uint8_t _whiteOverBlackThreshold;
        uint8_t _bitMask;
        
    };
    
    
private:

    class ImagesEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::XImage>>
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
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<XImageCollection> _parent;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _images;
        int32_t _cursor;
        
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
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    System::ArrayPtr<System::String> get_Names();
    /// <summary>
    /// Gets a value indicating whether the collection is read-only.
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// Adds new image to Image list. This method adds image as reference to the same PdfObject (which allows to decrease file size)
    /// </summary>
    /// <param name="image">XImage to be added.</param>
    /// <returns>Name of the added image. </returns>
    System::String AddWithName(System::SharedPtr<XImage> image);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data (in JPEG format).</param>
    /// <returns>Name of the added image.</returns>
    System::String Add(System::SharedPtr<System::IO::Stream> image);
    /// <summary>
    /// Adds entity to the end of the collection, so entity can be accessed by the last index.
    /// </summary>
    /// <param name="image">Stream containing image data.</param> 
    /// <param name="filterType">The image filter type.</param> 
    void Add(System::SharedPtr<System::IO::Stream> image, ImageFilterType filterType);
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
    
    /// <summary>
    /// Returns name in images list which is key of the given image. 
    /// </summary>
    /// <param name="image">Image to search.</param>
    /// <returns>Name (key) of the found image; null if images was not found.</returns>
    System::String GetImageName(System::SharedPtr<XImage> image);
    /// <summary>
    /// Adds new image to Image list. This method adds image as reference to the same PdfObject (which allows to decrease file size)
    /// </summary>
    /// <param name="item">XImage to be added.</param>
    void Add(System::SharedPtr<XImage> const &item);
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear();
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(System::SharedPtr<XImage> const &item) const;
    /// <summary>
    /// Always throws NotImplementedException
    /// </summary>
    /// <param name="item"></param>
    bool Remove(System::SharedPtr<XImage> const &item);
    
protected:

    System::SharedPtr<Resources> get_Parent();
    
    static System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo> GetEncoder(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    static System::SharedPtr<Engine::Data::IPdfDataStream> _MakeImageFromStream(System::SharedPtr<System::IO::Stream> stream, int32_t quality, System::SharedPtr<Engine::Data::ITrailerable> parent);
    System::SharedPtr<Engine::Data::IPdfDataStream> MakeImageFromStream(System::SharedPtr<System::IO::Stream> stream, int32_t quality, System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    System::SharedPtr<Engine::Data::IPdfDataStream> MakeImageFromStream(System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    System::SharedPtr<Engine::Data::IPdfDataStream> MakeMonochromeImage(System::SharedPtr<System::Drawing::Bitmap> image);
    static System::SharedPtr<Engine::Data::IPdfDataStream> MakeMonochromeImage(System::SharedPtr<System::Drawing::Bitmap> image, System::SharedPtr<Engine::Data::ITrailerable> trailerable);
    static bool AddCCITTFaxDecodeImageMask(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<XImageCollection::ThresholdMaskParameters> thresholdMaskParameters, System::SharedPtr<Engine::Data::IPdfDataStream> img);
    System::SharedPtr<Engine::Data::IPdfObject> AddGifMaskedImage(System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType, uint8_t bitMask, bool isMasked);
    /// <summary>
    /// Determines whether emf format is used.
    /// </summary>
    /// <param name="stream">Input stream with image.</param>
    /// <returns>Is emf format is detected than jpeg stream returned; otherwise, input stream.</returns>
    static System::SharedPtr<System::IO::Stream> IsMetafile(System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, bool isBlackWhite);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, bool isBlackWhite, System::String& name);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, System::String& name);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType, bool isMasked, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    System::SharedPtr<Engine::Data::IPdfObject> DeleteByIndex(int32_t index);
    /// <summary>
    /// Returns ObjectID of deleted image.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    System::SharedPtr<Engine::Data::IPdfObject> DeleteBySize(int32_t index);
    
    XImageCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackAndWhite);
    void Add(System::String name, System::SharedPtr<Engine::Data::IPdfObject> image);
    System::String Add(System::SharedPtr<Engine::Data::IPdfObject> image);
    bool HasImage(System::String imgName);
    System::SharedPtr<Engine::Data::IPdfObject> DeleteBySizeAndIndex(System::SharedPtr<XImage> image);
    System::SharedPtr<Engine::Data::IPdfObject> DeleteBySize(System::SharedPtr<XImage> image);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Resources> _parent;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> _hash;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<Engine::Data::IPdfObject>>> _objectHash;
    
    static System::ArrayPtr<uint8_t> GetImageMask(System::SharedPtr<System::Drawing::Image> image);
    void AddJpxDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img, System::SharedPtr<System::Drawing::Image>& originalImage);
    void AddFlateDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img, int32_t quality, System::SharedPtr<System::Drawing::Image>& originalImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    void AddDCTDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img, int32_t quality, System::SharedPtr<System::Drawing::Image>& originalImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    void AddCCITTFaxDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType, bool isMasked, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType, uint8_t bitMask, bool isMasked, System::String& nameOfImage, System::SharedPtr<System::IO::Stream> predefinedStream = nullptr);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite, ImageFilterType filterType, System::String& name);
    System::SharedPtr<XImage> get(int32_t index);
    System::SharedPtr<XImage> get(System::String name);
    void CopyToInner(System::ArrayPtr<System::SharedPtr<XImage>> array, int32_t index);
    static System::String GetUniqueImageName(System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash);
    static System::SharedPtr<System::Drawing::Image> ToImage(System::SharedPtr<System::IO::Stream> stream);
    
};

} // namespace Pdf
} // namespace Aspose


