/// @file drawing/imaging/emf_plus_record_type.h
#ifndef _aspose_drawing_imaging_emf_plus_record_type_h_
#define _aspose_drawing_imaging_emf_plus_record_type_h_

namespace System { namespace Drawing { namespace Imaging {
    
/// Represents the methods that can be used with a metafile to read and write graphic commands.
enum class EmfPlusRecordType {
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfHeader = 1,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfMin = 1,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyBezier = 2,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolygon = 3,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyline = 4,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyBezierTo = 5,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyLineTo = 6,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyPolyline = 7,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyPolygon = 8,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetWindowExtEx = 9,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetWindowOrgEx = 10,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetViewportExtEx = 11,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetViewportOrgEx = 12,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetBrushOrgEx = 13,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfEof = 14,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetPixelV = 15,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetMapperFlags = 16,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetMapMode = 17,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetBkMode = 18,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetPolyFillMode = 19,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetROP2 = 20,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetStretchBltMode = 21,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetTextAlign = 22,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetColorAdjustment = 23,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetTextColor = 24,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetBkColor = 25,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfOffsetClipRgn = 26,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfMoveToEx = 27,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetMetaRgn = 28,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExcludeClipRect = 29,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfIntersectClipRect = 30,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfScaleViewportExtEx = 31,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfScaleWindowExtEx = 32,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSaveDC = 33,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfRestoreDC = 34,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetWorldTransform = 35,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfModifyWorldTransform = 36,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSelectObject = 37,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreatePen = 38,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreateBrushIndirect = 39,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfDeleteObject = 40,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfAngleArc = 41,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfEllipse = 42,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfRectangle = 43,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfRoundRect = 44,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfRoundArc = 45,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfChord = 46,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPie = 47,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSelectPalette = 48,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreatePalette = 49,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetPaletteEntries = 50,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfResizePalette = 51,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfRealizePalette = 52,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtFloodFill = 53,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfLineTo = 54,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfArcTo = 55,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyDraw = 56,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetArcDirection = 57,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetMiterLimit = 58,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfBeginPath = 59,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfEndPath = 60,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCloseFigure = 61,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfFillPath = 62,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfStrokeAndFillPath = 63,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfStrokePath = 64,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfFlattenPath = 65,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfWidenPath = 66,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSelectClipPath = 67,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfAbortPath = 68,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfReserved069 = 69,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfGdiComment = 70,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfFillRgn = 71,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfFrameRgn = 72,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfInvertRgn = 73,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPaintRgn = 74,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtSelectClipRgn = 75,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfBitBlt = 76,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfStretchBlt = 77,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfMaskBlt = 78,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPlgBlt = 79,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetDIBitsToDevice = 80,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfStretchDIBits = 81,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtCreateFontIndirect = 82,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtTextOutA = 83,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtTextOutW = 84,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyBezier16 = 85,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolygon16 = 86,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyline16 = 87,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyBezierTo16 = 88,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolylineTo16 = 89,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyPolyline16 = 90,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyPolygon16 = 91,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyDraw16 = 92,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreateMonoBrush = 93,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreateDibPatternBrushPt = 94,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtCreatePen = 95,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyTextOutA = 96,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPolyTextOutW = 97,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetIcmMode = 98,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreateColorSpace = 99,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetColorSpace = 100,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfDeleteColorSpace = 101,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfGlsRecord = 102,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfGlsBoundedRecord = 103,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPixelFormat = 104,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfDrawEscape = 105,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfExtEscape = 106,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfStartDoc = 107,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSmallTextOut = 108,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfForceUfiMapping = 109,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfNamedEscpae = 110,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfColorCorrectPalette = 111,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetIcmProfileA = 112,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetIcmProfileW = 113,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfAlphaBlend = 114,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetLayout = 115,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfTransparentBlt = 116,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfReserved117 = 117,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfGradientFill = 118,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetLinkedUfis = 119,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfSetTextJustification = 120,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfColorMatchToTargetW = 121,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfCreateColorSpaceW = 122,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfMax = 122,
    /// Refer to "Enhanced-Format Metafiles" in the GDI section of the MSDN Library.
    EmfPlusRecordBase = 16384,
    /// Invalid data.
    Invalid = 16384,
    /// Identifies a record that is the EMF+ header.
    Header = 16385,
    /// The minimum value for this enumeration.
    Min = 16385,
    /// Identifies a record that marks the last EMF+ record of a metafile.
    EndOfFile = 16386,
    /// Refer to System::Drawing::Graphics::AddMetafileComment(System::Byte[]).
    Comment = 16387,
    /// Refer to System::Drawing::Graphics::GetHdc.
    GetDC = 16388,
    /// Marks the start of a multiple-format section.
    MultiFormatStart = 16389,
    /// Marks a multiple-format section.
    MultiFormatSection = 16390,
    /// Marks the end of a multiple-format section.
    MultiFormatEnd = 16391,
    /// Marks an object.
    Object = 16392,
    /// Refer to System::Drawing::Graphics::Clear(System::Drawing::Color).
    Clear = 16393,
    /// Refer to Overload:System::Drawing::Graphics::FillRectangles methods.
    FillRects = 16394,
    /// Refer to Overload:System::Drawing::Graphics::DrawRectangles methods.
    DrawRects = 16395,
    /// Refer to Overload:System::Drawing::Graphics::FillPolygon methods.
    FillPolygon = 16396,
    /// Refer to Overload:System::Drawing::Graphics::DrawLines methods.
    DrawLines = 16397,
    /// Refer to Overload:System::Drawing::Graphics::FillEllipse methods.
    FillEllipse = 16398,
    /// Refer to Overload:System::Drawing::Graphics::DrawEllipse methods.
    DrawEllipse = 16399,
    /// Refer to Overload:System::Drawing::Graphics::FillPie methods.
    FillPie = 16400,
    /// Refer to Overload:System::Drawing::Graphics::DrawPie methods.
    DrawPie = 16401,
    /// Refer to Overload:System::Drawing::Graphics::DrawArc methods.
    DrawArc = 16402,
    /// Refer to System::Drawing::Graphics::FillRegion(System::Drawing::Brush,System::Drawing::Region).
    FillRegion = 16403,
    /// Refer to System::Drawing::Graphics::FillPath(System::Drawing::Brush,System::Drawing::Drawing2D::GraphicsPath).
    FillPath = 16404,
    /// Refer to System::Drawing::Graphics::DrawPath(System::Drawing::Pen,System::Drawing::Drawing2D::GraphicsPath).
    DrawPath = 16405,
    /// Refer to Overload:System::Drawing::Graphics::FillClosedCurve methods.
    FillClosedCurve = 16406,
    /// Refer to Overload:System::Drawing::Graphics::DrawClosedCurve methods.
    DrawClosedCurve = 16407,
    /// Refer to Overload:System::Drawing::Graphics::DrawCurve methods.
    DrawCurve = 16408,
    /// Refer to Overload:System::Drawing::Graphics::DrawBeziers methods.
    DrawBeziers = 16409,
    /// Refer to Overload:System::Drawing::Graphics::DrawImage methods.
    DrawImage = 16410,
    /// Refer to Overload:System::Drawing::Graphics::DrawImage methods.
    DrawImagePoints = 16411,
    /// Refer to Overload:System::Drawing::Graphics::DrawString methods.
    DrawString = 16412,
    /// Refer to System::Drawing::Graphics::RenderingOrigin.
    SetRenderingOrigin = 16413,
    /// Refer to System::Drawing::Graphics::SmoothingMode.
    SetAntiAliasMode = 16414,
    /// Refer to System::Drawing::Graphics::TextRenderingHint.
    SetTextRenderingHint = 16415,
    /// Refer to System::Drawing::Graphics::TextContrast.
    SetTextContrast = 16416,
    /// Refer to System::Drawing::Graphics::InterpolationMode.
    SetInterpolationMode = 16417,
    /// Refer to System::Drawing::Graphics::PixelOffsetMode.
    SetPixelOffsetMode = 16418,
    /// Refer to System::Drawing::Graphics::CompositingMode.
    SetCompositingMode = 16419,
    /// Refer to System::Drawing::Graphics::CompositingQuality.
    SetCompositingQuality = 16420,
    /// Refer to System::Drawing::Graphics::Save.
    Save = 16421,
    /// Refer to System::Drawing::Graphics::Restore(System::Drawing::Drawing2D::GraphicsState).
    Restore = 16422,
    /// Refer to System::Drawing::Graphics::BeginContainer methods.
    BeginContainer = 16423,
    /// Refer to System::Drawing::Graphics::BeginContainer methods.
    BeginContainerNoParams = 16424,
    /// Refer to System::Drawing::Graphics::EndContainer(System::Drawing::Drawing2D::GraphicsContainer).
    EndContainer = 16425,
    /// Refer to Overload:System::Drawing::Graphics::TransformPoints methods.
    SetWorldTransform = 16426,
    /// Refer to System::Drawing::Graphics::ResetTransform.
    ResetWorldTransform = 16427,
    /// Refer to Overload:System::Drawing::Graphics::MultiplyTransform methods.
    MultiplyWorldTransform = 16428,
    /// Refer to Overload:System::Drawing::Graphics::TransformPoints methods.
    TranslateWorldTransform = 16429,
    /// Refer to Overload:System::Drawing::Graphics::ScaleTransform methods.
    ScaleWorldTransform = 16430,
    /// Refer to Overload:System::Drawing::Graphics::RotateTransform methods.
    RotateWorldTransform = 16431,
    /// Refer to Overload:System::Drawing::Graphics::TransformPoints methods.
    SetPageTransform = 16432,
    /// Refer to System::Drawing::Graphics::ResetClip.
    ResetClip = 16433,
    /// Refer to Overload:System::Drawing::Graphics::SetClip methods.
    SetClipRect = 16434,
    /// Refer to Overload:System::Drawing::Graphics::SetClip methods.
    SetClipPath = 16435,
    /// Refer to Overload:System::Drawing::Graphics::SetClip methods.
    SetClipRegion = 16436,
    /// Refer to Overload:System::Drawing::Graphics::TranslateClip methods.
    OffsetClip = 16437,
    /// Specifies a character string, a location, and formatting information.
    DrawDriverString = 16438,
    /// The maximum value for this enumeration.
    Max = 16438,
    /// Used internally.
    Total = 16439,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfRecordBase = 65536,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSaveDC = 65566,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfRealizePalette = 65589,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetPalEntries = 65591,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreatePalette = 65783,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetBkMode = 65794,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetMapMode = 65795,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetROP2 = 65796,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetRelAbs = 65797,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetPolyFillMode = 65798,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetStretchBltMode = 65799,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetTextCharExtra = 65800,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfRestoreDC = 65831,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfInvertRegion = 65834,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPaintRegion = 65835,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSelectClipRegion = 65836,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSelectObject = 65837,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetTextAlign = 65838,
    /// Increases or decreases the size of a logical palette based on the specified value.
    WmfResizePalette = 65849,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfDibCreatePatternBrush = 65858,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetLayout = 65865,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfDeleteObject = 66032,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreatePatternBrush = 66041,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetBkColor = 66049,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetTextColor = 66057,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetTextJustification = 66058,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetWindowOrg = 66059,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetWindowExt = 66060,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetViewportOrg = 66061,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetViewportExt = 66062,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfOffsetWindowOrg = 66063,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfOffsetViewportOrg = 66065,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfLineTo = 66067,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfMoveTo = 66068,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfOffsetCilpRgn = 66080,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfFillRegion = 66088,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetMapperFlags = 66097,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSelectPalette = 66100,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreatePenIndirect = 66298,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreateFontIndirect = 66299,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreateBrushIndirect = 66300,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPolygon = 66340,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPolyline = 66341,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfScaleWindowExt = 66576,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfScaleViewportExt = 66578,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfExcludeClipRect = 66581,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfIntersectClipRect = 66582,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfEllipse = 66584,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfFloodFill = 66585,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfRectangle = 66587,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetPixel = 66591,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfFrameRegion = 66601,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfAnimatePalette = 66614,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfTextOut = 66849,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPolyPolygon = 66872,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfExtFloodFill = 66888,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfRoundRect = 67100,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPatBlt = 67101,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfEscape = 67110,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfCreateRegion = 67327,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfArc = 67607,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfPie = 67610,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfChord = 67632,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfBitBlt = 67874,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfDibBitBlt = 67904,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfExtTextOut = 68146,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfStretchBlt = 68387,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfDibStretchBlt = 68417,
    /// Refer to "Windows-Format Metafiles" in the GDI section of the MSDN Library.
    WmfSetDibToDev = 68915,
    /// Copies the color data for a rectangle of pixels in a DIB to the specified destination
    /// rectangle.
    WmfStretchDib = 69443
};

}}}

#endif
