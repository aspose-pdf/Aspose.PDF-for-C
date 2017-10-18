#ifndef _Aspose_Pdf_DestinationCollection_h_
#define _Aspose_Pdf_DestinationCollection_h_

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/keyvalue_pair.h>
#include <system/collections/ienumerator.h>
#include <system/collections/ienumerable.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { class IPdfDocument; } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// Class represents the collection of all destinations (a name tree mapping name strings to destinations (see 12.3.2.3, "Named Destinations") and (see 7.7.4, "Name Dictionary")) in the pdf document. 
/// </summary>
class ASPOSE_PDF_SHARED_API DestinationCollection FINAL : public System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>, public System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
{
    typedef DestinationCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
    typedef System::Collections::Generic::IEnumerable<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType1;
    
    typedef ::System::BaseTypesInfo<BaseType, BaseType1> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
protected:

    class ASPOSE_PDF_SHARED_API DestinationEnumerator : public System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>
    {
        typedef DestinationEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> get_Current() const;
        
        DestinationEnumerator(System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~DestinationEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "DestinationEnumerator"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    private:
    
        bool initialized;
        System::SharedPtr<System::Collections::Generic::ICollection<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> destinations;
        System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> enumerator;
        int32_t viewed;
        bool mIsDisposed;
        
    };
    
    
public:

    int32_t get_Count() const;
    bool get_IsReadOnly();
    
    void Add(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &item);
    void Clear();
    void CopyTo(System::ArrayPtr<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>> array, int32_t arrayIndex);
    bool Remove(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &item);
    
    System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> idx_get(int32_t index);
    
    int32_t GetPageNumber(System::String destinameName, bool useCache);
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> GetEnumerator();
    int32_t IndexOf(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> value);
    bool Contains(System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>> const &value) const;
    
protected:

    DestinationCollection(System::SharedPtr<Document> document);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "DestinationCollection"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<System::Collections::Generic::KeyValuePair<System::String, System::SharedPtr<System::Object>>>> InnerList;
    System::SharedPtr<Engine::IPdfDocument> _document;
    
    void Init();
    
};

} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_DestinationCollection_h_

