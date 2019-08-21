#pragma once

#include <system/object.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace PdfAOptionClasses {

/// <summary>
/// The <b>Aspose.PdfAOptionClasses</b> is a namespace for PDF/A convertsion optins.
/// </summary>
class NamespaceDoc : public System::Object
{
    typedef NamespaceDoc ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
};

/// <summary>
/// This class describes rules which can be used to solve Adobe Preflight error 
/// "Text cannot be mapped to Unicode".
/// </summary>
class ASPOSE_PDF_SHARED_API ToUnicodeProcessingRules : public System::Object
{
    typedef ToUnicodeProcessingRules ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Some fonts have ToUnicode character code maps with spaces in names. These spaces could call errors
    /// with unicode text mapping. This flag commands to remove spaces from names of ToUnicode character code maps.
    /// By default false.
    /// </summary>
    bool get_RemoveSpacesFromCMapNames();
    /// <summary>
    /// Some fonts have ToUnicode character code maps with spaces in names. These spaces could call errors
    /// with unicode text mapping. This flag commands to remove spaces from names of ToUnicode character code maps.
    /// By default false.
    /// </summary>
    void set_RemoveSpacesFromCMapNames(bool value);
    /// <summary>
    /// Some fonts doesn't provide information about unicodes for some text symbols. 
    /// This lack of information calls an error "Text cannot be mapped to Unicode".
    /// Use this flag to map non-linked symbols on unicode "space"(code 32).
    /// </summary>
    bool get_MapNonLinkedSymbolsOnSpace();
    /// <summary>
    /// Some fonts doesn't provide information about unicodes for some text symbols. 
    /// This lack of information calls an error "Text cannot be mapped to Unicode".
    /// Use this flag to map non-linked symbols on unicode "space"(code 32).
    /// </summary>
    void set_MapNonLinkedSymbolsOnSpace(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    ToUnicodeProcessingRules();
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="removeSpaces">sets <see cref="RemoveSpacesFromCMapNames"/> flag</param>
    ToUnicodeProcessingRules(bool removeSpaces);
    /// <summary>
    /// Constructor
    /// </summary>
    /// <param name="removeSpaces">sets <see cref="RemoveSpacesFromCMapNames"/> flag</param>
    /// <param name="mapNonLinkedUnicodesOnSpace">sets <see cref="MapNonLinkedSymbolsOnSpace"/> flag</param>
    ToUnicodeProcessingRules(bool removeSpaces, bool mapNonLinkedUnicodesOnSpace);
    
private:

    bool pr_RemoveSpacesFromCMapNames;
    bool pr_MapNonLinkedSymbolsOnSpace;
    
};

/// <summary>
/// PDF/A standard requires, that all fonts must be embedded into document.
/// This class includes flags for cases when it's not possible to embed some font cause this font is absent 
/// on destination PC.
/// </summary>
class ASPOSE_PDF_SHARED_API FontEmbeddingOptions : public System::Object
{
    typedef FontEmbeddingOptions ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Declares to substitute non-embedded font using default font substitution strategy. By default false;
    /// </summary>
    bool get_UseDefaultSubstitution();
    /// <summary>
    /// Declares to substitute non-embedded font using default font substitution strategy. By default false;
    /// </summary>
    void set_UseDefaultSubstitution(bool value);
    
    /// <summary>
    /// Constructor
    /// </summary>
    FontEmbeddingOptions();
    
private:

    bool pr_UseDefaultSubstitution;
    
};

} // namespace PdfAOptionClasses
} // namespace Pdf
} // namespace Aspose


