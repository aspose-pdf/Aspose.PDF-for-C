#ifndef _Aspose_Pdf_Collections_HashDictionary_h_
#define _Aspose_Pdf_Collections_HashDictionary_h_
// Copyright (c) 2001-2017 Aspose Pty Ltd. All Rights Reserved.

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

    /// <summary>
    /// Initializes new HeshDictionary collection.
    /// </summary>
    AsposeHashDictionary() : System::Collections::Generic::Dictionary<TKey, TValue>() { }
    
    
    /// <summary>
    /// Initializes new HeshDictionary collection with specified count of items.
    /// </summary>
    /// <param name="count"></param>
    AsposeHashDictionary(int32_t count) : System::Collections::Generic::Dictionary<TKey, TValue>(count) { }
    
    
    /// <summary>
    /// Initializes new HeshDictionary collection with specified count of items.
    /// </summary>
    /// <param name="otherDictionary"></param>
    AsposeHashDictionary(System::SharedPtr<AsposeHashDictionary<TKey, TValue>> otherDictionary)
         : System::Collections::Generic::Dictionary<TKey, TValue>(otherDictionary) { }
    
    
    /// <summary>
    /// Repeats Hashtable behavior - return null if key not found.
    /// </summary>
    /// <param name="key">Dictionary item key</param>
    /// <returns>Dictionary item value</returns>
    TValue idx_get(TKey key)
    {
        TValue value;
        System::Collections::Generic::Dictionary<TKey, TValue>::TryGetValue(key, value);
        return value;
    }
    
    /// <summary>
    /// Repeats Hashtable behavior - return null if key not found.
    /// </summary>
    /// <param name="key">Dictionary item key</param>
    /// <returns>Dictionary item value</returns>
    void idx_set(TKey key, TValue value)
    {
        System::Collections::Generic::Dictionary<TKey, TValue>::idx_set(key, value);
    }
    
    
};

} // namespace Collections
} // namespace Pdf
} // namespace Aspose

#endif // _Aspose_Pdf_Collections_HashDictionary_h_

