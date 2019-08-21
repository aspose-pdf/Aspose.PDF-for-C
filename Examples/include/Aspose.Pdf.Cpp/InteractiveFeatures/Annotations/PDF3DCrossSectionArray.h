#pragma once
//using System.Windows.Forms;
//using System.CodeDom;

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DView; } } }
namespace Aspose { namespace Pdf { namespace Tests { namespace PDF3D { class PDF3DReporter; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class ITrailerable; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfArray; } } } }
namespace Aspose { namespace Pdf { namespace Annotations { class PDF3DCrossSection; } } }
namespace Aspose { namespace Pdf { class Document; } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class PDF3DCrossSectionArray.
/// </summary>
class ASPOSE_PDF_SHARED_API PDF3DCrossSectionArray : public System::Object
{
    typedef PDF3DCrossSectionArray ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PDF3DView;
    friend class Aspose::Pdf::Tests::PDF3D::PDF3DReporter;
    
public:

    /// <summary>
    /// Gets the cross section count.
    /// </summary>
    /// <value>The cross section count.</value>
    int32_t get_Count();
    
    /// <summary>
    /// Initializes a new instance of the <see cref="PDF3DCrossSectionArray"/> class.
    /// </summary>
    /// <param name="doc">The document.</param>
    PDF3DCrossSectionArray(System::SharedPtr<Document> doc);
    
    /// <summary>
    /// Adds the specified cross section to views array .
    /// </summary>
    /// <param name="crossSection">The cross section.</param>
    void Add(System::SharedPtr<PDF3DCrossSection> crossSection);
    /// <summary>
    /// Removes cross section from array at specified index.
    /// </summary>
    /// <param name="index">The index of removed cross section in array.</param>
    /// <exception cref="IndexOutOfRangeException">Invalid index: index should be in the range [1..n] where n equals to the cross sections count.</exception>
    void RemoveAt(int32_t index);
    /// <summary>
    /// Removes all cross section from array.
    /// </summary>
    void RemoveAll();
    
    /// <summary>
    /// Gets the <see cref="PDF3DCrossSection"/> at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <returns>Cross section.</returns>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the cross sections count.
    /// </exception>
    System::SharedPtr<PDF3DCrossSection> idx_get(int32_t index);
    /// <summary>
    /// Sets the <see cref="PDF3DCrossSection"/> at the specified index.
    /// </summary>
    /// <param name="index">The index.</param>
    /// <param name="value">Cross section.</param>
    /// <exception cref="IndexOutOfRangeException">
    /// Invalid index: index should be in the range [1..n] where n equals to the cross sections count.
    /// </exception>
    void idx_set(int32_t index, System::SharedPtr<PDF3DCrossSection> value);
    
protected:

    System::SharedPtr<PDF3DView> Pdf3DView;
    
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> get_CrossSectionPdfArray();
    void set_CrossSectionPdfArray(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> value);
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DCrossSection>>> get_CrossSectionListArray();
    
    PDF3DCrossSectionArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> crossSectionPdfArray);
    PDF3DCrossSectionArray(System::SharedPtr<Document> doc, System::SharedPtr<PDF3DView> view);
    
    void AddToList(System::SharedPtr<PDF3DCrossSection> crossSection, int32_t objectID);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Aspose::Pdf::Engine::Data::ITrailerable> _tr;
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfArray> _crossSectionPdfArray;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PDF3DCrossSection>>> _crossSectionListArray;
    System::SharedPtr<Document> _doc;
    
    void UpdateAt(int32_t index, System::SharedPtr<PDF3DCrossSection> crossSection);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


