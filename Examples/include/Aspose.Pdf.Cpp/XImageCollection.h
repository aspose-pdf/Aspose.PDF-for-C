#ifndef _Aspose_Pdf_XImageCollection_h_
#define _Aspose_Pdf_XImageCollection_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

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
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "ImagesEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        System::SharedPtr<XImageCollection> _parent;
        System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _images;
        int32_t _cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    bool get_IsSynchronized();
    System::SharedPtr<System::Object> get_SyncRoot();
    System::ArrayPtr<System::String> get_Names();
    
    void Add(System::SharedPtr<System::IO::Stream> image);
    void Add(System::SharedPtr<System::IO::Stream> image, int32_t quality);
    void Delete(int32_t index);
    void Delete(System::String name);
    void Delete();
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<XImage>>> GetEnumerator();
    void CopyTo(System::ArrayPtr<System::SharedPtr<XImage>> array, int32_t index);
    void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream);
    void Replace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    
    System::SharedPtr<XImage> idx_get(int32_t index);
    System::SharedPtr<XImage> idx_get(System::String name);
    
protected:

    System::SharedPtr<Engine::Data::IPdfDataStream> MakeImageFromSteram(System::SharedPtr<System::IO::Stream> stream, int32_t quality);
    static System::SharedPtr<System::IO::Stream> IsMetafile(System::SharedPtr<System::IO::Stream> stream);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite);
    System::SharedPtr<Engine::Data::IPdfObject> add(System::SharedPtr<System::IO::Stream> stream, bool isBlackWhite);
    
    XImageCollection(System::SharedPtr<Resources> parent, System::SharedPtr<Engine::Data::IPdfDictionary> xobject);
    
    void Add(System::String name, System::SharedPtr<Engine::Data::IPdfObject> image);
    System::String Add(System::SharedPtr<Engine::Data::IPdfObject> image);
    bool HasImage(System::String imgName);
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "XImageCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Object> syncRoot;
    System::WeakPtr<Resources> _parent;
    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<System::Object>>> _cache;
    System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> _hash;
    
    bool get_IsReadOnly();
    
    System::ArrayPtr<uint8_t> GetImageMask(System::SharedPtr<System::Drawing::Image> image);
    System::SharedPtr<System::Drawing::Imaging::ImageCodecInfo> GetEncoder(System::SharedPtr<System::Drawing::Imaging::ImageFormat> format);
    void AddDCTDecodeImage(System::SharedPtr<System::IO::Stream> stream, System::SharedPtr<Engine::Data::ITrailerable> p, System::SharedPtr<Engine::Data::IPdfDataStream> img, int32_t quality, System::SharedPtr<System::Drawing::Image> &originalImage);
    System::SharedPtr<Engine::Data::IPdfObject> AddOrReplace(int32_t index, System::SharedPtr<System::IO::Stream> stream, int32_t quality, bool isBlackWhite);
    void Add(System::SharedPtr<XImage> const &item);
    bool Remove(System::SharedPtr<XImage> const &item);
    bool Contains(System::SharedPtr<XImage> const &item) const;
    void Clear();
    System::SharedPtr<XImage> get(int32_t index);
    System::SharedPtr<XImage> get(System::String name);
    static System::String GetUniqueImageName(System::SharedPtr<Collections::AsposeHashDictionary<System::String, System::SharedPtr<System::Object>>> hash);
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_XImageCollection_h_

