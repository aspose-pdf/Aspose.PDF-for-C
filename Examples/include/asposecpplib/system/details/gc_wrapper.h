#ifndef _details_gc_wrapper_h_
#define _details_gc_wrapper_h_


namespace System
{
namespace Details
{

class GCWrapper
{
public:
    GCWrapper(bool free = false, bool report = true, int generation = 0);
    ~GCWrapper();
private:
    const bool m_free;
    const bool m_report;
    const int m_generation;
};

} //namespace Details
} //namespace System


#endif //_details_gc_wrapper_h_
