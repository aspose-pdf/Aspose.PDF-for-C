#ifndef _aspose_system_test_tools_ext_h_
#define _aspose_system_test_tools_ext_h_

#include "fwd.h"

#include "system/string.h"

#include <unordered_set>


namespace System {

struct TestToolsExt
{
    struct TestMethodInfo
    {
        TestMethodInfo(const char* name_space, const char* class_name, const char* method_name)
        {
            Namespace = name_space;
            ClassName = class_name;
            MethodName = method_name;
        }
        std::string Namespace;
        std::string ClassName;
        std::string MethodName;
    };

    static bool IsTest(const char* name_space, const char* class_name, const char* method_name)
    {
        for (auto& info : MethodList())
        {
            if (info.Namespace == name_space && info.ClassName == class_name && info.MethodName == method_name)
                return true;
        }
        return false;
    }

    static bool IsTest(const char* class_name, const char* method_name)
    {
        for (auto& info : MethodList())
        {
            if (info.ClassName == class_name && info.MethodName == method_name)
                return true;
        }
        return false;
    }

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

    static void RegisterTest(const char* name_space, const char* class_name, const char* method_name)
    {
        auto &list = MethodList();
        list.push_back(TestMethodInfo(name_space, class_name, method_name));
    }

private:

    static std::list<TestMethodInfo> & MethodList()
    {
        static std::list<TestMethodInfo> value;
        return value;
    }
};

} // namespace System

#endif // _aspose_system_test_tools_ext_h_
