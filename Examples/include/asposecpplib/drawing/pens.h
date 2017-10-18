#ifndef _aspose_drawing_pens_h_
#define _aspose_drawing_pens_h_

#include "fwd.h"
#include "drawing/pen.h"

namespace System { namespace Drawing {

class Pens
{
public:
    static SharedPtr<Pen> get_Red();

private:
    static const SharedPtr<Pen> m_Red;
};

}} // namespace System::Drawing

#endif // _aspose_drawing_pens_h_
