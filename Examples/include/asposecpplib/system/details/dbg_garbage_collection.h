/// @file system/details/dbg_garbage_collection.h
#ifndef _dbg_garbage_collection_h_
#define _dbg_garbage_collection_h_

#include <system/details/shared_members_t.h>

#include <map>
#include <mutex>


namespace System
{
    class Object;
}


namespace System { namespace Details {

#ifdef __DBG_GARBAGE_COLLECTION
/// Global register of alive objects.
struct LiveObjectsStruct
{
    /// Objects that are created and not yet deleted.
    std::set<System::Object*> m_objects;
    /// Mutex to operate object register.
    std::mutex m_mutex;
    /// Register of objects that were already reported as leaked (to avoid double reporting).
    std::set<System::Object*> m_reportedLeakages;
    /// Register of objects that can't be collected.
    std::set<System::Object*> m_uncollectable;
    /// Flag that marks this structure as deleted to avoid issues with static objects destructors accessing it.
    bool deleted = false;
    /// Destructor.
    ~LiveObjectsStruct()
    {
        deleted = true;
    }
};
/// Accessor to objects register.
typedef System::static_holder<LiveObjectsStruct> LiveObjects;


/// @brief Initiates global garbage collection.
/// @param free Whether to delete collected objects.
/// @param report Whether to report collected objects, including reference loops.
/// @param generation GC generation to work with, 0 to 2.
/// @return Number of collected objects.
decltype(sizeof(int)) ASPOSECPP_SHARED_API __collectGarbage(bool free = false, bool report = true, int generation = 0);
/// Builds next available isolation island.
/// @param last Last object included in previously found isolation island or nullptr if none.
/// @param island Data structure to fill.
/// @param generation Generation of objects to collect, same as in C# System.GC.Collect().
/// @return true if isolation island was found, false if no more islands exist.
bool ASPOSECPP_SHARED_API __buildIsolationIsland(Object *&last, std::map<Object*, SharedMembersType> &island, int generation);
/// Prints information on isolation island found.
/// @param island Island to report.
void ASPOSECPP_SHARED_API __reportIsolationIsland(const std::map<Object*, SharedMembersType> &island);
/// Frees all objects on the island found.
/// @param island Island to free.
void ASPOSECPP_SHARED_API __freeIsolationIsland(const std::map<Object*, SharedMembersType> &island);
#endif


} } // namespace System::Details


#endif // _dbg_garbage_collection_h_
