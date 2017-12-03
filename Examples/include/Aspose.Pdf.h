// stdafx.h : include file for standard system include files,
// or project specific include files that are used frequently, but
// are changed infrequently
//

#pragma once

#include "targetver.h"

#include <stdio.h>
#include <tchar.h>



// TODO: reference additional headers your program requires here
#include "system/console.h"
#include "system/enum.h"
#include "system/shared_ptr.h"
#include "system/string.h"
#include "system/io/file.h"
#include "system/io/memory_stream.h"
#include "system/io/stream_reader.h"
#include "system/io/seekorigin.h"
#include "system/text/unicode_encoding.h"
#include "drawing/rectangle.h"
#include "drawing/bitmap.h"
#include "drawing/graphics.h"

#include "Color_.h"
#include "Data/XMP/XmpValue.h"
#include "Direction.h"
#include "DOM/PageMode_.h"
#include "Document.h"
#include "DocumentInfo.h"
#include "EmbeddedFileCollection.h"
#include "License.h"
#include "Metadata.h"
#include "Page.h"
#include "PageCollection.h"
#include "PageLayout.h"
#include "Rectangle__.h"
#include "Facades/PdfFileInfo.h"
#include "Facades/PdfContentEditor.h"
#include "Facades/PdfExtractor.h"
#include "Generator/PageInfo.h"
#include "Generator/Paragraphs.h"
#include "HorizontalAlignment.h"
#include "VerticalAlignment.h"
#include "InteractiveFeatures/GoToAction.h"
#include "InteractiveFeatures/FitExplicitDestination.h"
#include "InteractiveFeatures/XYZExplicitDestination.h"
#include "Text/Font.h"
#include "Text/FontStyles.h"
#include "Text/FontRepository.h"
#include "Text/Position.h"
#include "Text/TextBuilder.h"
#include "Text/TextFragment.h"
#include "Text/TextFragmentCollection.h"
#include "Text/TextFragmentAbsorber.h"
#include "Text/TextFragmentState.h"
#include "Text/TextParagraph.h"
#include "Text/TextOptions/TextReplaceOptions.h"
#include "IO/ConvertStrategies/PdfFormat.h"
#include "IO/ConvertStrategies/ConvertErrorAction.h"
#include "Facades/DocumentPrivilege.h"
#include "Facades/PdfBookmarkEditor.h"
#include "Facades/Bookmark.h"
#include "Facades/Bookmarks.h"
#include "Facades/PdfAnnotationEditor.h"
#include "InteractiveFeatures/Annotations/TextAnnotation.h"
#include "InteractiveFeatures/Annotations/AnnotationType.h"
