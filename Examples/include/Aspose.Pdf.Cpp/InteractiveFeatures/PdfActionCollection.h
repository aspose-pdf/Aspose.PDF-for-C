#pragma once

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Annotations { class Annotation; } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class describes list of actions. 
/// </summary>
class ASPOSE_PDF_SHARED_API PdfActionCollection : public System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
{
    typedef PdfActionCollection ThisType;
    typedef System::Collections::Generic::IEnumerable<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::Annotation;
    
private:

    class PdfActionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>>
    {
        typedef PdfActionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::Annotations::PdfAction>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<PdfAction> get_Current() const;
        
        PdfActionsEnumerator(System::SharedPtr<PdfActionCollection> actions);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<PdfActionCollection> actions;
        int32_t cursor;
        
    };
    
    
public:

    /// <summary>
    /// Gets count of actions.
    /// </summary>
    int32_t get_Count();
    
    /// <summary>
    /// Gets action by its index.
    /// </summary>
    /// <param name="index"></param>
    /// <returns></returns>
    System::SharedPtr<PdfAction> idx_get(int32_t index);
    
    /// <summary>
    /// Remove action by index.
    /// </summary>
    /// <param name="index">Index of action to remove.</param>
    void Delete(int32_t index);
    /// <summary>
    /// Add action to action list.
    /// </summary>
    /// <param name="action">Action to be added.</param>
    void Add(System::SharedPtr<PdfAction> action);
    /// <summary>
    /// Gets enumerator.
    /// </summary>
    /// <returns>PDfAction enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<PdfAction>>> GetEnumerator();
    
protected:

    PdfActionCollection(System::SharedPtr<Annotation> annotation);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::WeakPtr<Annotation> _annotation;
    System::SharedPtr<System::Collections::Generic::List<System::SharedPtr<PdfAction>>> _cache;
    
    void ValidateCache();
    void SaveCache();
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


