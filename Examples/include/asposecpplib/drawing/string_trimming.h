/// @file drawing/string_trimming.h
#ifndef _aspose_drawing_string_trimming_h_
#define _aspose_drawing_string_trimming_h_

namespace System {
    namespace Drawing {
        /// Specifies how characters should be trimmed from a string that does not fit the layout shape.
        enum class StringTrimming   {
            /// No trimming.
            None = 0,
            /// Trim to the nearest character.
            Character = 1,
            /// Trim to the nearest word.
            Word = 2,
            /// Trim to the nearest character and insert ellipsis at the end of the string.
            EllipsisCharacter = 3,
            /// Trim to the nearest word and insert ellipsis at the end of the string.
            EllipsisWord = 4,
            /// The center is removed from trimmed lines and replaced by an ellipsis.
            /// Keep as much of the last slash-delimited segment of the line as possible.
            EllipsisPath = 5
        };
    }
}

#endif
