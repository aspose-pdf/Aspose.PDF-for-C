/// @file security/cryptography/key_sizes.h
#ifndef _aspose_system_security_crypto_key_sizes_h_
#define _aspose_system_security_crypto_key_sizes_h_

#include <defines.h>
#include <system/object.h>

namespace System{
namespace Security{
namespace Cryptography{

/// Set of key sizes accepted by symmetric algorithms.
/// Objects of this class should only be allocated using System::MakeObject() function.
/// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
/// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
class ASPOSECPP_SHARED_CLASS KeySizes : public System::Object
{
    /// This type.
    typedef System::Security::Cryptography::KeySizes ThisType;
    /// Base type.
    typedef System::Object BaseType;
    /// RTTI information.
    RTTI_INFO(System::Security::Cryptography::KeySizes, ::System::BaseTypesInfo<System::Object>)

public:
    /// Constructor.
    /// @param minSize Minimum valid key size, bits.
    /// @param maxSize Maximal valid key size, bits.
    /// @param skipSize Valid key size step, bits.
    KeySizes(int minSize, int maxSize, int skipSize) :
        m_maxsize(maxSize),
        m_minsize(minSize),
        m_skipsize(skipSize)
    {
    }

    /// Gets maximal valid key size.
    /// @return Maximal valid key size, bits.
    int get_MaxSize(){ return m_maxsize; }
    /// Gets minimal valid key size.
    /// @return Minimal valid key size, bits.
    int get_MinSize(){ return m_minsize; }
    /// Gets valid key size step.
    /// @return Valid key size step, bits.
    int get_SkipSize(){ return m_skipsize; }

private:
    /// Maximal valid key size, bits.
    int m_maxsize;
    /// Minimal valid key size, bits.
    int m_minsize;
    /// Valid key size step, bits.
    int m_skipsize;
};

}
}
}

#endif
