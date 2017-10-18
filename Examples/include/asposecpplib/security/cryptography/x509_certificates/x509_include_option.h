#ifndef _x509_include_option_h_
#define _x509_include_option_h_

namespace System { namespace Security { namespace Cryptography { namespace X509Certificates{

    enum class X509IncludeOption
    {
        //     No X.509 chain information is included.
        None = 0,
        //     The entire X.509 chain is included except for the root certificate.
        ExcludeRoot = 1,
        //     Only the end certificate is included in the X.509 chain information.
        EndCertOnly = 2,
        //     The entire X.509 chain is included.
        WholeChain = 3,
    };
}}}}

#endif