#ifndef _brush_h_
#define _brush_h_

#include "system/object.h"


ASPOSECPP_3RD_PARTY_CLASS(SkPaint);


namespace System { namespace Drawing {

class Brush : public Object
{

public:
    virtual SharedPtr<Brush> Clone() = 0;
    void Dispose() { };

protected:
    friend class Graphics;
    friend class Pen;
    virtual void Apply(SkPaint &paint) = 0;

};

}}


#endif