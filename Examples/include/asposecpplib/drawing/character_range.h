#ifndef _aspose_system_drawing_character_range_h_
#define _aspose_system_drawing_character_range_h_

#include "fwd.h"
#include "defines.h"

namespace System { namespace Drawing {

class CharacterRange
{
public:
    CharacterRange(int32_t first, int32_t length);
    CharacterRange();

    int32_t get_First() const;
    void set_First(int32_t first);

    int32_t get_Length() const;
    void set_Length(int32_t length);

    bool operator==(const CharacterRange&) const;
    bool operator!=(const CharacterRange&) const;
    
private:
    int32_t m_first;
    int32_t m_length;
};
}}


#endif
