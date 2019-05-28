#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/enum.h>
#include <cstdint>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

namespace Exif {

/// <summary>
///     Exif tags list
/// </summary>
enum class ExifProperties : uint16_t
{
    /// <summary>
    ///     The number of columns of image data, equal to the number of pixels per row.
    /// </summary>
    ImageWidth = 0x100,
    /// <summary>
    ///     The number of rows of image data.
    /// </summary>
    ImageLength = 0x101,
    /// <summary>
    ///     The number of bits per image component. In this standard each component of the image is 8 bits, so the value for this tag is 8.
    /// </summary>
    BitsPerSample = 0x102,
    /// <summary>
    ///     The compression scheme used for the image data. When a primary image is JPEG compressed, this designation is not necessary and is omitted.
    /// </summary>
    Compression = 0x103,
    /// <summary>
    ///     The pixel composition.
    /// </summary>
    PhotometricInterpretation = 0x106,
    /// <summary>
    ///     A character string giving the title of the image. It may be a comment such as "1988 company picnic" or the like.
    /// </summary>
    ImageDescription = 0x10E,
    /// <summary>
    ///     The manufacturer of the recording equipment. This is the manufacturer of the DSC, scanner, video digitizer or other equipment that generated the image. When the field is left blank, it is treated as unknown.
    /// </summary>
    Make = 0x10F,
    /// <summary>
    ///     The model name or model number of the equipment. This is the model name or number of the DSC, scanner, video digitizer or other equipment that generated the image. When the field is left blank, it is treated as unknown.
    /// </summary>
    Model = 0x110,
    /// <summary>
    ///     The image orientation viewed in terms of rows and columns.
    /// </summary>
    Orientation = 0x112,
    /// <summary>
    ///     The number of components per pixel. Since this standard applies to RGB and YCbCr images, the value set for this tag is 3.
    /// </summary>
    SamplesPerPixel = 0x115,
    /// <summary>
    ///     The number of pixels per ResolutionUnit in the ImageWidth direction. When the image resolution is unknown, 72 [dpi] is designated.
    /// </summary>
    XResolution = 0x11A,
    /// <summary>
    ///     The number of pixels per ResolutionUnit in the ImageLength direction. The same value as XResolution is designated.
    /// </summary>
    YResolution = 0x11B,
    /// <summary>
    ///     Indicates whether pixel components are recorded in a chunky or planar format. If this field does not exist, the TIFF default of 1 (chunky) is assumed.
    /// </summary>
    PlanarConfiguration = 0x11C,
    /// <summary>
    ///     The unit for measuring XResolution and YResolution. The same unit is used for both XResolution and YResolution. If the image resolution is unknown, 2 (inches) is designated.
    /// </summary>
    ResolutionUnit = 0x128,
    /// <summary>
    ///     A transfer function for the image, described in tabular style. Normally this tag is not necessary, since color space is specified in the color space information ColorSpace tag.
    /// </summary>
    TransferFunction = 0x12D,
    /// <summary>
    ///     This tag records the name and version of the software or firmware of the camera or image input device used to generate the image. The detailed format is not specified, but it is recommended that the example shown below be followed. When the field is left blank, it is treated as unknown.
    /// </summary>
    Software = 0x131,
    /// <summary>
    ///     The date and time of image creation. In Exif standard, it is the date and time the file was changed.
    /// </summary>
    DateTime = 0x132,
    /// <summary>
    ///     This tag records the name of the camera owner, photographer or image creator. The detailed format is not specified, but it is recommended that the information be written as in the example below for ease of Interoperability. When the field is left blank, it is treated as unknown. Ex.) "Camera owner, John Smith; Photographer, Michael Brown; Image creator, Ken James"
    /// </summary>
    Artist = 0x13B,
    /// <summary>
    ///     The chromaticity of the white point of the image. Normally this tag is not necessary, since color space is specified in the colorspace information ColorSpace tag.
    /// </summary>
    WhitePoint = 0x13E,
    /// <summary>
    ///     The chromaticity of the three primary colors of the image. Normally this tag is not necessary, since colorspace is specified in the colorspace information ColorSpace tag.
    /// </summary>
    PrimaryChromaticities = 0x13F,
    /// <summary>
    ///     The matrix coefficients for transformation from RGB to YCbCr image data.
    /// </summary>
    YCbCrCoefficients = 0x211,
    /// <summary>
    ///     The sampling ratio of chrominance components in relation to the luminance component.
    /// </summary>
    YCbCrSubSampling = 0x212,
    /// <summary>
    ///     The position of chrominance components in relation to the
    ///     luminance component. This field is designated only for
    ///     JPEG compressed data or uncompressed YCbCr data. The TIFF
    ///     default is 1 (centered); but when Y:Cb:Cr = 4:2:2 it is
    ///     recommended in this standard that 2 (co-sited) be used to
    ///     record data, in order to improve the image quality when viewed
    ///     on TV systems. When this field does not exist, the reader shall
    ///     assume the TIFF default. In the case of Y:Cb:Cr = 4:2:0, the
    ///     TIFF default (centered) is recommended. If the reader
    ///     does not have the capability of supporting both kinds of
    ///     YCbCrPositioning, it shall follow the TIFF default regardless
    ///     of the value in this field. It is preferable that readers "
    ///     be able to support both centered and co-sited positioning.
    /// </summary>
    YCbCrPositioning = 0x213,
    /// <summary>
    ///     The reference black point value and reference white point
    ///     value. No defaults are given in TIFF, but the values below are given as defaults here.
    ///     The color space is declared
    ///     in a color space information tag, with the default
    ///     being the value that gives the optimal image characteristics
    ///     Interoperability these conditions
    /// </summary>
    ReferenceBlackWhite = 0x214,
    /// <summary>
    ///     Copyright information. In this standard the tag is used to
    ///     indicate both the photographer and editor copyrights. It is
    ///     the copyright notice of the person or organization claiming
    ///     rights to the image. The Interoperability copyright
    ///     statement including date and rights should be written in this
    ///     field; e.g., "Copyright, John Smith, 19xx. All rights
    ///     reserved.". In this standard the field records both the
    ///     photographer and editor copyrights, with each recorded in a
    ///     separate part of the statement. When there is a clear distinction
    ///     between the photographer and editor copyrights, these are to be
    ///     written in the order of photographer followed by editor copyright,
    ///     separated by NULL (in this case since the statement also ends with
    ///     a NULL, there are two NULL codes). When only the photographer
    ///     copyright is given, it is terminated by one NULL code . When only
    ///     the editor copyright is given, the photographer copyright part
    ///     consists of one space followed by a terminating NULL code, then
    ///     the editor copyright is given. When the field is left blank, it is
    ///     treated as unknown.
    /// </summary>
    Copyright = 0x8298,
    /// <summary>
    ///     Exposure time, given in seconds.
    /// </summary>
    ExposureTime = 0x829A,
    /// <summary>
    ///     The F number.
    /// </summary>
    FNumber = 0x829D,
    /// <summary>
    ///     The class of the program used by the camera to set exposure when the picture is taken.
    /// </summary>
    ExposureProgram = 0x8822,
    /// <summary>
    ///     Indicates the spectral sensitivity of each channel of the camera used.
    /// </summary>
    SpectralSensitivity = 0x8824,
    /// <summary>
    ///     Indicates the ISO Speed and ISO Latitude of the camera or input device as specified in ISO 12232.
    /// </summary>
    PhotographicSensitivity = 0x8827,
    /// <summary>
    ///     Indicates the Opto-Electric Conversion Function (OECF) specified in ISO 14524.
    /// </summary>
    OECF = 0x8828,
    /// <summary>
    ///     The exif version.
    /// </summary>
    ExifVersion = 0x9000,
    /// <summary>
    ///     The date and time when the original image data was generated.
    /// </summary>
    DateTimeOriginal = 0x9003,
    /// <summary>
    ///     The date time digitized.
    /// </summary>
    DateTimeDigitized = 0x9004,
    /// <summary>
    ///     The components configuration.
    /// </summary>
    ComponentsConfiguration = 0x9101,
    /// <summary>
    ///     Specific to compressed data; states the compressed bits per pixel.
    /// </summary>
    CompressedBitsPerPixel = 0x9102,
    /// <summary>
    ///     The shutter speed value.
    /// </summary>
    ShutterSpeedValue = 0x9201,
    /// <summary>
    ///     The lens aperture value.
    /// </summary>
    ApertureValue = 0x9202,
    /// <summary>
    ///     The brightness value.
    /// </summary>
    BrightnessValue = 0x9203,
    /// <summary>
    ///     The exposure bias value.
    /// </summary>
    ExposureBiasValue = 0x9204,
    /// <summary>
    ///     The max aperture value.
    /// </summary>
    MaxApertureValue = 0x9205,
    /// <summary>
    ///     The distance to the subject, given in meters.
    /// </summary>
    SubjectDistance = 0x9206,
    /// <summary>
    ///     The metering mode.
    /// </summary>
    MeteringMode = 0x9207,
    /// <summary>
    ///     The kind light source.
    /// </summary>
    LightSource = 0x9208,
    /// <summary>
    ///     Indicates the status of flash when the image was shot.
    /// </summary>
    Flash = 0x9209,
    /// <summary>
    ///     The actual focal length of the lens, in mm.
    /// </summary>
    FocalLength = 0x920A,
    /// <summary>
    ///     This tag indicates the location and area of the main subject in the overall scene.
    /// </summary>
    SubjectArea = 0x9214,
    /// <summary>
    ///     A tag for manufacturers of Exif writers to record any desired information. The contents are up to the manufacturer, but this tag should not be used for any other than its intended purpose.
    /// </summary>
    MakerNote = 0x927C,
    /// <summary>
    ///     A tag for Exif users to write keywords or comments on the image besides those in ImageDescription, and without the character code limitations of the ImageDescription tag.
    /// </summary>
    UserComment = 0x9286,
    /// <summary>
    ///     A tag used to record fractions of seconds for the DateTime tag.
    /// </summary>
    SubsecTime = 0x9290,
    /// <summary>
    ///     A tag used to record fractions of seconds for the DateTimeOriginal tag.
    /// </summary>
    SubsecTimeOriginal = 0x9291,
    /// <summary>
    ///     A tag used to record fractions of seconds for the DateTimeDigitized tag.
    /// </summary>
    SubsecTimeDigitized = 0x9292,
    /// <summary>
    ///     The Flashpix format version supported by a FPXR file.
    /// </summary>
    FlashpixVersion = 0xA000,
    /// <summary>
    ///     The color space information tag (ColorSpace) is always recorded as the color space specifier.
    /// </summary>
    ColorSpace = 0xA001,
    /// <summary>
    ///     The related sound file.
    /// </summary>
    RelatedSoundFile = 0xA004,
    /// <summary>
    ///     Indicates the strobe energy at the time the image is captured, as measured in Beam Candle Power Seconds(BCPS).
    /// </summary>
    FlashEnergy = 0xA20B,
    /// <summary>
    ///     This tag records the camera or input device spatial frequency table and SFR values in the direction of image width, image height, and diagonal direction, as specified in ISO 12233.
    /// </summary>
    SpatialFrequencyResponse = 0xA20C,
    /// <summary>
    ///     Indicates the number of pixels in the image width (X) direction per FocalPlaneResolutionUnit on the camera focal plane.
    /// </summary>
    FocalPlaneXResolution = 0xA20E,
    /// <summary>
    ///     Indicates the number of pixels in the image height (Y) direction per FocalPlaneResolutionUnit on the camera focal plane.
    /// </summary>
    FocalPlaneYResolution = 0xA20F,
    /// <summary>
    ///     Indicates the unit for measuring FocalPlaneXResolution and FocalPlaneYResolution. This value is the same as the ResolutionUnit.
    /// </summary>
    FocalPlaneResolutionUnit = 0xA210,
    /// <summary>
    ///     Indicates the location of the main subject in the scene. The value of this tag represents the pixel at the center of the main subject relative to the left edge, prior to rotation processing as per the Rotation tag.
    /// </summary>
    SubjectLocation = 0xA214,
    /// <summary>
    ///     Indicates the exposure index selected on the camera or input device at the time the image is captured.
    /// </summary>
    ExposureIndex = 0xA215,
    /// <summary>
    ///     Indicates the image sensor type on the camera or input device.
    /// </summary>
    SensingMethod = 0xA217,
    /// <summary>
    ///     The file source.
    /// </summary>
    FileSource = 0xA300,
    /// <summary>
    ///     Indicates the type of scene. If a DSC recorded the image, this tag value shall always be set to 1, indicating that the image was directly photographed.
    /// </summary>
    SceneType = 0xA301,
    /// <summary>
    ///     Indicates the color filter array (CFA) geometric pattern of the image sensor when a one-chip color area sensor is used. It does not apply to all sensing methods.
    /// </summary>
    CFAPattern = 0xA302,
    /// <summary>
    ///     This tag indicates the use of special processing on image data, such as rendering geared to output. When special processing is performed, the reader is expected to disable or minimize any further processing.
    /// </summary>
    CustomRendered = 0xA401,
    /// <summary>
    ///     This tag indicates the exposure mode set when the image was shot. In auto-bracketing mode, the camera shoots a series of frames of the same scene at different exposure settings.
    /// </summary>
    ExposureMode = 0xA402,
    /// <summary>
    ///     This tag indicates the white balance mode set when the image was shot.
    /// </summary>
    WhiteBalance = 0xA403,
    /// <summary>
    ///     This tag indicates the digital zoom ratio when the image was shot. If the numerator of the recorded value is 0, this indicates that digital zoom was not used.
    /// </summary>
    DigitalZoomRatio = 0xA404,
    /// <summary>
    ///     This tag indicates the equivalent focal length assuming a 35mm film camera, in mm. A value of 0 means the focal length is unknown. Note that this tag differs from the FocalLength tag.
    /// </summary>
    FocalLengthIn35MmFilm = 0xA405,
    /// <summary>
    ///     This tag indicates the type of scene that was shot. It can also be used to record the mode in which the image was shot.
    /// </summary>
    SceneCaptureType = 0xA406,
    /// <summary>
    ///     This tag indicates the degree of overall image gain adjustment.
    /// </summary>
    GainControl = 0xA407,
    /// <summary>
    ///     This tag indicates the direction of contrast processing applied by the camera when the image was shot.
    /// </summary>
    Contrast = 0xA408,
    /// <summary>
    ///     This tag indicates the direction of saturation processing applied by the camera when the image was shot.
    /// </summary>
    Saturation = 0xA409,
    /// <summary>
    ///     This tag indicates the direction of sharpness processing applied by the camera when the image was shot
    /// </summary>
    Sharpness = 0xA40A,
    /// <summary>
    ///     This tag indicates information on the picture-taking conditions of a particular camera model. The tag is used only to indicate the picture-taking conditions in the reader.
    /// </summary>
    DeviceSettingDescription = 0xA40B,
    /// <summary>
    ///     This tag indicates the distance to the subject.
    /// </summary>
    SubjectDistanceRange = 0xA40C,
    /// <summary>
    ///     The image unique id.
    /// </summary>
    ImageUniqueID = 0xA420,
    /// <summary>
    ///     Indicates the version of GPSInfoIFD.
    /// </summary>
    GPSVersionID = 0x0,
    /// <summary>
    ///     Indicates whether the latitude is north or south latitude.
    /// </summary>
    GPSLatitudeRef = 0x1,
    /// <summary>
    ///     Indicates the latitude. The latitude is expressed as three RATIONAL values giving the degrees, minutes, and
    ///     seconds, respectively. If latitude is expressed as degrees, minutes and seconds, a typical format would be
    ///     dd/1,mm/1,ss/1. When degrees and minutes are used and, for example, fractions of minutes are given up to two
    ///     decimal places, the format would be dd/1,mmmm/100,0/1.
    /// </summary>
    GPSLatitude = 0x2,
    /// <summary>
    ///     Indicates whether the longitude is east or west longitude.
    /// </summary>
    GPSLongitudeRef = 0x3,
    /// <summary>
    ///     Indicates the longitude. The longitude is expressed as three RATIONAL values giving the degrees, minutes, and
    ///     seconds, respectively. If longitude is expressed as degrees, minutes and seconds, a typical format would be
    ///     ddd/1,mm/1,ss/1. When degrees and minutes are used and, for example, fractions of minutes are given up to two
    ///     decimal places, the format would be ddd/1,mmmm/100,0/1.
    /// </summary>
    GPSLongitude = 0x4,
    /// <summary>
    ///     Indicates the altitude used as the reference altitude. If the reference is sea level and the altitude is above sea level,
    ///     0 is given. If the altitude is below sea level, a value of 1 is given and the altitude is indicated as an absolute value in
    ///     the GPSAltitude tag.
    /// </summary>
    GPSAltitudeRef = 0x5,
    /// <summary>
    ///     Indicates the altitude based on the reference in GPSAltitudeRef. Altitude is expressed as one RATIONAL value.
    ///     The reference unit is meters.
    /// </summary>
    GPSAltitude = 0x6,
    /// <summary>
    ///     Indicates the time as UTC (Coordinated Universal Time). TimeStamp is expressed as three RATIONAL values
    ///     giving the hour, minute, and second.
    /// </summary>
    GPSTimestamp = 0x7,
    /// <summary>
    ///     Indicates the GPS satellites used for measurements. This tag can be used to describe the number of satellites,
    ///     their ID number, angle of elevation, azimuth, SNR and other information in ASCII notation. The format is not
    ///     specified. If the GPS receiver is incapable of taking measurements, value of the tag shall be set to NULL.
    /// </summary>
    GPSSatellites = 0x8,
    /// <summary>
    ///     Indicates the status of the GPS receiver when the image is recorded.
    /// </summary>
    GPSStatus = 0x9,
    /// <summary>
    ///     Indicates the GPS measurement mode. - 2- or 3- dimensional.
    /// </summary>
    GPSMeasureMode = 0xA,
    /// <summary>
    ///     Indicates the GPS DOP (data degree of precision). An HDOP value is written during two-dimensional measurement,
    ///     and PDOP during three-dimensional measurement.
    /// </summary>
    GPSDOP = 0xB,
    /// <summary>
    ///     Indicates the unit used to express the GPS receiver speed of movement. 'K' 'M' and 'N' represents kilometers per
    ///     hour, miles per hour, and knots.
    /// </summary>
    GPSSpeedRef = 0xC,
    /// <summary>
    ///     Indicates the speed of GPS receiver movement.
    /// </summary>
    GPSSpeed = 0xD,
    /// <summary>
    ///     Indicates the reference for giving the direction of GPS receiver movement. 'T' denotes true direction and 'M' is
    ///     magnetic direction.
    /// </summary>
    GPSTrackRef = 0xE,
    /// <summary>
    ///     Indicates the direction of GPS receiver movement. The range of values is from 0.00 to 359.99.
    /// </summary>
    GPSTrack = 0xF,
    /// <summary>
    ///     Indicates the reference for giving the direction of the image when it is captured. 'T' denotes true direction and 'M' is
    ///     magnetic direction.
    /// </summary>
    GPSImgDirectionRef = 0x10,
    /// <summary>
    ///     Indicates the direction of the image when it was captured. The range of values is from 0.00 to 359.99.
    /// </summary>
    GPSImgDirection = 0x11,
    /// <summary>
    ///     Indicates the geodetic survey data used by the GPS receiver.
    /// </summary>
    GPSMapDatum = 0x12,
    /// <summary>
    ///     Indicates whether the latitude of the destination point is north or south latitude. The ASCII value 'N' indicates north
    ///     latitude, and 'S' is south latitude.
    /// </summary>
    GPSDestLatitudeRef = 0x13,
    /// <summary>
    ///     Indicates the latitude of the destination point. The latitude is expressed as three RATIONAL values giving the
    ///     degrees, minutes, and seconds, respectively. If latitude is expressed as degrees, minutes and seconds, a typical
    ///     format would be dd/1,mm/1,ss/1. When degrees and minutes are used and, for example, fractions of minutes are
    ///     given up to two decimal places, the format would be dd/1,mmmm/100,0/1.
    /// </summary>
    GPSDestLatitude = 0x14,
    /// <summary>
    ///     Indicates whether the longitude of the destination point is east or west longitude. ASCII 'E' indicates east longitude,
    ///     and 'W' is west longitude.
    /// </summary>
    GPSDestLongitudeRef = 0x15,
    /// <summary>
    ///     Indicates the longitude of the destination point. The longitude is expressed as three RATIONAL values giving the
    ///     degrees, minutes, and seconds, respectively. If longitude is expressed as degrees, minutes and seconds, a typical
    ///     format would be ddd/1,mm/1,ss/1. When degrees and minutes are used and, for example, fractions of minutes are
    ///     given up to two decimal places, the format would be ddd/1,mmmm/100,0/1.
    /// </summary>
    GPSDestLongitude = 0x16,
    /// <summary>
    ///     Indicates the reference used for giving the bearing to the destination point. 'T' denotes true direction and 'M' is
    ///     magnetic direction.
    /// </summary>
    GPSDestBearingRef = 0x17,
    /// <summary>
    ///     Indicates the bearing to the destination point. The range of values is from 0.00 to 359.99.
    /// </summary>
    GPSDestBearing = 0x18,
    /// <summary>
    ///     Indicates the unit used to express the distance to the destination point. 'K', 'M' and 'N' represent kilometers, miles
    ///     and knots.
    /// </summary>
    GPSDestDistanceRef = 0x19,
    /// <summary>
    ///     Indicates the distance to the destination point.
    /// </summary>
    GPSDestDistance = 0x1A,
    /// <summary>
    ///     A character string recording the name of the method used for location finding.
    ///     The first byte indicates the character code used, and this is followed by the name
    ///     of the method.
    /// </summary>
    GPSProcessingMethod = 0x1B,
    /// <summary>
    ///     A character string recording the name of the GPS area. The first byte indicates
    ///     the character code used, and this is followed by the name of the GPS area.
    /// </summary>
    GPSAreaInformation = 0x1C,
    /// <summary>
    ///     A character string recording date and time information relative to UTC
    ///     (Coordinated Universal Time). The format is YYYY:MM:DD.
    /// </summary>
    GPSDateStamp = 0x1D,
    /// <summary>
    ///     Indicates whether differential correction is applied to the GPS receiver.
    /// </summary>
    GPSDifferential = 0x1E,
    /// <summary>
    ///     For each strip, the byte offset of that strip. It is recommended that this be selected so the number of strip bytes does not exceed 64 Kbytes.
    ///     Aux tag.
    /// </summary>
    StripOffsets = 0x111,
    /// <summary>
    ///     The offset to the start byte (SOI) of JPEG compressed thumbnail data. This is not used for primary image JPEG data.
    /// </summary>
    JPEGInterchangeFormat = 0x201,
    /// <summary>
    ///     The number of bytes of JPEG compressed thumbnail data. This is not used for primary image JPEG data. JPEG thumbnails are not divided but are recorded as a continuous JPEG bitstream from SOI to EOI. Appn and COM markers should not be recorded. Compressed thumbnails must be recorded in no more than 64 Kbytes, including all other data to be recorded in APP1.
    /// </summary>
    JPEGInterchangeFormatLength = 0x202,
    /// <summary>
    ///     A pointer to the Exif IFD. Interoperability, Exif IFD has the same structure as that of the IFD specified in TIFF. ordinarily, however, it does not contain image data as in the case of TIFF.
    /// </summary>
    ExifIfdPointer = 0x8769,
    /// <summary>
    ///     The gps ifd pointer.
    /// </summary>
    GPSIfdPointer = 0x8825,
    /// <summary>
    ///     The number of rows per strip. This is the number of rows in the image of one strip when an image is divided into strips.
    /// </summary>
    RowsPerStrip = 0x116,
    /// <summary>
    ///     The total number of bytes in each strip.
    /// </summary>
    StripByteCounts = 0x117,
    /// <summary>
    ///     Information specific to compressed data. When a compressed file is recorded, the valid width of the meaningful image shall be recorded in this tag, whether or not there is padding data or a restart marker.
    /// </summary>
    PixelXDimension = 0xA002,
    /// <summary>
    ///     Information specific to compressed data. When a compressed file is recorded, the valid height of the meaningful image shall be recorded in this tag
    /// </summary>
    PixelYDimension = 0xA003,
    /// <summary>
    /// Gamma value
    /// </summary>
    Gamma = 0xA500,
    /// <summary>
    /// Type of photographic sensitivity
    /// </summary>
    SensitivityType = 0x8830,
    /// <summary>
    /// Indicates standard output sensitivity of camera
    /// </summary>
    StandardOutputSensitivity = 0x8831,
    /// <summary>
    /// Indicates recommended exposure index
    /// </summary>
    RecommendedExposureIndex = 0x8832,
    /// <summary>
    /// Information about iso speed value as defined in ISO 12232
    /// </summary>
    ISOSpeed = 0x8833,
    /// <summary>
    /// This tag indicates ISO speed latitude yyy value as defined in ISO 12232
    /// </summary>
    ISOSpeedLatitudeYYY = 0x8834,
    /// <summary>
    /// This tag indicates ISO speed latitude zzz value as defined in ISO 12232
    /// </summary>
    ISOSpeedLatitudeZZZ = 0x8835,
    /// <summary>
    /// Contains camera owner name
    /// </summary>
    CameraOwnerName = 0xA430,
    /// <summary>
    /// Contains camera body serial number
    /// </summary>
    BodySerialNumber = 0xA431,
    /// <summary>
    /// This tag records lens manufacturer
    /// </summary>
    LensMake = 0xA433,
    /// <summary>
    /// This tag records lens`s model name and model number
    /// </summary>
    LensModel = 0xA434,
    /// <summary>
    /// This tag records the serial number of interchangable lens
    /// </summary>
    LensSerialNumber = 0xA435,
    /// <summary>
    /// This tag notes minimum focal length, maximum focal length, minimum F number in the minimum focal length and minimum F number in maximum focal length
    /// </summary>
    LensSpecification = 0xA432
};

} // namespace Exif
} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose

template<>
struct EnumMetaInfo<Aspose::Pdf::Engine::Presentation::Graphics::Exif::ExifProperties>
{
    static const ASPOSE_PDF_SHARED_API std::array<std::pair<Aspose::Pdf::Engine::Presentation::Graphics::Exif::ExifProperties, const char_t*>, 132>& values();
};



