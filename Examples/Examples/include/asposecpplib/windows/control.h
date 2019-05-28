/// @file windows/control.h
#ifndef _aspose_system_windows_forms_control_h_
#define _aspose_system_windows_forms_control_h_

#include <system/object.h>
#include <system/reflection.h>
#include <system/shared_ptr.h>
#include <system/collections/ilist.h>
#include <system/string.h>
#include <system/array.h>

namespace System
{
namespace Drawing
{
class Graphics;
}
namespace Windows
{
namespace Forms
{

/// Dummy class to make ported code that uses Control class compilable.
/// Methods are not implemented.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS Control : public System::Object
{
    /// RTTI information.
    RTTI_INFO(System::Windows::Forms::Control, System::BaseTypesInfo<System::Object>)

public:
    /// Creates graphics associated with control.
    ASPOSECPP_SHARED_API System::SharedPtr<System::Drawing::Graphics> CreateGraphics();

    /// Collection of controls.
    /// Not implemented.
    class ControlCollection : public System::Collections::Generic::IList<System::SharedPtr<Control>>
    {
    private:
        /// Owner control.
        const System::SharedPtr<Control> mOwner;

    public:
        /// Constructor.
        ASPOSECPP_SHARED_API ControlCollection(const System::SharedPtr<Control>& owner);

        /// By-index accessor.
        virtual ASPOSECPP_SHARED_API System::SharedPtr<Control> idx_get(int index) const;
        /// By-index accessor.
        virtual ASPOSECPP_SHARED_API void idx_set(int index, System::SharedPtr<Control> value);
        /// By-name accessor.
        virtual ASPOSECPP_SHARED_API System::SharedPtr<Control> idx_get(System::String key) const;
        /// By-name accessor.
        virtual ASPOSECPP_SHARED_API void idx_set(System::String key, System::SharedPtr<Control> value);

        /// Gets collection owner control.
        ASPOSECPP_SHARED_API System::SharedPtr<Control> get_Owner() const;
        /// Gets number of controls in collection.
        ASPOSECPP_SHARED_API int get_Count() const;

        /// Adds control into collection.
        virtual ASPOSECPP_SHARED_API void Add(const System::SharedPtr<Control>& value);
        /// Adds several controls into collection.
        virtual ASPOSECPP_SHARED_API void AddRange(System::ArrayPtr<System::SharedPtr<Control>> controls);
        /// Deletes all controls from collection.
        virtual ASPOSECPP_SHARED_API void Clear();
        /// Checks if specific control is present in collection.
        virtual ASPOSECPP_SHARED_API bool Contains(const System::SharedPtr<Control>& control) const;
        /// Checks if control with specific name is present in collection.
        virtual ASPOSECPP_SHARED_API bool ContainsKey(System::String key) const;
        /// Looks for the named control in collection. Optionally checks contained controls' collections recursively.
        ASPOSECPP_SHARED_API System::ArrayPtr<System::SharedPtr<Control>> Find(const System::String& key, bool searchAllChildren) const;
        /// Looks for specific control.
        ASPOSECPP_SHARED_API int GetChildIndex(const System::SharedPtr<Control>& child) const;
        /// Looks for specific control.
        virtual ASPOSECPP_SHARED_API int GetChildIndex(const System::SharedPtr<Control>& child, bool throwException) const;
        /// Gets enumerator to iterate through collection.
        virtual ASPOSECPP_SHARED_API SharedPtr<System::Collections::Generic::IEnumerator<System::SharedPtr<Control>>> GetEnumerator();
        /// Looks for control in collection.
        virtual ASPOSECPP_SHARED_API int IndexOf(const System::SharedPtr<Control>& control) const;
        /// Looks for named control in collection.
        virtual ASPOSECPP_SHARED_API int IndexOfKey(System::String key) const;
        /// Removes control from collection.
        virtual ASPOSECPP_SHARED_API bool Remove(const System::SharedPtr<Control>& value);
        /// Removes control from collection.
        virtual ASPOSECPP_SHARED_API void RemoveAt(int index);
        /// Removes control from collection.
        virtual ASPOSECPP_SHARED_API void RemoveByKey(System::String key);
        /// Moves control to a new position.
        virtual ASPOSECPP_SHARED_API void SetChildIndex(const System::SharedPtr<Control>& child, int newIndex);
        /// Inserts control into collection.
        virtual ASPOSECPP_SHARED_API void Insert(int index, const System::SharedPtr<Control>& item);
        /// Copies collection contents into existing array elements.
        virtual ASPOSECPP_SHARED_API void CopyTo(System::ArrayPtr<System::SharedPtr<Control>> array, int arrayIndex);
    };
};

}
}
}

#endif
