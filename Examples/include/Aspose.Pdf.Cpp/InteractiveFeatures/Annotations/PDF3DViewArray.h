#pragma once
//using System.Windows.Forms;

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DAnnotation; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DArtwork; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSectionArray; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DStream; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDF3D { class PDF3DReporter; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DLightingScheme; } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DRenderMode; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DViewArray.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DViewArray : public System::Object
{
    typedef PDF3DViewArray ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DAnnotation;
    friend class Aspose::Pdf::Annotations::PDF3DArtwork;
    friend class Aspose::Pdf::Annotations::PDF3DCrossSectionArray;
    friend class Aspose::Pdf::Annotations::PDF3DStream;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets the views count.
    /// </summary>
    /// <value>The views count.</value>
    int32_t get_Count();
    
    /// <summary>
    /// Adds the specified view.
    /// </summary>
    /// <param name="view">The view.</param>
    /// <exception cref="ArgumentException">Only one entry of 3D view is allowed</exception>
    void Add(System::SharedPtr<PDF3DView> view);
    /// <summary>
    /// Removes view from views array at specified index.
    /// </summary>
    /// <param name="index">The view index.</param>
    /// <exception cref="IndexOutOfRangeException">Invalid index: index should be in the range [1..n] where n equals to the views count.</exception>
    void RemoveAt(int32_t index);
    /// <summary>
    /// Removes all views.
    /// </summary>
    void RemoveAll();
    
    /// <summary>
    /// Gets the <see cref="PDF3DView"/> to view array at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>PDF3DView.</returns>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the views count.
    /// </exception>
    System::SharedPtr<PDF3DView> idx_get(int32_t index);
    /// <summary>
    /// Sets the <see cref="PDF3DView"/> to view array at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="value">PDF3DView.</param>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the views count.
    /// </exception>
    void idx_set(int32_t index, System::SharedPtr<PDF3DView> value);
    
protected:

    System::SharedPtr<PDF3DStream> Pdf3DStream;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_ViewPdfArray();
    void set_ViewPdfArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DView>>> get_ViewListArray();
    
    PDF3DViewArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DStream> pdf3DStream);
    
    System::SharedPtr<PDF3DView> CreateDefaultView(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::SharedPtr<PDF3DLightingScheme> lightingScheme, System::SharedPtr<PDF3DRenderMode> renderMode);
    System::SharedPtr<PDF3DView> GetDefaultViewAndCreateViewArray(int32_t index);
    void UpdateDefaultView(int32_t index);
    void UpdateDefaultView(System::SharedPtr<PDF3DView> view);
    void AddToList(System::SharedPtr<PDF3DView> view, int32_t objectID);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _viewPdfArray;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DView>>> _viewListArray;
    System::SharedPtr<Document> _doc;
    
    void UpdateAt(int32_t index, System::SharedPtr<PDF3DView> view);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


