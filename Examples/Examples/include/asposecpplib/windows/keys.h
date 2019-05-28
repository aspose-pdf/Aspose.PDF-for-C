/// @file windows/keys.h
#ifndef _aspose_system_windows_forms_keys_h_
#define _aspose_system_windows_forms_keys_h_

namespace System { namespace Windows { namespace Forms {
    
/// Known keys.
enum class Keys
{
    /// Modifiers mask.
    Modifiers = -65536,
    /// No key.
    None = 0,
    /// Left mouse button.
    LButton = 1,
    /// Right mouse button.
    RButton = 2,
    /// Cancel key.
    Cancel = 3,
    /// Medium mouse button.
    MButton = 4,
    /// Extra mouse button 1.
    XButton1 = 5,
    /// Extra mouse button 2.
    XButton2 = 6,
    /// Back key.
    Back = 8,
    /// Tab key.
    Tab = 9,
    /// Line feed key.
    LineFeed = 10,
    /// Clear key.
    Clear = 12,
    /// Return key.
    Return = 13,
    /// Enter key.
    Enter = 13,
    /// Shift key.
    ShiftKey = 16,
    /// Control key.
    ControlKey = 17,
    /// Menu key.
    Menu = 18,
    /// Pause key.
    Pause = 19,
    /// Capital key.
    Capital = 20,
    /// Caps Lock key.
    CapsLock = 20,
    /// Kana mode key.
    KanaMode = 21,
    /// Hanguel mode key.
    HanguelMode = 21,
    /// Hangul mode key.
    HangulMode = 21,
    /// Junja mode key.
    JunjaMode = 23,
    /// Final mode key.
    FinalMode = 24,
    /// Hanja mode key.
    HanjaMode = 25,
    /// Kanji mode key.
    KanjiMode = 25,
    /// Escape key.
    Escape = 27,
    /// IME convert key.
    IMEConvert = 28,
    /// IME non-convert key.
    IMENonconvert = 29,
    /// IME accept key.
    IMEAccept = 30,
    /// IME accept key - variant with a typo.
    IMEAceept = 30,
    /// IME mode change key.
    IMEModeChange = 31,
    /// Space key.
    Space = 32,
    /// Prior key.
    Prior = 33,
    /// Page up key.
    PageUp = 33,
    /// Next key.
    Next = 34,
    /// Page down key.
    PageDown = 34,
    /// End key.
    End = 35,
    /// Home key.
    Home = 36,
    /// Left key.
    Left = 37,
    /// Up key.
    Up = 38,
    /// Right key.
    Right = 39,
    /// Down key.
    Down = 40,
    /// Select key.
    Select = 41,
    /// Print key.
    Print = 42,
    /// Execute key.
    Execute = 43,
    /// Snapshot key.
    Snapshot = 44,
    /// Print screen key.
    PrintScreen = 44,
    /// Insert key.
    Insert = 45,
    /// Delete key.
    Delete = 46,
    /// Help key.
    Help = 47,
    /// 0 key.
    D0 = 48,
    /// 1 key.
    D1 = 49,
    /// 2 key.
    D2 = 50,
    /// 3 key.
    D3 = 51,
    /// 4 key.
    D4 = 52,
    /// 5 key.
    D5 = 53,
    /// 6 key.
    D6 = 54,
    /// 7 key.
    D7 = 55,
    /// 8 key.
    D8 = 56,
    /// 9 key.
    D9 = 57,
    /// A key.
    A = 65,
    /// B key.
    B = 66,
    /// C key.
    C = 67,
    /// D key.
    D = 68,
    /// E key.
    E = 69,
    /// F key.
    F = 70,
    /// G key.
    G = 71,
    /// H key.
    H = 72,
    /// I key.
    I = 73,
    /// J key.
    J = 74,
    /// K key.
    K = 75,
    /// L key.
    L = 76,
    /// M key.
    M = 77,
    /// N key.
    N = 78,
    /// O key.
    O = 79,
    /// P key.
    P = 80,
    /// Q key.
    Q = 81,
    /// R key.
    R = 82,
    /// S key.
    S = 83,
    /// T key.
    T = 84,
    /// U key.
    U = 85,
    /// V key.
    V = 86,
    /// W key.
    W = 87,
    /// X key.
    X = 88,
    /// Y key.
    Y = 89,
    /// Z key.
    Z = 90,
    /// Left Windows key.
    LWin = 91,
    /// Right Windows key.
    RWin = 92,
    /// Applications key.
    Apps = 93,
    /// Sleep key.
    Sleep = 95,
    /// Numpad 0 key.
    NumPad0 = 96,
    /// Numpad 1 key.
    NumPad1 = 97,
    /// Numpad 2 key.
    NumPad2 = 98,
    /// Numpad 3 key.
    NumPad3 = 99,
    /// Numpad 4 key.
    NumPad4 = 100,
    /// Numpad 5 key.
    NumPad5 = 101,
    /// Numpad 6 key.
    NumPad6 = 102,
    /// Numpad 7 key.
    NumPad7 = 103,
    /// Numpad 8 key.
    NumPad8 = 104,
    /// Numpad 9 key.
    NumPad9 = 105,
    /// Multiply key.
    Multiply = 106,
    /// Add key.
    Add = 107,
    /// Separator key.
    Separator = 108,
    /// Substract key.
    Subtract = 109,
    /// Decimal point key.
    Decimal = 110,
    /// Divide key.
    Divide = 111,
    /// F1 key.
    F1 = 112,
    /// F2 key.
    F2 = 113,
    /// F3 key.
    F3 = 114,
    /// F4 key.
    F4 = 115,
    /// F5 key.
    F5 = 116,
    /// F6 key.
    F6 = 117,
    /// F7 key.
    F7 = 118,
    /// F8 key.
    F8 = 119,
    /// F9 key.
    F9 = 120,
    /// F10 key.
    F10 = 121,
    /// F11 key.
    F11 = 122,
    /// F12 key.
    F12 = 123,
    /// F13 key.
    F13 = 124,
    /// F14 key.
    F14 = 125,
    /// F15 key.
    F15 = 126,
    /// F16 key.
    F16 = 127,
    /// F17 key.
    F17 = 128,
    /// F18 key.
    F18 = 129,
    /// F19 key.
    F19 = 130,
    /// F20 key.
    F20 = 131,
    /// F21 key.
    F21 = 132,
    /// F22 key.
    F22 = 133,
    /// F23 key.
    F23 = 134,
    /// F24 key.
    F24 = 135,
    /// Numeric lock key.
    NumLock = 144,
    /// Scroll key.
    Scroll = 145,
    /// Left shift key.
    LShiftKey = 160,
    /// Right shift key.
    RShiftKey = 161,
    /// Left control key.
    LControlKey = 162,
    /// Right control key.
    RControlKey = 163,
    /// Left menu key.
    LMenu = 164,
    /// Right menu key.
    RMenu = 165,
    /// Browser back key.
    BrowserBack = 166,
    /// Browser forward key.
    BrowserForward = 167,
    /// Browser refresh key.
    BrowserRefresh = 168,
    /// Browser stop key.
    BrowserStop = 169,
    /// Browser search key.
    BrowserSearch = 170,
    /// Browser favorites key.
    BrowserFavorites = 171,
    /// Browser home key.
    BrowserHome = 172,
    /// Volume mute key.
    VolumeMute = 173,
    /// Volume down key.
    VolumeDown = 174,
    /// Volume up key.
    VolumeUp = 175,
    /// Media next track key.
    MediaNextTrack = 176,
    /// Media previous track key.
    MediaPreviousTrack = 177,
    /// Media stop key.
    MediaStop = 178,
    /// Media play/pause key.
    MediaPlayPause = 179,
    /// Launch mail key.
    LaunchMail = 180,
    /// Select media key.
    SelectMedia = 181,
    /// Launch application key 1.
    LaunchApplication1 = 182,
    /// Launch application key 2.
    LaunchApplication2 = 183,
    /// OEM semicolon key.
    OemSemicolon = 186,
    /// OEM key 1.
    Oem1 = 186,
    /// OEM plus key.
    Oemplus = 187,
    /// OEM comma key.
    Oemcomma = 188,
    /// OEM minus key.
    OemMinus = 189,
    /// OEM period key.
    OemPeriod = 190,
    /// OEM question key.
    OemQuestion = 191,
    /// OEM key 2.
    Oem2 = 191,
    /// OEM tilde key.
    Oemtilde = 192,
    /// OEM key 3.
    Oem3 = 192,
    /// OEM open brackets key.
    OemOpenBrackets = 219,
    /// OEM key 4.
    Oem4 = 219,
    /// OEM pipe key.
    OemPipe = 220,
    /// OEM key 5.
    Oem5 = 220,
    /// OEM close brackets key.
    OemCloseBrackets = 221,
    /// OEM key 6.
    Oem6 = 221,
    /// OEM quotes key.
    OemQuotes = 222,
    /// OEM key 7.
    Oem7 = 222,
    /// OEM key 8.
    Oem8 = 223,
    /// OEM backslash key.
    OemBackslash = 226,
    /// OEM key 102.
    Oem102 = 226,
    /// Process key.
    ProcessKey = 229,
    /// Packet key.
    Packet = 231,
    /// Attention key.
    Attn = 246,
    /// CRSEL key.
    Crsel = 247,
    /// EXSEL key.
    Exsel = 248,
    /// EOF erase key.
    EraseEof = 249,
    /// Play key.
    Play = 250,
    /// Zoom key.
    Zoom = 251,
    /// No name key.
    NoName = 252,
    /// Pal key.
    Pa1 = 253,
    /// OEM clear key.
    OemClear = 254,
    /// Key code mask.
    KeyCode = 65535,
    /// Shift key code.
    Shift = 65536,
    /// Control key code.
    Control = 131072,
    /// Alt key code.
    Alt = 262144
};

} } }

#endif
