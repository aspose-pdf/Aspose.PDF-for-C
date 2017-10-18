#ifndef _platform_id_h_
#define _platform_id_h_

namespace System {

    enum class PlatformID {
        Win32S = 0,
        Win32Windows = 1,
        Win32NT = 2,
        WinCE = 3,
        Unix = 4,
        Xbox = 5,
        MacOSX = 6
    };
}

#endif