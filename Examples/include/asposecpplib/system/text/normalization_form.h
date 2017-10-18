#ifndef system_text_normalization_form_h
#define system_text_normalization_form_h

namespace System { namespace Text {

    enum class NormalizationForm
    {
        // Summary:
        //     Indicates that a Unicode string is normalized using full canonical decomposition,
        //     followed by the replacement of sequences with their primary composites, if
        //     possible.
        FormC = 1,
        //
        // Summary:
        //     Indicates that a Unicode string is normalized using full canonical decomposition.
        FormD = 2,
        //
        // Summary:
        //     Indicates that a Unicode string is normalized using full compatibility decomposition,
        //     followed by the replacement of sequences with their primary composites, if
        //     possible.
        FormKC = 5,
        //
        // Summary:
        //     Indicates that a Unicode string is normalized using full compatibility decomposition.
        FormKD = 6
    };
}}

#endif
