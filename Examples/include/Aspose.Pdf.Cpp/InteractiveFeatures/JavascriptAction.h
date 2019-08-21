#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <cstdint>

#include "InteractiveFeatures/PdfAction.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Forms { class TextBoxField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class RadioButtonField; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Form; } } }
namespace Aspose { namespace Pdf { namespace Forms { class Field; } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }

namespace Aspose {

namespace Pdf {

namespace Annotations {

/// <summary>
/// Class representing javascript action.
/// </summary>
class ASPOSE_PDF_SHARED_API JavascriptAction FINAL : public Aspose::Pdf::Annotations::PdfAction
{
    typedef JavascriptAction ThisType;
    typedef Aspose::Pdf::Annotations::PdfAction BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend class Aspose::Pdf::Annotations::PdfAction;
    friend class Aspose::Pdf::Document;
    friend class Aspose::Pdf::Forms::TextBoxField;
    friend class Aspose::Pdf::Forms::RadioButtonField;
    friend class Aspose::Pdf::Forms::Form;
    friend class Aspose::Pdf::Forms::Field;
    
protected:

    class ColorEnum : public System::Object
    {
        typedef ColorEnum ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        static const uint32_t red;
        static const uint32_t transparent;
        
    };
    
    class PdfEvent : public System::Object
    {
        typedef PdfEvent ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        System::String get_Value();
        void set_Value(System::String value);
        System::SharedPtr<Aspose::Pdf::Forms::Field> get_Field();
        
        PdfEvent(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
    private:
    
        System::String _value;
        System::SharedPtr<Aspose::Pdf::Forms::Field> _field;
        
    };
    
    
private:

    class DisplayEnum : public System::Object
    {
        typedef DisplayEnum ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        static const int32_t visible;
        static const int32_t hidden;
        static const int32_t noView;
        static const int32_t noPrint;
        
    };
    
    
public:

    /// <summary>
    /// Gets javascript code.
    /// </summary>
    System::String get_Script();
    /// <summary>
    /// Sets javascript code.
    /// </summary>
    void set_Script(System::String value);
    
    /// <summary>
    /// Creates PDF dictionary which describes action.
    /// </summary>
    /// <param name="trailer">Trailerable object</param>
    /// <returns>PDF dictionary.</returns>
    //internal override IPdfDictionary createAction(ITrailerable trailer)
    //{
    //    //IPdfDictionary js = base.createAction(trailer);
    //    //js.Add(PdfConsts.S, new PdfName(PdfConsts.JavaScript));
    //    //js.Add(PdfConsts.JS, new PdfString(trailer, _script));
    //    //EngineDict = js;
    //    //return js;
    //    return EngineDict;
    //}
    /// <summary>
    /// Constructor.
    /// </summary>
    /// <param name="javaScript">JavaScript code.</param>
    JavascriptAction(System::String javaScript);
    
protected:

    static System::String ConvertToString(System::SharedPtr<System::IO::Stream> stream);
    
    /// <summary>
    /// Constructor for Javascript class. 
    /// </summary>
    /// <param name="action">PDF dictionary which describes action.</param>
    JavascriptAction(System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> action);
    
    void Execute(System::SharedPtr<Document> document, System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    
private:

    static System::String GetValue(System::SharedPtr<Aspose::Pdf::Forms::Field> field);
    
};

} // namespace Annotations
} // namespace Pdf
} // namespace Aspose


