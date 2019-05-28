/// @file system/text/normalization_form.h
#ifndef system_text_normalization_form_h
#define system_text_normalization_form_h

namespace System { namespace Text {

/// Defines how to normalize Unicode string.
enum class NormalizationForm
{
    /// Use full canonical decomposition, then replace sequences with their primary composites.
    FormC = 1,
    /// Use full canonical decomposition.
    FormD = 2,
    /// Use full compatibility decomposition, then replace sequences with their primary composites.
    FormKC = 5,
    /// Use full compatibility decomposition.
    FormKD = 6
};

}}

#endif
