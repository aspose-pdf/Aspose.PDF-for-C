#pragma once

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/collections/list.h>
#include <system/collections/ilist.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class ITreeNode; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }

namespace Aspose {

namespace Pdf {

/// <summary>
/// This class represnets collection of JavaScript 
/// </summary>
class ASPOSE_PDF_SHARED_API JavaScriptCollection : public System::Object
{
    typedef JavaScriptCollection ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Document;
    
public:

    /// <summary>
    /// List of keys in JavaScript collection.
    /// </summary>
    System::SharedPtr<System::Collections::Generic::IList<System::String>> get_Keys();
    
    /// <summary>
    /// Gets or sets JavaScrip from collection by its key.
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    System::String idx_get(System::String key);
    /// <summary>
    /// Gets or sets JavaScrip from collection by its key.
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    void idx_set(System::String key, System::String value);
    
    /// <summary>
    /// Removes JavaScript by its name.
    /// </summary>
    /// <param name="key"></param>
    /// <returns></returns>
    bool Remove(System::String key);
    
protected:

    JavaScriptCollection(System::SharedPtr<Engine::Data::IPdfDictionary> root);
    
    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::SharedPtr<Engine::CommonData::ITreeNode> _javaScript;
    System::SharedPtr<Engine::Data::IPdfDictionary> _root;
    
    System::SharedPtr<Engine::CommonData::ITreeNode> FindLeaf(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    bool RemoveValue(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    System::SharedPtr<Engine::Data::IPdfPrimitive> FindValue(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key);
    void InsertNode(System::SharedPtr<Engine::CommonData::ITreeNode> parent, System::String key, System::SharedPtr<Engine::Data::IPdfPrimitive> value);
    void EnumKeys(System::SharedPtr<Engine::CommonData::ITreeNode> node, System::SharedPtr<System::Collections::Generic::List<System::String>> keys);
    void CreateJavascriptEntry();
    
};

} // namespace Pdf
} // namespace Aspose


