/// @file system/details/dbg_tools.h
#ifndef _dbg_tools_h_
#define _dbg_tools_h_


#ifdef __DBG_TOOLS
#include <stack>
#include <set>
#include <fstream>
#include <vector>
#include <string>
#include <map>
#endif

#include "defines.h"

namespace System
{
    class Object;

#if defined(__DBG_FOR_EACH_MEMEBR)
    namespace DBG {
        struct for_each_member_visitor;
    }
#endif

#ifdef __DBG_TOOLS
namespace Details { 

/// Struct which defines a set of general purpose debug methods and data structures.
struct DbgTools
{
    // Stack trace-related features. Only work in Visual Studio.
    /// Vector of strings used by debug features
    typedef std::vector<std::wstring> v_string_t;
    /// Data structure to keep stack traces for debug purposes.
    typedef std::map<Object*, v_string_t> map_v_string_t;

    /// 'Number of shared references - stack trace' record.
    typedef struct { int shared_ref; v_string_t stack; } s_int_string_t;
    /// Stack of s_int_string_t records used for debug purposes.
    typedef std::stack<s_int_string_t> stack_s_int_string_t;

    /// Global stack trace registry.
    static map_v_string_t s_stackTraces;
    /// Depth limit for stack traces to collect.
    static uint32_t  s_stackTraceDepth;

    /// Adds stack trace information to structure passed.
    /// @param st Data structure to put stack trace information into
    /// @param depth Depth limit for stack trace to generate.
    static ASPOSECPP_SHARED_API void add_stack_trace(v_string_t &st, uint32_t depth);
    /// Adds stack trace to global registry
    static ASPOSECPP_SHARED_API void add_stack_trace(Object *object);
    /// Removes last added stack trace from global registry
    static ASPOSECPP_SHARED_API void remove_stack_trace(Object *object);

    /// Counts Object instances. Increments on Object creation and decrements on destruction.
    static volatile int s_activeInstances;
    /// Consequental object id generator.
    static volatile int s_instanceCounter;

    /// Clears existing stack traces. Enables or diables collecting stack traces.
    /// @param deep Depth of stack traces to collect. If 0, no stack trace info is collected.
    static void DBG_SetSTCollectState(uint32_t deep) { s_stackTraceDepth = deep; s_stackTraces.clear(); }
    /// Checks whether we're collecting stack trace information.
    /// @return True if global information is being collected, false otherwise.
    static bool DBG_IsCollectState() { return !!s_stackTraceDepth; }
    /// Erases stack trace information on objects with too less shared references to from global registry.
    /// @param min_references Minimal number of shared references to object to keep relevant information in global registry.
    static ASPOSECPP_SHARED_API void DBG_RemainSuperNodes(uint32_t min_references);

    /// Gets object id.
    /// @return Id of the object.
    static ASPOSECPP_SHARED_API int DBG_InstanceNo(const Object *object);
    /// Checks if object is gathering private stack trace information.
    /// @return true if object is recording statistics, false otherwise.
    static ASPOSECPP_SHARED_API bool DBG_RecPersonalSt(const Object *object);
    /// Overrides object id.
    /// @param no New id.
    static ASPOSECPP_SHARED_API void DBG_SetInstanceNo(const Object *object, int no);

    /// Adds information on current shared reference count and stack trace to object private registry.
    /// @param deep Stack trace depth limit.
    static ASPOSECPP_SHARED_API void DBG_PushStackTrace(Object *object, uint32_t deep);
    /// Removes last pushed stack trace from object private registry.
    static ASPOSECPP_SHARED_API void DBG_PopStackTrace(Object *object);
    /// Clears out object private stack trace registry.
    static ASPOSECPP_SHARED_API void DBG_ClearStackTrace(Object *object);
}; // struct DbgTools

} //namespace Details

#endif

} // namespace System


#endif // _dbg_tools_h_
