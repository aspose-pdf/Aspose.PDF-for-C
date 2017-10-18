#ifndef _Aspose_Pdf_CommonData_PageContent_Operators_Commands_CommandParameter_h_
#define _Aspose_Pdf_CommonData_PageContent_Operators_Commands_CommandParameter_h_



#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object_ext.h>
#include <system/object.h>
#include <system/exceptions.h>
#include <system/event.h>
#include <system/convert.h>
#include <system/array.h>
#include <cstdint>

#include "CommonData/PageContent/Operators/Commands/ICommandParameter.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameter; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace Data { class IPdfPrimitive; } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameterChangedEventArgs; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace CommonData { namespace PageContent { namespace Operators { namespace Commands { class CommandParameterChangingEventArgs; } } } } } } }
namespace Aspose { namespace Pdf { namespace Engine { namespace IO { namespace Stream { class IPdfStreamWriter; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace CommonData {

namespace PageContent {

namespace Operators {

namespace Commands {

enum class KindOfCommandParameterData
{
    kofcpd_IPdfPrimitive,
    kofcpd_byte,
    kofcpd_byte_array,
    kofcpd_string,
    kofcpd_double,
    kofcpd_int,
    kofcpd_float
};

class ASPOSE_PDF_SHARED_API CommandParameter FINAL : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommandParameter
{
    typedef CommandParameter ThisType;
    typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::ICommandParameter BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    class ASPOSE_PDF_SHARED_API DataHolderBase : public System::Object
    {
        typedef DataHolderBase ThisType;
        typedef System::Object BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
        FRIEND_FUNCTION_System_MakeObject;
        friend class Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter;
        
    public:
    
        KindOfCommandParameterData kindOf;
        
        virtual void Reset();
        virtual bool IsNull();
        virtual System::String ToString();
        
    protected:
    
        DataHolderBase(KindOfCommandParameterData _kindOf);
        
        System::Object::shared_members_type GetSharedMembers() override;
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "DataHolderBase"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    template<typename T>
    class ABSTRACT DataHolder : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolderBase
    {
        typedef DataHolder<T> ThisType;
        typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolderBase BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
    public:
    
        T _defaultValue;
        T _value;
        
        DataHolder(T val, KindOfCommandParameterData kindOf)
             : Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolderBase(kindOf)
            , _defaultValue(T()), _value(T())
        {
            _defaultValue = val;
            _value = val;
        }
        
        virtual void Reset()
        {
            _value = _defaultValue;
        }
        
        virtual System::String ToString()
        {
            throw System::NotImplementedException(L"Should be implemented in derived class");
        }
        
        virtual bool IsNull()
        {
            throw System::NotImplementedException(L"Should be implemented in derived class");
        }
        
        
    protected:
    
        System::Object::shared_members_type GetSharedMembers() override
        {
            auto result = Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolderBase::GetSharedMembers();
            
            result.Add("Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder::_defaultValue", this->_defaultValue);
            result.Add("Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder::_value", this->_value);
            
            return std::move(result);
        }
        
        
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
        {
            Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolderBase::DBG_for_each_member(visitor);
            
            visitor.add_self(this);
            visitor.add_template_member(this, &_defaultValue, "_defaultValue");
            visitor.add_template_member(this, &_value, "_value");
        }
        const char* DBG_class_name() const override { return "DataHolder"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    class ASPOSE_PDF_SHARED_API StringDataHolder : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<System::String>
    {
        typedef StringDataHolder ThisType;
        typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<System::String> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_DECL();
        
    public:
    
        StringDataHolder(System::String val, KindOfCommandParameterData kindOf);
        
        virtual System::String ToString();
        virtual bool IsNull();
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
        const char* DBG_class_name() const override { return "StringDataHolder"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    template<typename T>
    class ScalarDataHolder : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>
    {
        typedef ScalarDataHolder<T> ThisType;
        typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
    public:
    
        ScalarDataHolder(T val, KindOfCommandParameterData kindOf)
             : Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>(val, kindOf) { }
        
        
        virtual System::String ToString()
        {
            return System::Convert::ToString(CommandParameter::DataHolder<T>::_value);
        }
        
        virtual bool IsNull()
        {
            return false;
        }
        
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
        {
            Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>::DBG_for_each_member(visitor);
            
            visitor.add_self(this);
        }
        const char* DBG_class_name() const override { return "ScalarDataHolder"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    template<typename T>
    class ObjectDataHolder : public Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>
    {
        typedef ObjectDataHolder<T> ThisType;
        typedef Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T> BaseType;
        
        typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
        RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
        
    public:
    
        ObjectDataHolder(T val, KindOfCommandParameterData kindOf)
             : Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>(val, kindOf) { }
        
        
        virtual System::String ToString()
        {
            return System::ObjectExt::ToString(CommandParameter::DataHolder<T>::_value);
        }
        
        virtual bool IsNull()
        {
            return CommandParameter::DataHolder<T>::_value == nullptr;
        }
        
        
    protected:
    
        
        #if defined(__DBG_FOR_EACH_MEMEBR)
        protected:
        void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
        {
            Aspose::Pdf::Engine::CommonData::PageContent::Operators::Commands::CommandParameter::DataHolder<T>::DBG_for_each_member(visitor);
            
            visitor.add_self(this);
        }
        const char* DBG_class_name() const override { return "ObjectDataHolder"; }
        bool DBG_unknown_type() const override { return false; }
        #endif
        
        
    };
    
    
public:

    System::String get_Name();
    
    CommandParameter(System::String name, System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> value);
    CommandParameter(System::String name, System::ArrayPtr<uint8_t> value);
    CommandParameter(System::String name, System::String value);
    CommandParameter(System::String name, uint8_t value);
    CommandParameter(System::String name, double value);
    CommandParameter(System::String name, int32_t value);
    CommandParameter(System::String name, float value);
    
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<CommandParameterChangedEventArgs>)> CommandParameterChanged;
    System::Event<void(System::SharedPtr<System::Object>, System::SharedPtr<CommandParameterChangingEventArgs>)> CommandParameterChanging;
    
    void Reset();
    void Serialize(System::SharedPtr<Aspose::Pdf::Engine::IO::Stream::IPdfStreamWriter> writer);
    System::SharedPtr<Aspose::Pdf::Engine::Data::IPdfPrimitive> get_IPdfPrimitive();
    bool is_IPdfPrimitive();
    uint8_t get_byte();
    bool is_byte();
    System::ArrayPtr<uint8_t> get_byte_array();
    bool is_byte_array();
    System::String get_string();
    bool is_string();
    double get_double();
    bool is_double();
    int32_t get_int();
    bool is_int();
    float get_float();
    bool is_float();
    bool is_null();
    System::String valueToString();
    int32_t ToInt();
    float ToFloat();
    double ToDouble();
    virtual System::String ToString();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override;
    const char* DBG_class_name() const override { return "CommandParameter"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
private:

    System::SharedPtr<CommandParameter::DataHolderBase> _data;
    System::String _name;
    
};

} // namespace Commands
} // namespace Operators
} // namespace PageContent
} // namespace CommonData
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_CommonData_PageContent_Operators_Commands_CommandParameter_h_

