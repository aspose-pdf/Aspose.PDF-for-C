#ifndef _aspose_system_security_crypto_key_sizes_h_
#define _aspose_system_security_crypto_key_sizes_h_

#include <defines.h>
#include <system/object.h>

namespace System{
    namespace Security{
        namespace Cryptography{

            class KeySizes : public System::Object
            {
                typedef System::Security::Cryptography::KeySizes ThisType;
                typedef System::Object BaseType;

                RTTI_INFO(System::Security::Cryptography::KeySizes, ::System::BaseTypesInfo<System::Object>)

            public:
                // Summary:
                //     Initializes a new instance of the System.Security.Cryptography.KeySizes class
                //     with the specified key values.
                //
                // Parameters:
                //   minSize:
                //     The minimum valid key size.
                //
                //   maxSize:
                //     The maximum valid key size.
                //
                //   skipSize:
                //     The interval between valid key sizes.
                KeySizes(int minSize, int maxSize, int skipSize) :
                    m_maxsize(maxSize),
                    m_minsize(minSize),
                    m_skipsize(skipSize)
                {
                }

                int get_MaxSize(){ return m_maxsize; }
                int get_MinSize(){ return m_minsize; }
                int get_SkipSize(){ return m_skipsize; }

            private:
                int m_maxsize, m_minsize, m_skipsize;
            };
        }
    }
}

#endif