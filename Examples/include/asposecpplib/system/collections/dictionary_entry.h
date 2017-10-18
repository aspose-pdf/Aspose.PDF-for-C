#ifndef _dictionary_entry_h_
#define _dictionary_entry_h_

//#include "system/object.h"
//#include "system/collections/keyvalue_pair.h"

namespace System {
namespace Collections {

    //DictionaryEntry is absolutely useless structure
    //according to base conception of C# to Cpp porting.
    //It should not be implemented in order to show parts of source code which should be refactored.
    //Template class KeyValuePair<TKey, TValue> should be used instead in source code.

    //typedef System::Collections::Generic::KeyValuePair<System::Object::ptr, System::Object::ptr> DictionaryEntry;

    //or

    //using namespace System;
    //using namespace System::Collections::Generic;

    //struct DictionaryEntry : public Object, public KeyValuePair<Object::ptr, Object::ptr>
    //{
    //public:
    //  DictionaryEntry() {}
    //  DictionaryEntry(const Object::ptr& key, const Object::ptr& value) : KeyValuePair<Object::ptr, Object::ptr>(key, value) {}
    //};

} // namespace Collections
} // namespace System

#endif // _dictionary_entry_h_
