#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <cstdint>

#include "Presentation/Graphics/Core/SizeF.h"
#include "aspose_pdf_api_defs.h"

namespace Aspose { namespace Pdf { namespace Engine { namespace Presentation { namespace Graphics { class Point; } } } } }

namespace Aspose {

namespace Pdf {

namespace Engine {

namespace Presentation {

namespace Graphics {

/// <summary>
/// Represents size.
/// </summary>
class ASPOSE_PDF_SHARED_API Size : public System::Object
{
    typedef Size ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
    FRIEND_FUNCTION_System_MakeObject;
    friend ASPOSE_PDF_SHARED_API Size operator +(Size size1, Size size2);
    friend ASPOSE_PDF_SHARED_API Size operator -(Size size1, Size size2);
    friend ASPOSE_PDF_SHARED_API bool operator ==(Size const &size1, Size const &size2);
    friend ASPOSE_PDF_SHARED_API bool operator !=(Size const &size1, Size const &size2);
    
public:

    /// <summary>
    /// Gets a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure that has <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size::Width"/> and <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size::Height"/> values set to zero.
    /// </summary>
    static Size get_Empty();
    /// <summary>
    /// Gets a value indicating whether this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> has width and height of 0.
    /// </summary>
    bool get_IsEmpty();
    /// <summary>
    /// Gets or sets the horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    int32_t get_Width();
    /// <summary>
    /// Gets or sets the horizontal component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    void set_Width(int32_t value);
    /// <summary>
    /// Gets or sets the vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    int32_t get_Height();
    /// <summary>
    /// Gets or sets the vertical component of this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    void set_Height(int32_t value);
    
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure from the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/>.
    /// </summary>
    /// <param name="point">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Point"/> from which to initialize this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.</param>
    Size(Point point);
    /// <summary>
    /// Initializes a new instance of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure from the specified dimensions.
    /// </summary>
    /// <param name="width">The width component of the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.</param>
    /// <param name="height">The height component of the new <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.</param>
    Size(int32_t width, int32_t height);
    
    static SizeF to_SizeF(Size size);
    static Point to_Point(Size size);
    
    /// <summary>
    /// Adds the width and height of one <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure to the width and height of another <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.
    /// </summary>
    /// <param name="size1">The first <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> to add.</param>
    /// <param name="size2">The second <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> to add.</param>
    /// <returns>A <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure that is the result of the addition operation.</returns>
    static Size Add(Size size1, Size size2);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure by rounding the values of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure to the next higher integer values.
    /// </summary>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure this method converts to.</returns>
    static Size Ceiling(SizeF size);
    /// <summary>
    /// Subtracts the width and height of one <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure from the width and height of another <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.
    /// </summary>
    /// <param name="size1">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure on the left side of the subtraction operator.</param>
    /// <param name="size2">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure on the right side of the subtraction operator.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> that is a result of the subtraction operation.</returns>
    static Size Subtract(Size size1, Size size2);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure by truncating the values of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to the next lower integer values.
    /// </summary>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure this method converts to.</returns>
    static Size Truncate(SizeF size);
    /// <summary>
    /// Converts the specified <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to a <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure by rounding the values of the <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to the nearest integer values.
    /// </summary>
    /// <param name="size">The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::SizeF"/> structure to convert.</param>
    /// <returns>The <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure this method converts to.</returns>
    static Size Round(SizeF size);
    /// <summary>
    /// Returns a hash code for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.
    /// </summary>
    /// <returns>An integer value that specifies a hash value for this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/> structure.</returns>
    virtual int32_t GetHashCode() const;
    /// <summary>
    /// Creates a human-readable string that represents this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.
    /// </summary>
    /// <returns>A string that represents this <see cref="Aspose::Pdf::Engine::Presentation::Graphics::Size"/>.</returns>
    virtual System::String ToString() const;
    
    Size();
    
protected:

    static System::String SizeFormat;
    
private:

    static Size empty;
    int32_t width;
    int32_t height;
    
    static struct __StaticConstructor__ { __StaticConstructor__(); } s_constructor__;
    
};

ASPOSE_PDF_SHARED_API Size operator +(Size size1, Size size2);
ASPOSE_PDF_SHARED_API Size operator -(Size size1, Size size2);
ASPOSE_PDF_SHARED_API bool operator ==(Size const &size1, Size const &size2);
ASPOSE_PDF_SHARED_API bool operator !=(Size const &size1, Size const &size2);

} // namespace Graphics
} // namespace Presentation
} // namespace Engine
} // namespace Pdf
} // namespace Aspose


