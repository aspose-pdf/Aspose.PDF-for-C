/// @file system/test_tools/test_tools_ext.h
#ifndef _aspose_system_test_tools_ext_h_
#define _aspose_system_test_tools_ext_h_

#include "fwd.h"

#include "system/string.h"

#include <unordered_set>


namespace System {

/// Common functions to be used by testing translation.
struct TestToolsExt
{
    /// Information on test method.
    struct TestMethodInfo
    {
        /// Constructor.
        /// @param name_space Namespace name.
        /// @param class_name Class name.
        /// @param method_name Method name.
        TestMethodInfo(const char* name_space, const char* class_name, const char* method_name)
        {
            Namespace = name_space;
            ClassName = class_name;
            MethodName = method_name;
        }
        /// Namespace name.
        std::string Namespace;
        /// Class name.
        std::string ClassName;
        /// Method name.
        std::string MethodName;
    };

    /// Checks if test method exists.
    /// @param name_space Namespace to look for.
    /// @param class_name Class to look for.
    /// @param method_name Method to look for.
    /// @return True if test method is registered, false otherwise.
    static bool IsTest(const char* name_space, const char* class_name, const char* method_name)
    {
        for (auto& info : MethodList())
        {
            if (info.Namespace == name_space && info.ClassName == class_name && info.MethodName == method_name)
                return true;
        }
        return false;
    }
    /// Checks if test method exists.
    /// @param class_name Class to look for.
    /// @param method_name Method to look for.
    /// @return True if test method is registered, false otherwise.
    static bool IsTest(const char* class_name, const char* method_name)
    {
        for (auto& info : MethodList())
        {
            if (info.ClassName == class_name && info.MethodName == method_name)
                return true;
        }
        return false;
    }

    /// Retrieves namespace of specified test.
    /// @param class_name Class to look for.
    /// @param method_name Method to look for.
    /// @param name_space Variable to put namespace name into, if found.
    /// @return True if test method is found, false otherwise.
    static bool GetNamespace(const char* class_name, const char* method_name, std::string& name_space)
    {
        for (auto& info : MethodList())
        {
            if (info.ClassName == class_name && info.MethodName == method_name)
            {
                name_space = info.Namespace;
                return true;
            }
        }
        return false;
    }

    /// Adds test information to registry.
    /// @param name_space Namespace name.
    /// @param class_name Class name.
    /// @param method_name Method name.
    static void RegisterTest(const char* name_space, const char* class_name, const char* method_name)
    {
        auto &list = MethodList();
        list.push_back(TestMethodInfo(name_space, class_name, method_name));
    }

private:
    /// Singleton of registered test methods.
    /// @return Singleton reference.
    static std::list<TestMethodInfo> & MethodList()
    {
        static std::list<TestMethodInfo> value;
        return value;
    }
};

} // namespace System

#endif // _aspose_system_test_tools_ext_h_
