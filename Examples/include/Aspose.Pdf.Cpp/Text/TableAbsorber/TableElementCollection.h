#pragma once

// C# preprocessor directive: #if UNIT_TEST


#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/eventhandler.h>
#include <system/eventargs.h>
#include <system/details/pointer_collection_helpers.h>
#include <system/constraints.h>
#include <system/collections/list.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>
#include <cstdint>

#include "Text/TableAbsorber/ITableElement.h"
#include "Document.h"

namespace Aspose { namespace Pdf { namespace Text { class ITableElement; } } }

namespace Aspose {

namespace Pdf {

namespace Text {

/// <summary>
/// Represents a collection of elements absorbed from existing table
/// </summary>
/// <typeparam name="T">Instance of type implementing <see cref="ITableElement"/></typeparam>
template<typename T>
class TableElementCollection FINAL : public System::Collections::Generic::ICollection<T>
{
    assert_is_cs_class(T);
    typedef ITableElement BaseT_ITableElement;
    assert_is_base_of(BaseT_ITableElement, T);
    
    typedef TableElementCollection<T> ThisType;
    typedef System::Collections::Generic::ICollection<T> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
    FRIEND_FUNCTION_System_MakeObject;
    
private:

    class TableElementsEnumerator : public System::Collections::Generic::IEnumerator<T>
    {
        typedef TableElementsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<T> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
    public:
    
        T get_Current() const
        {
            Document::Restrict(_document, viewed);
            return cursor->get_Current();
        }
        
        TableElementsEnumerator(System::SharedPtr<System::Collections::Generic::List<T>> tableElements, System::SharedPtr<Document> document)
             : viewed(0), _document(nullptr)
        {
            cursor = tableElements->GetEnumerator();
            _document = document;
        }
        
        bool MoveNext()
        {
            if (Document::Restricted(_document, viewed + 1))
            {
                return false;
            }
            else
            {
                viewed++;
                return cursor->MoveNext();
            }
        }
        
        void Reset()
        {
            cursor->Reset();
            viewed = 0;
        }
        
        void Dispose()
        {
        }
        
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override
        {
            auto result = System::Object::GetSharedMembers();
            
            result.Add("Aspose::Pdf::Text::TableElementCollection::TableElementsEnumerator::cursor", this->cursor);
            result.Add("Aspose::Pdf::Text::TableElementCollection::TableElementsEnumerator::_document", this->_document);
            
            return result;
        }
        
        
        
    private:
    
        System::SharedPtr<System::Collections::Generic::IEnumerator<T>> cursor;
        int32_t viewed;
        System::SharedPtr<Document> _document;
        
    };
    
    
public:

    /// <summary>
    /// Gets the number of table elements actually contained in the collection. 
    /// </summary>
    int32_t get_Count() const
    {
        return elements->get_Count();
    }
    
    /// <summary>
    /// Gets an object that can be used to synchronize access to the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot()
    {
        return syncRoot;
    }
    
    /// <summary>
    /// Gets a value indicating whether access to the collection is synchronized (thread safe). 
    /// </summary>
    bool get_IsSynchronized()
    {
        return false;
    }
    
    /// <summary>
    /// Gets a value indicating whether collection is read-only
    /// </summary>
    bool get_IsReadOnly()
    {
        return false;
    }
    
    /// <summary>
    /// Adds the text fragment element at the specified index.
    /// </summary>
    void Add(T const &element)
    {
        elements->Add(element);
        if (OnCollectionChanged != nullptr)
        {
            OnCollectionChanged(System::MakeSharedPtr(this), System::EventArgs::Empty);
        }
    }
    
    /// <summary>
    /// Returns an enumerator for the entire collection.
    /// </summary>
    /// <returns>Enumerator object.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<T>> GetEnumerator()
    {
        return System::MakeObject<TableElementsEnumerator>(elements, _document);
    }
    
    /// <summary>
    /// Copies the entire collection to a compatible one-dimensional Array, starting at the specified index of the target array
    /// </summary> 
    /// <param name="array">Array of objects which will be copied.</param>
    /// <param name="index">Starting index from which copying will be started.</param>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    void CopyTo(System::ArrayPtr<T> array, int32_t index)
    {
        
        {
            auto file_enumerator = (System::MakeSharedPtr(this))->GetEnumerator();
            decltype(file_enumerator->get_Current()) file;
            while (file_enumerator->MoveNext() && (file = file_enumerator->get_Current(), true))
            {
                array->SetValue(file, index++);
            }
        }
        
        Document::CutByRestrictionWrapper<T>::CutByRestriction(_document, array);
    }
    
    /// <summary>
    /// Clears all items from the collection.
    /// </summary>
    void Clear()
    {
        elements->Clear();
        if (OnCollectionChanged != nullptr)
        {
            OnCollectionChanged(System::MakeSharedPtr(this), System::EventArgs::Empty);
        }
    }
    
    /// <summary>
    /// Determines whether the collection contains a specific value.
    /// </summary>
    /// <param name="item">The object to locate in the collection</param>
    /// <returns>true if item is found in the collection; otherwise, false.</returns>
    bool Contains(T const &item) const
    {
        return elements->Contains(item);
    }
    
    /// <summary>
    /// Deletes specified item from collection.
    /// </summary>
    /// <param name="item">The object to delete</param>
    /// <returns>true if item was deleted from collection; otherwise, false.</returns>
    bool Remove(T const &item)
    {
        bool result = elements->Remove(item);
        if (OnCollectionChanged != nullptr)
        {
            OnCollectionChanged(System::MakeSharedPtr(this), System::EventArgs::Empty);
        }
        return result;
    }
    
    /// <summary>
    /// Gets the text fragment element at the specified index.
    /// </summary>
    /// <param name="index">Index within the collection.</param>
    /// <returns>table element object.</returns>
    //[Obfuscation(Feature = "virtualization", Exclude = false)]
    T idx_get(int32_t index)
    {
        Document::Restrict(_document, index);
        
        if (index <= 0 || index > elements->get_Count())
        {
            throw System::IndexOutOfRangeException(u"Invalid index: index should be in the range [1..n] where n equals to the table elements count.");
        }
        
        return elements->idx_get(index - 1);
    }
    
    void SetTemplateWeakPtr(unsigned int argument) override
    {
        switch (argument)
        {
            case 0:
                System::Details::CollectionHelpers::SetWeakPointer(0, elements);
                break;
        }
    }
    
protected:

    System::EventHandler<> OnCollectionChanged;
    
    /// <summary>
    /// Initializes a new instance of <see cref="TableElementCollection"/> collection class
    /// </summary>
    TableElementCollection() : elements(System::MakeObject<System::Collections::Generic::List<T>>())
        , syncRoot(System::MakeObject<System::Object>()), _document(nullptr)
    {
    }
    
    /// <summary>
    /// Initializes a new instance of <see cref="TableElementCollection"/> collection class
    /// </summary>
    TableElementCollection(System::SharedPtr<Document> document)
         : elements(System::MakeObject<System::Collections::Generic::List<T>>())
        , syncRoot(System::MakeObject<System::Object>()), _document(nullptr)
    {
        _document = document;
    }
    
    System::Object::shared_members_type GetSharedMembers() override
    {
        auto result = System::Object::GetSharedMembers();
        
        result.Add("Aspose::Pdf::Text::TableElementCollection::elements", this->elements);
        result.Add("Aspose::Pdf::Text::TableElementCollection::_document", this->_document);
        
        return result;
    }
    
    
    
private:

    System::SharedPtr<System::Collections::Generic::List<T>> elements;
    System::SharedPtr<System::Object> syncRoot;
    System::SharedPtr<Document> _document;
    
};

} // namespace Text
} // namespace Pdf
} // namespace Aspose

// C# preprocessor directive: #endif



