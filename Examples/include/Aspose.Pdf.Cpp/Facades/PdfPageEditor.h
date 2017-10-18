#ifndef _Aspose_Pdf_Facades_PdfPageEditor_h_
#define _Aspose_Pdf_Facades_PdfPageEditor_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/io/stream.h>
#include <system/collections/dictionary.h>
#include <system/array.h>
#include <drawing/rectangle.h>
#include <cstdint>

#include "Facades/Facade.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { class PageSize; } }
namespace Aspose { namespace Pdf { enum class HorizontalAlignment; } }
namespace Aspose { namespace Pdf { enum class VerticalAlignment; } }
namespace Aspose { namespace Pdf { class Point; } }
namespace Aspose { namespace Pdf { class Document; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfDictionary; } } } }
namespace Aspose { namespace Pdf { class Page; } }
namespace Aspose { namespace Pdf { class Rectangle; } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { class IPdfRectangle; } } } }

namespace Aspose {

namespace Pdf {

namespace Facades {

/// <summary> 
/// Represents a class to edit the PDF file's page, including rotating page, zooming page, moving position and changing page size. 
/// </summary>
class ASPOSE_PDF_SHARED_API PdfPageEditor FINAL : public Aspose::Pdf::Facades::SaveableFacade
{
    typedef PdfPageEditor ThisType;
    typedef Aspose::Pdf::Facades::SaveableFacade BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
private:

    class ASPOSE_PDF_SHARED_API Transition : public System::Object
    {
        typedef Transition ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        int32_t type;
        System::SharedPtr<Document> document;
        int32_t duration;
        
        int32_t get_Duration();
        void set_Duration(int32_t value);
        
        Transition(System::SharedPtr<Document> document, int32_t type);
        
        System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfDictionary> GetDictionary();
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "Transition"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    constexpr static const int32_t SPLITVOUT = 1;
    constexpr static const int32_t SPLITHOUT = 2;
    constexpr static const int32_t SPLITVIN = 3;
    constexpr static const int32_t SPLITHIN = 4;
    constexpr static const int32_t BLINDV = 5;
    constexpr static const int32_t BLINDH = 6;
    constexpr static const int32_t INBOX = 7;
    constexpr static const int32_t OUTBOX = 8;
    constexpr static const int32_t LRWIPE = 9;
    constexpr static const int32_t RLWIPE = 10;
    constexpr static const int32_t BTWIPE = 11;
    constexpr static const int32_t TBWIPE = 12;
    constexpr static const int32_t DISSOLVE = 13;
    constexpr static const int32_t LRGLITTER = 14;
    constexpr static const int32_t TBGLITTER = 15;
    constexpr static const int32_t DGLITTER = 16;
    
    int32_t get_TransitionDuration();
    void set_TransitionDuration(int32_t value);
    int32_t get_TransitionType();
    void set_TransitionType(int32_t value);
    int32_t get_DisplayDuration();
    void set_DisplayDuration(int32_t value);
    System::ArrayPtr<int32_t> get_ProcessPages();
    void set_ProcessPages(System::ArrayPtr<int32_t> value);
    int32_t get_Rotation();
    void set_Rotation(int32_t value);
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> get_PageRotations();
    void set_PageRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> value);
    float get_Zoom();
    void set_Zoom(float value);
    System::SharedPtr<Aspose::Pdf::PageSize> get_PageSize();
    void set_PageSize(System::SharedPtr<Aspose::Pdf::PageSize> value);
    Aspose::Pdf::HorizontalAlignment get_HorizontalAlignment();
    void set_HorizontalAlignment(Aspose::Pdf::HorizontalAlignment value);
    Aspose::Pdf::VerticalAlignment get_VerticalAlignmentType();
    void set_VerticalAlignmentType(Aspose::Pdf::VerticalAlignment value);
    
    PdfPageEditor();
    PdfPageEditor(System::SharedPtr<Aspose::Pdf::Document> document);
    
    void MovePosition(float moveX, float moveY);
    int32_t GetPages();
    System::SharedPtr<Aspose::Pdf::PageSize> GetPageSize(int32_t page);
    int32_t GetPageRotation(int32_t page);
    System::Drawing::Rectangle GetPageBoxSize(int32_t page, System::String pageBoxName);
    virtual void Save(System::String outputFile);
    virtual void Save(System::SharedPtr<System::IO::Stream> outputStream);
    void ApplyChanges();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    static void __FreeStaticPointers();
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "PdfPageEditor"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    constexpr static const int32_t TRANSITION_DURATION = 1;
    constexpr static const int32_t TRANSITION_TYPE = 2;
    constexpr static const int32_t DISPLAY_DURATION = 4;
    int32_t transitionSet;
    int32_t displayDuration;
    int32_t transitionType;
    int32_t transitionDuration;
    System::ArrayPtr<int32_t> pages;
    int32_t rotation;
    System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> pageRotations;
    float zoom;
    System::SharedPtr<Aspose::Pdf::PageSize> pageSize;
    Aspose::Pdf::HorizontalAlignment alignment;
    Aspose::Pdf::VerticalAlignment verticalAlignment;
    System::SharedPtr<Point> move;
    static const System::String E_INVALID_ROTATIONS;
    static const System::String E_INVALID_ROTATION_VALUE;
    
    void FlushChanges();
    int32_t getRequestedPageRotation(int32_t pageIndex);
    bool isBoxDefined(System::SharedPtr<Page> page, System::String boxName);
    System::SharedPtr<Rectangle> ToRectangle(System::SharedPtr<Aspose::Pdf::Engine::CommonData::IPdfRectangle> rect);
    System::SharedPtr<Rectangle> GetPageRectangle(System::SharedPtr<Page> page);
    void applyChangesToPage(int32_t pageIndex);
    void checkRotation(int32_t rotation);
    void checkRotations(System::SharedPtr<System::Collections::Generic::Dictionary<int32_t, int32_t>> rotations);
    System::Drawing::Rectangle convertToRectangle(System::SharedPtr<Rectangle> rect);
    
};

} // namespace Facades
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Facades_PdfPageEditor_h_

