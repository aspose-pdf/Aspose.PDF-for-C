#ifndef _Aspose_Pdf_PageLabelCollection_h_
#define _Aspose_Pdf_PageLabelCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class NumberTree; } }
namespace Aspose { namespace Pdf { class PageLabel; } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represeingting page label collection. 
/// </summary>
class ASPOSE_PDF_SHARED_API PageLabelCollection : public System::Object
{
    typedef PageLabelCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// Gets page label by page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of the page.</param>
    /// <returns>Page label for specified page index or null if page label does not exist.</returns>
    System::SharedPtr<PageLabel> GetLabel(int32_t pageIndex);
    /// <summary>
    /// Update label for given page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of page to change lable of the page.</param>
    /// <param name="pageLabel">New label of the page.</param>
    void UpdateLabel(int32_t pageIndex, System::SharedPtr<PageLabel> pageLabel);
    /// <summary>
    /// Remove label by page index (page index is started from 0).
    /// </summary>
    /// <param name="pageIndex">Index of page where label must be deleted.</param>
    /// <returns>true if operation was executed successfully.</returns>
    bool RemoveLabel(int32_t pageIndex);
    /// <summary>
    /// Gets page indexes in collection.
    /// </summary>
    /// <returns>Array of integers which contains indexes of the pages.</returns>
    System::ArrayPtr<int32_t> GetPages();
    
protected:

    PageLabelCollection(System::SharedPtr<Engine::Data::IPdfDictionary> engineDict);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::Data::IPdfDictionary> _engineDict;
    System::SharedPtr<Aspose::Pdf::NumberTree> _numberTree;
    
    System::SharedPtr<Aspose::Pdf::NumberTree> get_NumberTree();
    System::SharedPtr<Engine::Data::IPdfDictionary> get_Root();
    
    void InitializeRoot();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_PageLabelCollection_h_

