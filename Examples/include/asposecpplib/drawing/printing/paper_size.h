/// @file drawing/printing/paper_size.h
#pragma once

#include <system/object.h>
#include <system/string.h>

#include "paper_kind.h"

namespace System { namespace Drawing { namespace Printing {

/// Specifies the size of a piece of paper.
class ASPOSECPP_SHARED_CLASS PaperSize : public System::Object
{
    RTTI_INFO(System::Drawing::Printing::PaperSize, ::System::BaseTypesInfo<System::Object>)
public:

    /// Initializes a new instance of the System::Drawing::Printing::PaperSize class.
    ASPOSECPP_SHARED_API PaperSize();

    /// Initializes a new instance of the System::Drawing::Printing::PaperSize class.
    /// @param kind The kind of the paper.
    /// @param name The name of the paper. 
    /// @param width The width of the paper, in hundredths of an inch. 
    /// @param height The height of the paper, in hundredths of an inch. 
    ASPOSECPP_SHARED_API PaperSize(PaperKind kind, System::String name, int32_t width, int32_t height);

    /// Initializes a new instance of the System::Drawing::Printing::PaperSize class.
    /// @param name The name of the paper. 
    /// @param width The width of the paper, in hundredths of an inch. 
    /// @param height The height of the paper, in hundredths of an inch. 
    ASPOSECPP_SHARED_API PaperSize(System::String name, int32_t width, int32_t height);

    /// Gets the height of the paper, in hundredths of an inch.
    /// @return The height of the paper, in hundredths of an inch.
    ASPOSECPP_SHARED_API int32_t get_Height() const;

    /// Sets the height of the paper, in hundredths of an inch.
    /// @exception System::ArgumentException The System::Drawing::Printing::PaperSize::Kind property is not set to System::Drawing::Printing::PaperKind::Custom.
    ASPOSECPP_SHARED_API void set_Height(int32_t value);

    /// Gets the type of paper.
    /// @return One of the System::Drawing::Printing::PaperKind values.
    ASPOSECPP_SHARED_API PaperKind get_Kind() const;

    /// Gets the name of the type of paper.
    /// @return The name of the type of paper.
    ASPOSECPP_SHARED_API System::String get_PaperName() const;

    /// Sets the name of the type of paper.
    /// @exception System::ArgumentException The System::Drawing::Printing::PaperSize::Kind property is not set to System::Drawing::Printing::PaperKind::Custom. 
    ASPOSECPP_SHARED_API void set_PaperName(System::String value);

    /// Gets an integer representing one of the System::Drawing::Printing::PaperSize values or a custom value.
    /// @return An integer representing one of the System::Drawing::Printing::PaperSize values, or a custom value.
    ASPOSECPP_SHARED_API int32_t get_RawKind() const;

    /// Sets an integer representing one of the System::Drawing::Printing::PaperSize values or a custom value.
    ASPOSECPP_SHARED_API void set_RawKind(int32_t value);

    /// Gets the width of the paper, in hundredths of an inch.
    /// @return The width of the paper, in hundredths of an inch.
    ASPOSECPP_SHARED_API int32_t get_Width() const;

    /// Sets the width of the paper, in hundredths of an inch.
    /// @exception System::ArgumentException The System::Drawing::Printing::PaperSize::Kind property is not set to System::Drawing::Printing::PaperKind::Custom. 
    ASPOSECPP_SHARED_API void set_Width(int32_t value);

    /// Provides information about the System::Drawing::Printing::PaperSize in string form.
    /// @return A string.
    ASPOSECPP_SHARED_API System::String ToString() const override;
private:
    PaperKind m_kind;
    System::String m_name;
    int32_t m_width;
    int32_t m_height;
    bool m_created_by_default_constructor = false;
};

} // namespace Printing
} // namespace Drawing
} // namespace System
