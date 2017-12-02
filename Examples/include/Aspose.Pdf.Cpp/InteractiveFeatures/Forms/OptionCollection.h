#ifndef _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_
#define _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

#include <system/shared_ptr.h>
#include <system/collections/ienumerator.h>
#include <system/collections/icollection.h>
#include <system/array.h>

#include "InteractiveFeatures/Forms/Option.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Facades { class FormEditor; } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ChoiceField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ComboBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class ListBoxField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class RadioButtonField; } } } }
namespace Aspose { namespace Pdf { namespace InteractiveFeatures { namespace Forms { class BaseOptionCollection; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace InteractiveFeatures {

namespace Forms {

/// <summary>
/// Class representing collection of options of the choice field. 
/// </summary>
//<<--REFACTORING: Old code: public sealed class OptionCollection : ICollection
class ASPOSE_PDF_SHARED_API OptionCollection FINAL : public System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>>
{
    typedef OptionCollection ThisType;
    typedef System::Collections::Generic::ICollection<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Facades::FormEditor;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ChoiceField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ComboBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::ListBoxField;
    friend class Aspose::Pdf::InteractiveFeatures::Forms::RadioButtonField;
    
private:

    class ASPOSE_PDF_SHARED_API OptionsEnumerator : public System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>>
    {
        typedef OptionsEnumerator ThisType;
        typedef System::Collections::Generic::IEnumerator<System::SharedPtr<Aspose::Pdf::InteractiveFeatures::Forms::Option>> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::SharedPtr<Option> get_Current() const;
        
        OptionsEnumerator(System::SharedPtr<BaseOptionCollection> options);
        
        bool MoveNext();
        void Reset();
        void Dispose();
        
        virtual ~OptionsEnumerator();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::SharedPtr<BaseOptionCollection> options;
        int32_t cursor;
        bool mIsDisposed;
        
    };
    
    
public:

    /// <summary>
    /// Returns true of object is synchronized.
    /// </summary>
    bool get_IsSynchronized();
    /// <summary>
    /// Synchronization object of the collection.
    /// </summary>
    System::SharedPtr<System::Object> get_SyncRoot();
    /// <summary>
    /// Gets number of options.
    /// </summary>
    int32_t get_Count() const;
    
    /// <summary>
    /// Copies options into array.
    /// </summary>
    /// <param name="array">Array where options wil lbe copied.</param>
    /// <param name="index">Startign index in array.</param>
    //<<--REFACTORING: Old code: public void CopyTo(Array array, int index)
    void CopyTo(System::ArrayPtr<System::SharedPtr<Option>> array, int32_t index);
    /// <summary>
    /// Returns enumerator for options in collection.
    /// </summary>
    /// <returns>Options enumerator.</returns>
    System::SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Option>>> GetEnumerator();
    /// <summary>
    /// Gets option by index.
    /// </summary>
    /// <param name="index">Option index. Index should be in range [1..n] where n is options count.</param>
    /// <returns>Retreived option.</returns>
    System::SharedPtr<Option> get(int32_t index);
    /// <summary>
    /// Gets option from colleciton by option name.
    /// </summary>
    /// <param name="name">Option name.</param>
    /// <returns>Retreived option.</returns>
    System::SharedPtr<Option> get(System::String name);
    
    /// <summary>
    /// Gets option by index.
    /// </summary>
    /// <param name="index">Index of the option.</param>
    /// <returns>Option on the specified index.</returns>
    System::SharedPtr<Option> idx_get(int32_t index);
    /// <summary>
    /// Gets option by its name.
    /// </summary>
    /// <param name="name">Name of the option.</param>
    /// <returns>Found option.</returns>
    System::SharedPtr<Option> idx_get(System::String name);
    
protected:

    OptionCollection(System::SharedPtr<BaseOptionCollection> options);
    
    /// <summary>
    /// Adds option to the colleciton.
    /// </summary>
    /// <param name="name">Name of new option.</param>
    void AddOption(System::String name);
    /// <summary>
    /// Adds option to the colleciton.
    /// </summary>
    /// <param name="export">Export identifer of the option.</param>
    /// <param name="name">Name of the option.</param>
    void AddOption(System::String export_, System::String name);
    /// <summary>
    /// Deletes option by its name.
    /// </summary>
    /// <param name="name">Name of the option to delete.</param>
    void DeleteOption(System::String name);
    void Initialize(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> dict);
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<BaseOptionCollection> options;
    System::SharedPtr<System::Object> syncRoot;
    
    /// <summary>
    /// </summary>
    bool get_IsReadOnly();
    
    /// <summary>
    /// </summary>
    bool Remove(System::SharedPtr<Option> const &item);
    /// <summary>
    /// </summary>
    bool Contains(System::SharedPtr<Option> const &item) const;
    /// <summary>
    /// </summary>
    void Clear();
    /// <summary>
    /// </summary>
    void Add(System::SharedPtr<Option> const &item);
    
};

} // namespace Forms
} // namespace InteractiveFeatures
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_InteractiveFeatures_Forms_OptionCollection_h_

