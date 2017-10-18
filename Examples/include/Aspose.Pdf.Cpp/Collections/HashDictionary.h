#ifndef _Aspose_Pdf_Collections_HashDictionary_h_
#define _Aspose_Pdf_Collections_HashDictionary_h_
// Copyright (c) 2001-2014 Aspose Pty Ltd. All Rights Reserved.

#include <system/constraints.h>
#include <system/collections/dictionary.h>
#include <cstdint>

namespace Aspose {

namespace Pdf {

namespace Collections {

template<typename TKey, typename TValue>
class AsposeHashDictionary : public System::Collections::Generic::Dictionary<TKey, TValue>
{
    typedef AsposeHashDictionary<TKey, TValue> ThisType;
    typedef System::Collections::Generic::Dictionary<TKey, TValue> BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_TEMPLATE_CLASS(ThisType, ThisTypeBaseTypesInfo);
    
public:

    AsposeHashDictionary() : System::Collections::Generic::Dictionary<TKey, TValue>() { }
    
    
    AsposeHashDictionary(int32_t count) : System::Collections::Generic::Dictionary<TKey, TValue>(count) { }
    
    
    AsposeHashDictionary(System::SharedPtr<AsposeHashDictionary<TKey, TValue>> otherDictionary)
         : System::Collections::Generic::Dictionary<TKey, TValue>(otherDictionary) { }
    
    
    TValue idx_get(TKey key)
    {
        TValue value;
        System::Collections::Generic::Dictionary<TKey, TValue>::TryGetValue(key, value);
        return value;
    }
    
    void idx_set(TKey key, TValue value)
    {
        System::Collections::Generic::Dictionary<TKey, TValue>::idx_set(key, value);
    }
    
    
protected:

    
    #if defined(__DBG_FOR_EACH_MEMEBR)
    protected:
    void DBG_for_each_member(System::DBG::for_each_member_visitor &visitor) const override
    {
        System::Collections::Generic::Dictionary<TKey, TValue>::DBG_for_each_member(visitor);
        
        visitor.add_self(this);
    }
    const char* DBG_class_name() const override { return "AsposeHashDictionary"; }
    bool DBG_unknown_type() const override { return false; }
    #endif
    
    
};

} // namespace Collections
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Collections_HashDictionary_h_

