/// @file drawing/image.h
#ifndef _aspose_system_drawing_image_h_
#define _aspose_system_drawing_image_h_

#include "system/object.h"
#include "system/nullable.h"
#include "drawing/imaging/image_attributes.h"
#include "drawing/imaging/image_format.h"
#include "drawing/imaging/image_codec_info.h"
#include "drawing/imaging/encoder_parameters.h"
#include "drawing/imaging/encoder_value.h"
#include "drawing/imaging/pixel_format.h"
#include "drawing/imaging/color_palette.h"
#include "drawing/imaging/frame_dimension.h"
#include "drawing/rotate_flip_type.h"
#include "drawing/graphics_unit.h"
#include "drawing/size.h"
#include "drawing/rectangle_f.h"
#include "system/io/stream.h"
#include "system/string.h"
#include "imaging/image_flags.h"

// skia headers and forwards
#if defined(ASPOSECPP_SHARED_EXPORTS) || defined(ASPOSECPP_SKIA_EXTERNAL_USAGE)
#include <core/SkImage.h>
#include <core/SkData.h>
#include <codec/SkEncodedFormat.h>
#endif

#define ASPOSE_DUMMY_META_FILE

/// Forward declaration of SkBitmap class.
ASPOSECPP_3RD_PARTY_CLASS(SkBitmap);
/// Forward declaration of SkCanvas class.
ASPOSECPP_3RD_PARTY_CLASS(SkCanvas);
/// Forward declaration of SkData class.
ASPOSECPP_3RD_PARTY_CLASS(SkData);
/// Forward declaration of SkMatrix class.
ASPOSECPP_3RD_PARTY_CLASS(SkMatrix);
/// Forward declaration of SkImageEncoder class.
ASPOSECPP_3RD_PARTY_CLASS(SkImageEncoder);
/// Forward declaration of SkRWStream class.
ASPOSECPP_3RD_PARTY_CLASS(SkRWStream);
/// Static checks of SkEncodedFormat enum.
ASPOSECPP_3RD_PARTY_STRUCT(SkImageInfo);
/// Forward declaration of SkRect struct.
ASPOSECPP_3RD_PARTY_STRUCT(SkRect);
/// Forward declaration of SkFilterQuality enum.

#if defined(ASPOSECPP_SHARED_EXPORTS) || !defined(ASPOSECPP_SKIA_EXTERNAL_USAGE)
ASPOSECPP_3RD_PARTY_ENUM(SkEncodedFormat);
/// Forward declaration of SkImageInfo struct.
ASPOSECPP_3RD_PARTY_ENUM(SkFilterQuality);
/// Forward declaration of SkBlendMode enum.
ASPOSECPP_3RD_PARTY_ENUM_CLASS(SkBlendMode);
#endif

template <typename T> class sk_sp;

namespace System { namespace Drawing {

    class Bitmap;
    class TextureBrush;
    /// A base class for System::Drawing::Bitmap and System::Drawing::Metafile classes providing basic functionality.
    /// Objects of this class should only be allocated using System::MakeObject() function.
    /// Never create instance of this type on stack or using operator new, as it will result in runtime errors and/or assertion faults.
    /// Always wrap this class into System::SmartPtr pointer and use this pointer to pass it to functions as argument.
    class ASPOSECPP_SHARED_CLASS Image: virtual public Object
    {
        RTTI_INFO(System::Drawing::Image, ::System::BaseTypesInfo<System::Object>)

    public:
        /// Saves the image represented by the current object to the specified file in PNG format.
        /// @param filename The name of the file to save the image to
        ASPOSECPP_SHARED_API void Save(const String & filename);
        /// Saves the image represented by the current object to the specified file in the specified format.
        /// @param filename The name of the file to save the image to
        /// @param format A format to save the image in
        ASPOSECPP_SHARED_API void Save(const String & filename, const Imaging::ImageFormatPtr& format);
        /// Saves the image represented by the current object to the specified stream in the specified format.
        /// @param stream A stream to save the image to
        /// @param format A format to save the image in
        ASPOSECPP_SHARED_API void Save(const SharedPtr<System::IO::Stream>& stream, const Imaging::ImageFormatPtr& format);
        /// Saves the image represented by the current object to the specified file using the specified encoder and encoder parameters.
        /// @param filename The name of the file to save the image to
        /// @param encoder The encoder to use
        /// @param encoder_params The parameters of the encoder to use
        ASPOSECPP_SHARED_API void Save(const String & filename, const Imaging::ImageCodecInfoPtr& encoder, const Imaging::EncoderParametersPtr& encoder_params);
        /// Saves the image represented by the current object to the specified stream using the specified encoder and encoder parameters.
        /// @param stream A stream to save the image to
        /// @param encoder The encoder to use
        /// @param encoder_params The parameters of the encoder to used
        ASPOSECPP_SHARED_API void Save(const SharedPtr<System::IO::Stream>& stream, const Imaging::ImageCodecInfoPtr& encoder, const Imaging::EncoderParametersPtr& encoder_params);
        /// Adds a frame to the file or stream specified in a previous call to the Save() method. 
        /// @param encoder_params The parameters of the encoder to use
        ASPOSECPP_SHARED_API void SaveAdd(const Imaging::EncoderParametersPtr& encoder_params);
        /// Adds a frame to the file or stream specified in a previous call to the Save() method. 
        /// @param image An Image object that contains the frame to be added
        /// @param encoder_params The parameters of the encoder to use
        ASPOSECPP_SHARED_API void SaveAdd(const SharedPtr<Image>& image, const Imaging::EncoderParametersPtr& encoder_params);

        /// Creates a copy of the current object.
        /// @returns A copy of the current object.
        virtual ASPOSECPP_SHARED_API SharedPtr<Image> Clone() = 0;

        /// Rotate image to multiple of 90 degrees and flip.
        /// @param rotate_flip_type Type of rotation and flip.
        virtual ASPOSECPP_SHARED_API void RotateFlip(RotateFlipType rotate_flip_type);

        /// Returns the image bounds in the specified measurement units.
        /// @param page_unit Measurement unit
        /// @returns An instance of RectangleF class that represents the image bound in the specified 
        /// measurement units
        ASPOSECPP_SHARED_API RectangleF GetBounds(GraphicsUnit & page_unit);

        /// Returns the width of the image in pixels.
        virtual ASPOSECPP_SHARED_API int get_Width() const = 0;
        /// Returns the height of the image in pixels.
        virtual ASPOSECPP_SHARED_API int get_Height() const = 0;
        /// Returns a bit-wise combination of ImageFlags enum values that represents the attributes
        /// of the image.
        virtual Imaging::ImageFlags get_Flags() const
        {
            throw System::NotImplementedException(ASPOSE_CURRENT_FUNCTION);
        }
        /// Returns a Size object that represents the width and height of the image
        /// in pixels.
        ASPOSECPP_SHARED_API Size get_Size() const;

        /// Returns the file format of the image represented by the current object.
        virtual ASPOSECPP_SHARED_API Imaging::ImageFormatPtr get_RawFormat() const = 0;
        /// Returns the pixel format of the image represented by the current object.
        virtual ASPOSECPP_SHARED_API Imaging::PixelFormat get_PixelFormat() const = 0;

        /// Returns the horizontal resolution of the image represented by the current object in pixels per inch.
        ASPOSECPP_SHARED_API float get_HorizontalResolution() const;
        /// Returns the vertical resolution of the image represented by the current object in pixels per inch.
        ASPOSECPP_SHARED_API float get_VerticalResolution() const;

        /// Returns the color palette used by the image represented by the current object.
        virtual ASPOSECPP_SHARED_API Imaging::ColorPalettePtr get_Palette() const;
        /// Sets the color palette used by the image represented by the current object.
        /// @param value The value to set
        virtual ASPOSECPP_SHARED_API void set_Palette(Imaging::ColorPalettePtr value);

        /// Returns whether the original format is a multi-image.
        virtual ASPOSECPP_SHARED_API bool IsMultiImage() const;

        /// Returns an array of GUIDs that represent the dimensions of frames within the image
        /// represented by the current object.
        ASPOSECPP_SHARED_API ArrayPtr<Guid> get_FrameDimensionsList() const;

        /// Returns the number of frames of the specified frame dimension.
        /// @param dimension A frame dimension 
        /// @returns The number of frames of the @p dimension frame dimension.
        ASPOSECPP_SHARED_API int GetFrameCount(const Imaging::FrameDimensionPtr& dimension);
        /// Selects the specified frame.
        /// @param dimension The dimension of the frame to select
        /// @param frameIndex The index of the frame to select
        /// returns Always 0
        ASPOSECPP_SHARED_API int SelectActiveFrame(const Imaging::FrameDimensionPtr& dimension, int frameIndex);

        /// Creates an Image object from the specified stream.
        /// @param stream A stream that contains image data
        /// @param use_embedded_color_management IGNORED
        /// @param validate_image_data IGNORED
        /// @returns A shared pointer to the created Image object.
        static ASPOSECPP_SHARED_API SharedPtr<Image> FromStream(const SharedPtr<System::IO::Stream>& stream, bool use_embedded_color_management = false, bool validate_image_data = true);
        /// Creates an Image object from the specified file.
        /// @param filename A name of the file that contains image data
        /// @param use_embedded_color_management IGNORED
        /// @returns A shared pointer to the created Image object.
        static ASPOSECPP_SHARED_API SharedPtr<Image> FromFile(const String & filename, bool use_embedded_color_management = false);

        /// Determines if the specified pixel format contains alpha information.
        /// @param pixfmt A pixel format to test
        /// @returns True if @p pixfmt contains alpha information, otherwise - false
        static ASPOSECPP_SHARED_API bool IsAlphaPixelFormat(Imaging::PixelFormat pixfmt);
        /// Returns the number of bits used to represent the color depth in the specified pixel format.
        /// @param pixfmt A pixel format for which to determine the size
        /// @returns The color depth in @p pixfmt
        static ASPOSECPP_SHARED_API int GetPixelFormatSize(Imaging::PixelFormat pixfmt);
        /// Constructs a Bitmap object from the specified GDI bitmap.
        /// @param hbitmap A handle to a GDI bitmap from which to create a Bitmap object
        /// @returns A shared pointer to the created Bitmap object
        static ASPOSECPP_SHARED_API SharedPtr<Bitmap> FromHbitmap(IntPtr hbitmap);
        /// Releases all resources aquired by the current object.
        void Dispose() { };

        /// Returns an underlying SkBitmap object.
        virtual ASPOSECPP_SHARED_API const SkBitmap* GetSkBitmap() const = 0;

    protected:
        /// Default quality level used when encoding an image.
        static const int s_default_save_quality = 80;
        
        friend class Graphics;
        friend class TextureBrush;
        friend class Bitmap;

        /// Structure that represents save options
        struct SaveOptions
        {
            /// The quality level used when encoding an image.
            Nullable<int> Quality;
            /// Specifies the parameter value passed to a JPEG or TIFF image encoder.
            Nullable<Imaging::EncoderValue> Flag;
        };

        /// Converts a set of encoder parameters into a SaveOptions structure
        /// @param encoder_params The parameters of the encoder
        static SaveOptions ParseEncoderParameters(const Imaging::EncoderParametersPtr& encoder_params);

        /// Returns the drawing canvas object.
        virtual ASPOSECPP_SHARED_API SkCanvas * GetDrawingCanvas() const = 0;
        /// Saves an image represented by the current object in the specified format using the specified 
        /// image quality level setting when encoding the image to the momory buffer.
        /// @param encoder_type The image format to save the image in
        /// @param quality The quality level setting used when encoding the image
        /// @returns An SkData object that represents a memory buffer to which the image was saved
        virtual ASPOSECPP_SHARED_API sk_sp<SkData> GetRawBytes(SkEncodedFormat encoder_type, int quality) = 0;

        /// Saves the image represented by the current object to the specified stream in the specified format.
        /// @param stream A stream to save the image to
        /// @param encoder_type A format to save the image in
        /// @param quality The quality to save the image in; is used only if @p encoder_type format supports this setting
        ASPOSECPP_SHARED_API void InternalSave(const SharedPtr<System::IO::Stream>& stream, SkEncodedFormat encoder_type, int quality = s_default_save_quality);

        /// Saves the image represented by the current object to the specified stream in the specified format.
        /// @param stream A stream to save the image to
        /// @param encoder_type A format to save the image in
        /// @param options The options used to save the image in; is used only if @p encoder_type format supports this options
        void InternalSave(const SharedPtr<IO::Stream>& stream, SkEncodedFormat encoder_type, const SaveOptions& options);

        /// Saves the bitmap as a part of a multipage image
        /// @param bitmap The bitmap to save
        /// @param options The options used to save the bitmap
        void InternalSavePage(const SkBitmap* bitmap, const SaveOptions& options);

        /// Checks if the specified image format is supported and returns a SkEncodedFormat value that represents the specified image format.
        /// @param image_format The format to check
        /// @returns A value of SkEncodedFormat that specifies the same image format as @p image_format specifies
        /// @throws System::Runtime::InteropServices::ExternalException If the specified format is not supported
        ASPOSECPP_SHARED_API SkEncodedFormat CheckOutputFormat(const Imaging::ImageFormatPtr& image_format) const;
        /// Checks if the specified encoder is supported and returns a SkEncodedFormat value that represents an image format of the specified encoder.
        /// @param encoder The ImageCodecInfo object that represents the encoder to check
        /// @returns A SkEncodedFormat value that represents @p encoder's image format
        /// @throws System::Runtime::InteropServices::ExternalException If the specified encoder is not supported
        static ASPOSECPP_SHARED_API SkEncodedFormat CheckOutputFormat(const Imaging::ImageCodecInfoPtr& encoder);
        /// Checks if the specified format is among supported.
        /// @param encoded_format The format to check
        /// @returns A copy of @p encoded_format value if it is among supported formats
        /// @throws System::Runtime::InteropServices::ExternalException If the specified format is not supported
        static ASPOSECPP_SHARED_API SkEncodedFormat CheckOutputFormat(SkEncodedFormat encoded_format);

        /// Returns an underlying SkEncodedFormat object.
        virtual ASPOSECPP_SHARED_API const SkEncodedFormat GetSkEncodedFormat() const = 0;
        /// Returns the original image format.
        virtual ASPOSECPP_SHARED_API Imaging::PixelFormat GetOriginalFormat() const = 0;

        /// Draws the specified region of the image to the specified region on the specified canvas.
        /// The source bitmap region is scaled and translated to fill the destination region.
        /// @param sk_canvas The canvas to draw on
        /// @param dest_rect The rectangle on the canvas to draw to
        /// @param src_rect The rectangle specifying the portion of the image to draw
        /// @param matrix The matrix that specifies how to traslate and scale the source image region
        /// @param quality The quality of image interpolation
        /// @param blend_mode Specifies how the source colors are combined with the background colors
        virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, const SkRect&src_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const = 0;
        /// Draws the the image to the specified region on the specified canvas.
        /// The source image is scaled and translated to fill the destination region.
        /// @param sk_canvas The canvas to draw on
        /// @param dest_rect The rectangle in the canvas to draw to
        /// @param matrix The matrix that specifies how to traslate and scale the source image region
        /// @param quality The quality of image interpolation
        /// @param blend_mode Specifies how the source colors are combined with the background colors
        virtual void Draw(SkCanvas* sk_canvas, const SkRect& dest_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const = 0;
        /// Draws the specified region of the image to the specified region on the specified canvas.
        /// The source bitmap region is scaled and translated to fill the destination region.
        /// @param sk_canvas The canvas to draw on
        /// @param dest_points Array of 3 PointF objects representing points that define the rectangular region on the canvas to draw to
        /// @param src_rect The rectangle specifying the portion of the image to draw
        /// @param matrix The matrix that specifies how to traslate and scale the source image region
        /// @param quality The quality of image interpolation
        /// @param blend_mode Specifies how the source colors are combined with the background colors
        virtual void Draw(SkCanvas* sk_canvas, ArrayPtr<PointF> dest_points, const SkRect& src_rect, SkMatrix* matrix, SkFilterQuality quality, SkBlendMode blend_mode) const = 0;

        /// Determines if the data in the specified stream starts with the WMF format marker.
        /// @param stream The stream containing the data to check
        /// @returns True if the data in the @p stream begins with WMF format marker, otherwise - false
        static ASPOSECPP_SHARED_API bool IsWmf(const System::SharedPtr<System::IO::Stream>& stream);

        /// Determines if the data in the specified stream starts with the EMF format marker.
        /// @param stream The stream containing the data to check
        /// @returns True if the data in the @p stream begins with EMF format marker, otherwise - false
        static ASPOSECPP_SHARED_API bool IsEmf(const System::SharedPtr<System::IO::Stream>& stream);

        /// The color palette used by the image represented by the current object.
        Imaging::ColorPalettePtr m_palette;
        /// The horizontal resolution of the image represented by the current object in pixels per inch.
        float m_horizontal_resolution = 96.f; //only default 96dpi is supported
        /// The vertical resolution of the image represented by the current object in pixels per inch.
        float m_vertical_resolution = 96.f; //only default 96dpi is supported

    private:
        std::unique_ptr<SkRWStream> m_stream;
        std::unique_ptr<SkImageEncoder> m_encoder;
    };
}}


#endif
