/// @file drawing/printing/paper_kind.h
#pragma once

#include <system/enum.h>

namespace System { namespace Drawing { namespace Printing {
    /// Specifies the standard paper sizes.
    enum class PaperKind
    {
        /// The paper size is defined by the user.
        Custom = 0,
        /// Letter paper (8.5 in. by 11 in.).
        Letter = 1,
        /// Letter small paper (8.5 in. by 11 in.).
        LetterSmall = 2,
        /// Tabloid paper (11 in. by 17 in.).
        Tabloid = 3,
        /// Ledger paper (17 in. by 11 in.).
        Ledger = 4,
        /// Legal paper (8.5 in. by 14 in.).
        Legal = 5,
        /// Statement paper (5.5 in. by 8.5 in.).
        Statement = 6,
        /// Executive paper (7.25 in. by 10.5 in.).
        Executive = 7,
        /// A3 paper (297 mm by 420 mm).
        A3 = 8,
        /// A4 paper (210 mm by 297 mm).
        A4 = 9,
        /// A4 small paper (210 mm by 297 mm).
        A4Small = 10, // 0x0000000A
        /// A5 paper (148 mm by 210 mm).
        A5 = 11, // 0x0000000B
        /// B4 paper (250 mm by 353 mm).
        B4 = 12, // 0x0000000C
        /// B5 paper (176 mm by 250 mm).
        B5 = 13, // 0x0000000D
        /// Folio paper (8.5 in. by 13 in.).
        Folio = 14, // 0x0000000E
        /// Quarto paper (215 mm by 275 mm).
        Quarto = 15, // 0x0000000F
        /// Standard paper (10 in. by 14 in.).
        Standard10x14 = 16, // 0x00000010
        /// Standard paper (11 in. by 17 in.).
        Standard11x17 = 17, // 0x00000011
        /// Note paper (8.5 in. by 11 in.).
        Note = 18, // 0x00000012
        /// #9 envelope (3.875 in. by 8.875 in.).
        Number9Envelope = 19, // 0x00000013
        /// #10 envelope (4.125 in. by 9.5 in.).
        Number10Envelope = 20, // 0x00000014
        /// #11 envelope (4.5 in. by 10.375 in.).
        Number11Envelope = 21, // 0x00000015
        /// #12 envelope (4.75 in. by 11 in.).
        Number12Envelope = 22, // 0x00000016
        /// #14 envelope (5 in. by 11.5 in.).
        Number14Envelope = 23, // 0x00000017
        /// C paper (17 in. by 22 in.).
        CSheet = 24, // 0x00000018
        /// D paper (22 in. by 34 in.).
        DSheet = 25, // 0x00000019
        /// E paper (34 in. by 44 in.).
        ESheet = 26, // 0x0000001A
        /// DL envelope (110 mm by 220 mm).
        DLEnvelope = 27, // 0x0000001B
        /// C5 envelope (162 mm by 229 mm).
        C5Envelope = 28, // 0x0000001C
        /// C3 envelope (324 mm by 458 mm).
        C3Envelope = 29, // 0x0000001D
        /// C4 envelope (229 mm by 324 mm).
        C4Envelope = 30, // 0x0000001E
        /// C6 envelope (114 mm by 162 mm).
        C6Envelope = 31, // 0x0000001F
        /// C65 envelope (114 mm by 229 mm).
        C65Envelope = 32, // 0x00000020
        /// B4 envelope (250 mm by 353 mm).
        B4Envelope = 33, // 0x00000021
        /// B5 envelope (176 mm by 250 mm).
        B5Envelope = 34, // 0x00000022
        /// B6 envelope (176 mm by 125 mm).
        B6Envelope = 35, // 0x00000023
        /// Italy envelope (110 mm by 230 mm).
        ItalyEnvelope = 36, // 0x00000024
        /// Monarch envelope (3.875 in. by 7.5 in.).
        MonarchEnvelope = 37, // 0x00000025
        /// 6 3/4 envelope (3.625 in. by 6.5 in.).
        PersonalEnvelope = 38, // 0x00000026
        /// US standard fanfold (14.875 in. by 11 in.).
        USStandardFanfold = 39, // 0x00000027
        /// German standard fanfold (8.5 in. by 12 in.).
        GermanStandardFanfold = 40, // 0x00000028
        /// German legal fanfold (8.5 in. by 13 in.).
        GermanLegalFanfold = 41, // 0x00000029
        /// ISO B4 (250 mm by 353 mm).
        IsoB4 = 42, // 0x0000002A
        /// Japanese postcard (100 mm by 148 mm).
        JapanesePostcard = 43, // 0x0000002B
        /// Standard paper (9 in. by 11 in.).
        Standard9x11 = 44, // 0x0000002C
        /// Standard paper (10 in. by 11 in.).
        Standard10x11 = 45, // 0x0000002D
        /// Standard paper (15 in. by 11 in.).
        Standard15x11 = 46, // 0x0000002E
        /// Invitation envelope (220 mm by 220 mm).
        InviteEnvelope = 47, // 0x0000002F
        /// Letter extra paper (9.275 in. by 12 in.). This value is specific to the PostScript driver and is used only by Linotronic printers in order to conserve paper.
        LetterExtra = 50, // 0x00000032
        /// Legal extra paper (9.275 in. by 15 in.). This value is specific to the PostScript driver and is used only by Linotronic printers in order to conserve paper.
        LegalExtra = 51, // 0x00000033
        /// Tabloid extra paper (11.69 in. by 18 in.). This value is specific to the PostScript driver and is used only by Linotronic printers in order to conserve paper.
        TabloidExtra = 52, // 0x00000034
        /// A4 extra paper (236 mm by 322 mm). This value is specific to the PostScript driver and is used only by Linotronic printers to help save paper.
        A4Extra = 53, // 0x00000035
        /// Letter transverse paper (8.275 in. by 11 in.).
        LetterTransverse = 54, // 0x00000036
        /// A4 transverse paper (210 mm by 297 mm).
        A4Transverse = 55, // 0x00000037
        /// Letter extra transverse paper (9.275 in. by 12 in.).
        LetterExtraTransverse = 56, // 0x00000038
        /// SuperA/SuperA/A4 paper (227 mm by 356 mm).
        APlus = 57, // 0x00000039
        /// SuperB/SuperB/A3 paper (305 mm by 487 mm).
        BPlus = 58, // 0x0000003A
        /// Letter plus paper (8.5 in. by 12.69 in.).
        LetterPlus = 59, // 0x0000003B
        /// A4 plus paper (210 mm by 330 mm).
        A4Plus = 60, // 0x0000003C
        /// A5 transverse paper (148 mm by 210 mm).
        A5Transverse = 61, // 0x0000003D
        /// JIS B5 transverse paper (182 mm by 257 mm).
        B5Transverse = 62, // 0x0000003E
        /// A3 extra paper (322 mm by 445 mm).
        A3Extra = 63, // 0x0000003F
        /// A5 extra paper (174 mm by 235 mm).
        A5Extra = 64, // 0x00000040
        /// ISO B5 extra paper (201 mm by 276 mm).
        B5Extra = 65, // 0x00000041
        /// A2 paper (420 mm by 594 mm).
        A2 = 66, // 0x00000042
        /// A3 transverse paper (297 mm by 420 mm).
        A3Transverse = 67, // 0x00000043
        /// A3 extra transverse paper (322 mm by 445 mm).
        A3ExtraTransverse = 68, // 0x00000044
        /// Japanese double postcard (200 mm by 148 mm). Requires Windows 98, Windows NT 4.0, or later.
        JapaneseDoublePostcard = 69, // 0x00000045
        /// A6 paper (105 mm by 148 mm). Requires Windows 98, Windows NT 4.0, or later.
        A6 = 70, // 0x00000046
        /// Japanese Kaku #2 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeKakuNumber2 = 71, // 0x00000047
        /// Japanese Kaku #3 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeKakuNumber3 = 72, // 0x00000048
        /// Japanese Chou #3 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeChouNumber3 = 73, // 0x00000049
        /// Japanese Chou #4 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeChouNumber4 = 74, // 0x0000004A
        /// Letter rotated paper (11 in. by 8.5 in.).
        LetterRotated = 75, // 0x0000004B
        /// A3 rotated paper (420 mm by 297 mm).
        A3Rotated = 76, // 0x0000004C
        /// A4 rotated paper (297 mm by 210 mm). Requires Windows 98, Windows NT 4.0, or later.
        A4Rotated = 77, // 0x0000004D
        /// A5 rotated paper (210 mm by 148 mm). Requires Windows 98, Windows NT 4.0, or later.
        A5Rotated = 78, // 0x0000004E
        /// JIS B4 rotated paper (364 mm by 257 mm). Requires Windows 98, Windows NT 4.0, or later.
        B4JisRotated = 79, // 0x0000004F
        /// JIS B5 rotated paper (257 mm by 182 mm). Requires Windows 98, Windows NT 4.0, or later.
        B5JisRotated = 80, // 0x00000050
        /// Japanese rotated postcard (148 mm by 100 mm). Requires Windows 98, Windows NT 4.0, or later.
        JapanesePostcardRotated = 81, // 0x00000051
        /// Japanese rotated double postcard (148 mm by 200 mm). Requires Windows 98, Windows NT 4.0, or later.
        JapaneseDoublePostcardRotated = 82, // 0x00000052
        /// A6 rotated paper (148 mm by 105 mm). Requires Windows 98, Windows NT 4.0, or later.
        A6Rotated = 83, // 0x00000053
        /// Japanese rotated Kaku #2 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeKakuNumber2Rotated = 84, // 0x00000054
        /// Japanese rotated Kaku #3 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeKakuNumber3Rotated = 85, // 0x00000055
        /// Japanese rotated Chou #3 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeChouNumber3Rotated = 86, // 0x00000056
        /// Japanese rotated Chou #4 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeChouNumber4Rotated = 87, // 0x00000057
        /// JIS B6 paper (128 mm by 182 mm). Requires Windows 98, Windows NT 4.0, or later.
        B6Jis = 88, // 0x00000058
        /// JIS B6 rotated paper (182 mm by 128 mm). Requires Windows 98, Windows NT 4.0, or later.
        B6JisRotated = 89, // 0x00000059
        /// Standard paper (12 in. by 11 in.). Requires Windows 98, Windows NT 4.0, or later.
        Standard12x11 = 90, // 0x0000005A
        /// Japanese You #4 envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeYouNumber4 = 91, // 0x0000005B
        /// Japanese You #4 rotated envelope. Requires Windows 98, Windows NT 4.0, or later.
        JapaneseEnvelopeYouNumber4Rotated = 92, // 0x0000005C
        ///  16K paper (146 mm by 215 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc16K = 93, // 0x0000005D
        ///  32K paper (97 mm by 151 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc32K = 94, // 0x0000005E
        ///  32K big paper (97 mm by 151 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc32KBig = 95, // 0x0000005F
        ///  #1 envelope (102 mm by 165 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber1 = 96, // 0x00000060
        ///  #2 envelope (102 mm by 176 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber2 = 97, // 0x00000061
        ///  #3 envelope (125 mm by 176 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber3 = 98, // 0x00000062
        ///  #4 envelope (110 mm by 208 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber4 = 99, // 0x00000063
        ///  #5 envelope (110 mm by 220 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber5 = 100, // 0x00000064
        ///  #6 envelope (120 mm by 230 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber6 = 101, // 0x00000065
        ///  #7 envelope (160 mm by 230 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber7 = 102, // 0x00000066
        ///  #8 envelope (120 mm by 309 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber8 = 103, // 0x00000067
        ///  #9 envelope (229 mm by 324 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber9 = 104, // 0x00000068
        ///  #10 envelope (324 mm by 458 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber10 = 105, // 0x00000069
        ///  16K rotated paper (146 mm by 215 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc16KRotated = 106, // 0x0000006A
        ///  32K rotated paper (97 mm by 151 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc32KRotated = 107, // 0x0000006B
        ///  32K big rotated paper (97 mm by 151 mm). Requires Windows 98, Windows NT 4.0, or later.
        Prc32KBigRotated = 108, // 0x0000006C
        ///  #1 rotated envelope (165 mm by 102 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber1Rotated = 109, // 0x0000006D
        ///  #2 rotated envelope (176 mm by 102 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber2Rotated = 110, // 0x0000006E
        ///  #3 rotated envelope (176 mm by 125 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber3Rotated = 111, // 0x0000006F
        ///  #4 rotated envelope (208 mm by 110 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber4Rotated = 112, // 0x00000070
        ///  Envelope #5 rotated envelope (220 mm by 110 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber5Rotated = 113, // 0x00000071
        ///  #6 rotated envelope (230 mm by 120 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber6Rotated = 114, // 0x00000072
        ///  #7 rotated envelope (230 mm by 160 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber7Rotated = 115, // 0x00000073
        ///  #8 rotated envelope (309 mm by 120 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber8Rotated = 116, // 0x00000074
        ///  #9 rotated envelope (324 mm by 229 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber9Rotated = 117, // 0x00000075
        ///  #10 rotated envelope (458 mm by 324 mm). Requires Windows 98, Windows NT 4.0, or later.
        PrcEnvelopeNumber10Rotated = 118, // 0x00000076
    };

}}}

/// Type meta information. Specialization for System::Drawing::Printing::PaperKind.
template<>
struct EnumMetaInfo<System::Drawing::Printing::PaperKind>
{
    /// Returns a array of pairs that associate System::Xml::XmlNodeType enum's constants with their
    /// string representations.
    static const std::array<std::pair<System::Drawing::Printing::PaperKind, const char_t*>, 117>& values()
    {
        using namespace System::Drawing::Printing;
        static std::array<std::pair<PaperKind, const char_t*>, 117> enum_values
        {{
            {PaperKind::Custom, u"Custom"},
            {PaperKind::Letter, u"Letter"},
            {PaperKind::LetterSmall, u"LetterSmall"},
            {PaperKind::Tabloid, u"Tabloid"},
            {PaperKind::Ledger, u"Ledger"},
            {PaperKind::Legal, u"Legal"},
            {PaperKind::Statement, u"Statement"},
            {PaperKind::Executive, u"Executive"},
            {PaperKind::A3, u"A3"},
            {PaperKind::A4, u"A4"},
            {PaperKind::A4Small, u"A4Small"},
            {PaperKind::A5, u"A5"},
            {PaperKind::B4, u"B4"},
            {PaperKind::B5, u"B5"},
            {PaperKind::Folio, u"Folio"},
            {PaperKind::Quarto, u"Quarto"},
            {PaperKind::Standard10x14, u"Standard10x14"},
            {PaperKind::Standard11x17, u"Standard11x17"},
            {PaperKind::Note, u"Note"},
            {PaperKind::Number9Envelope, u"Number9Envelope"},
            {PaperKind::Number10Envelope, u"Number10Envelope"},
            {PaperKind::Number11Envelope, u"Number11Envelope"},
            {PaperKind::Number12Envelope, u"Number12Envelope"},
            {PaperKind::Number14Envelope, u"Number14Envelope"},
            {PaperKind::CSheet, u"CSheet"},
            {PaperKind::DSheet, u"DSheet"},
            {PaperKind::ESheet, u"ESheet"},
            {PaperKind::DLEnvelope, u"DLEnvelope"},
            {PaperKind::C5Envelope, u"C5Envelope"},
            {PaperKind::C3Envelope, u"C3Envelope"},
            {PaperKind::C4Envelope, u"C4Envelope"},
            {PaperKind::C6Envelope, u"C6Envelope"},
            {PaperKind::C65Envelope, u"C65Envelope"},
            {PaperKind::B4Envelope, u"B4Envelope"},
            {PaperKind::B5Envelope, u"B5Envelope"},
            {PaperKind::B6Envelope, u"B6Envelope"},
            {PaperKind::ItalyEnvelope, u"ItalyEnvelope"},
            {PaperKind::MonarchEnvelope, u"MonarchEnvelope"},
            {PaperKind::PersonalEnvelope, u"PersonalEnvelope"},
            {PaperKind::USStandardFanfold, u"USStandardFanfold"},
            {PaperKind::GermanStandardFanfold, u"GermanStandardFanfold"},
            {PaperKind::GermanLegalFanfold, u"GermanLegalFanfold"},
            {PaperKind::IsoB4, u"IsoB4"},
            {PaperKind::JapanesePostcard, u"JapanesePostcard"},
            {PaperKind::Standard9x11, u"Standard9x11"},
            {PaperKind::Standard10x11, u"Standard10x11"},
            {PaperKind::Standard15x11, u"Standard15x11"},
            {PaperKind::InviteEnvelope, u"InviteEnvelope"},
            {PaperKind::LetterExtra, u"LetterExtra"},
            {PaperKind::LegalExtra, u"LegalExtra"},
            {PaperKind::TabloidExtra, u"TabloidExtra"},
            {PaperKind::A4Extra, u"A4Extra"},
            {PaperKind::LetterTransverse, u"LetterTransverse"},
            {PaperKind::A4Transverse, u"A4Transverse"},
            {PaperKind::LetterExtraTransverse, u"LetterExtraTransverse"},
            {PaperKind::APlus, u"APlus"},
            {PaperKind::BPlus, u"BPlus"},
            {PaperKind::LetterPlus, u"LetterPlus"},
            {PaperKind::A4Plus, u"A4Plus"},
            {PaperKind::A5Transverse, u"A5Transverse"},
            {PaperKind::B5Transverse, u"B5Transverse"},
            {PaperKind::A3Extra, u"A3Extra"},
            {PaperKind::A5Extra, u"A5Extra"},
            {PaperKind::B5Extra, u"B5Extra"},
            {PaperKind::A2, u"A2"},
            {PaperKind::A3Transverse, u"A3Transverse"},
            {PaperKind::A3ExtraTransverse, u"A3ExtraTransverse"},
            {PaperKind::JapaneseDoublePostcard, u"JapaneseDoublePostcard"},
            {PaperKind::A6, u"A6"},
            {PaperKind::JapaneseEnvelopeKakuNumber2, u"JapaneseEnvelopeKakuNumber2"},
            {PaperKind::JapaneseEnvelopeKakuNumber3, u"JapaneseEnvelopeKakuNumber3"},
            {PaperKind::JapaneseEnvelopeChouNumber3, u"JapaneseEnvelopeChouNumber3"},
            {PaperKind::JapaneseEnvelopeChouNumber4, u"JapaneseEnvelopeChouNumber4"},
            {PaperKind::LetterRotated, u"LetterRotated"},
            {PaperKind::A3Rotated, u"A3Rotated"},
            {PaperKind::A4Rotated, u"A4Rotated"},
            {PaperKind::A5Rotated, u"A5Rotated"},
            {PaperKind::B4JisRotated, u"B4JisRotated"},
            {PaperKind::B5JisRotated, u"B5JisRotated"},
            {PaperKind::JapanesePostcardRotated, u"JapanesePostcardRotated"},
            {PaperKind::JapaneseDoublePostcardRotated, u"JapaneseDoublePostcardRotated"},
            {PaperKind::A6Rotated, u"A6Rotated"},
            {PaperKind::JapaneseEnvelopeKakuNumber2Rotated, u"JapaneseEnvelopeKakuNumber2Rotated"},
            {PaperKind::JapaneseEnvelopeKakuNumber3Rotated, u"JapaneseEnvelopeKakuNumber3Rotated"},
            {PaperKind::JapaneseEnvelopeChouNumber3Rotated, u"JapaneseEnvelopeChouNumber3Rotated"},
            {PaperKind::JapaneseEnvelopeChouNumber4Rotated, u"JapaneseEnvelopeChouNumber4Rotated"},
            {PaperKind::B6Jis, u"B6Jis"},
            {PaperKind::B6JisRotated, u"B6JisRotated"},
            {PaperKind::Standard12x11, u"Standard12x11"},
            {PaperKind::JapaneseEnvelopeYouNumber4, u"JapaneseEnvelopeYouNumber4"},
            {PaperKind::JapaneseEnvelopeYouNumber4Rotated, u"JapaneseEnvelopeYouNumber4Rotated"},
            {PaperKind::Prc16K, u"Prc16K"},
            {PaperKind::Prc32K, u"Prc32K"},
            {PaperKind::Prc32KBig, u"Prc32KBig"},
            {PaperKind::PrcEnvelopeNumber1, u"PrcEnvelopeNumber1"},
            {PaperKind::PrcEnvelopeNumber2, u"PrcEnvelopeNumber2"},
            {PaperKind::PrcEnvelopeNumber3, u"PrcEnvelopeNumber3"},
            {PaperKind::PrcEnvelopeNumber4, u"PrcEnvelopeNumber4"},
            {PaperKind::PrcEnvelopeNumber5, u"PrcEnvelopeNumber5"},
            {PaperKind::PrcEnvelopeNumber6, u"PrcEnvelopeNumber6"},
            {PaperKind::PrcEnvelopeNumber7, u"PrcEnvelopeNumber7"},
            {PaperKind::PrcEnvelopeNumber8, u"PrcEnvelopeNumber8"},
            {PaperKind::PrcEnvelopeNumber9, u"PrcEnvelopeNumber9"},
            {PaperKind::PrcEnvelopeNumber10, u"PrcEnvelopeNumber10"},
            {PaperKind::Prc16KRotated, u"Prc16KRotated"},
            {PaperKind::Prc32KRotated, u"Prc32KRotated"},
            {PaperKind::Prc32KBigRotated, u"Prc32KBigRotated"},
            {PaperKind::PrcEnvelopeNumber1Rotated, u"PrcEnvelopeNumber1Rotated"},
            {PaperKind::PrcEnvelopeNumber2Rotated, u"PrcEnvelopeNumber2Rotated"},
            {PaperKind::PrcEnvelopeNumber3Rotated, u"PrcEnvelopeNumber3Rotated"},
            {PaperKind::PrcEnvelopeNumber4Rotated, u"PrcEnvelopeNumber4Rotated"},
            {PaperKind::PrcEnvelopeNumber5Rotated, u"PrcEnvelopeNumber5Rotated"},
            {PaperKind::PrcEnvelopeNumber6Rotated, u"PrcEnvelopeNumber6Rotated"},
            {PaperKind::PrcEnvelopeNumber7Rotated, u"PrcEnvelopeNumber7Rotated"},
            {PaperKind::PrcEnvelopeNumber8Rotated, u"PrcEnvelopeNumber8Rotated"},
            {PaperKind::PrcEnvelopeNumber9Rotated, u"PrcEnvelopeNumber9Rotated"},
            {PaperKind::PrcEnvelopeNumber10Rotated, u"PrcEnvelopeNumber10Rotated"}
        }};

        return enum_values;
    }
};
