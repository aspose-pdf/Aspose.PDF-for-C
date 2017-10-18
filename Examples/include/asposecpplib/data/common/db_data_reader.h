#ifndef _aspose_data_common_db_data_reader_h_
#define _aspose_data_common_db_data_reader_h_

#include <system/object.h>

namespace System { namespace Data { namespace Common {

class DbDataReader : public System::Object
{
    RTTI_INFO(System::Data::Common::DbDataReader, ::System::BaseTypesInfo<System::Object>)

public:

    typedef SharedPtr<DbDataReader> Ptr;

    virtual SharedPtr<Object> idx_get(String name) = 0;
    virtual SharedPtr<Object> idx_get(int ordinal) = 0;

    virtual bool Close() = 0;
    virtual bool Read() = 0;
};

} } } // namespace System::Data::Common

#endif // _aspose_data_common_db_data_reader_h_