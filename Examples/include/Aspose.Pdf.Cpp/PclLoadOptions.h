#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/collections/ilist.h>

#include "LoadOptions.h"

namespace Aspose {

namespace Pdf {

/// <summary>
/// Enumerates conversion engines that can be used for conversion
/// </summary>
class ASPOSE_PDF_SHARED_API PclLoadOptions FINAL : public Aspose::Pdf::LoadOptions
{
    typedef PclLoadOptions ThisType;
    typedef Aspose::Pdf::LoadOptions BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    enum class ConversionEngines
    {
        /// <summary>
        ///  Legacy conversion engine is conversion engine thay was used for a while and is used by default. 
        /// </summary>
        LegacyEngine,
        /// <summary>
        ///  New conversion engine is currently in A-testing state. We open it into public API to get some feedback. 
        ///  It's currently recommended to use it only when old conversion engine cannot convert document for some reasons.
        /// </summary>
        NewEngine
    };
    
    
public:

    PclLoadOptions::ConversionEngines ConversionEngine;
    bool SupressErrors;
    System::SharedPtr<System::Collections::Generic::IList<System::Exception>> Exceptions;
    
    /// <summary>
    /// Creates <see cref="PclLoadOptions"/> object.
    /// </summary>
    PclLoadOptions();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
};

} // namespace Pdf
} // namespace Aspose


