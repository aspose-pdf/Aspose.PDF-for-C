#pragma once
// Copyright (c) 2001-2019 Aspose Pty Ltd. All Rights Reserved.

#include <system/string.h>
#include <system/shared_ptr.h>
#include <system/object.h>
#include <system/globalization/culture_info.h>

#include "aspose_pdf_api_defs.h"

namespace Aspose {

namespace Pdf {

namespace Forms {

/// <summary>
/// An abstract class which represents signature custon appearance object.
/// </summary>
class ASPOSE_PDF_SHARED_API SignatureCustomAppearance FINAL : public System::Object
{
    typedef SignatureCustomAppearance ThisType;
    typedef System::Object BaseType;
    
    typedef ::System::BaseTypesInfo<BaseType> ThisTypeBaseTypesInfo;
    RTTI_INFO_DECL();
    
public:

    /// <summary>
    /// Gets/sets font family name. It should be existed in the document. Default value: Arial.
    /// </summary>
    System::String get_FontFamilyName();
    /// <summary>
    /// Gets/sets font family name. It should be existed in the document. Default value: Arial.
    /// </summary>
    void set_FontFamilyName(System::String value);
    /// <summary>
    /// Gets/sets font size. Default value: 10.
    /// </summary>
    double get_FontSize();
    /// <summary>
    /// Gets/sets font size. Default value: 10.
    /// </summary>
    void set_FontSize(double value);
    /// <summary>
    /// Gets/sets contact info visibility. Default value: true.
    /// </summary>
    bool get_ShowContactInfo();
    /// <summary>
    /// Gets/sets contact info visibility. Default value: true.
    /// </summary>
    void set_ShowContactInfo(bool value);
    /// <summary>
    /// Gets/sets reason visibility. Default value: true.
    /// </summary>
    bool get_ShowReason();
    /// <summary>
    /// Gets/sets reason visibility. Default value: true.
    /// </summary>
    void set_ShowReason(bool value);
    /// <summary>
    /// Gets/sets location visibility. Default value: true.
    /// </summary>
    bool get_ShowLocation();
    /// <summary>
    /// Gets/sets location visibility. Default value: true.
    /// </summary>
    void set_ShowLocation(bool value);
    /// <summary>
    /// Gets/sets contact info label. Default value: "Contact".
    /// </summary>
    System::String get_ContactInfoLabel();
    /// <summary>
    /// Gets/sets contact info label. Default value: "Contact".
    /// </summary>
    void set_ContactInfoLabel(System::String value);
    /// <summary>
    /// Gets/sets reason label. Default value: "Reason".
    /// </summary>
    System::String get_ReasonLabel();
    /// <summary>
    /// Gets/sets reason label. Default value: "Reason".
    /// </summary>
    void set_ReasonLabel(System::String value);
    /// <summary>
    /// Gets/sets location label. Default value: "Location".
    /// </summary>
    System::String get_LocationLabel();
    /// <summary>
    /// Gets/sets location label. Default value: "Location".
    /// </summary>
    void set_LocationLabel(System::String value);
    /// <summary>
    /// Gets/sets digital signed label. Default value: "Digitally signed by".
    /// </summary>
    System::String get_DigitalSignedLabel();
    /// <summary>
    /// Gets/sets digital signed label. Default value: "Digitally signed by".
    /// </summary>
    void set_DigitalSignedLabel(System::String value);
    /// <summary>
    /// Gets/sets date signed label. Default value: "Date".
    /// </summary>
    System::String get_DateSignedAtLabel();
    /// <summary>
    /// Gets/sets date signed label. Default value: "Date".
    /// </summary>
    void set_DateSignedAtLabel(System::String value);
    /// <summary>
    /// Gets/sets datetime local format. Default value: "yyyy.MM.dd HH:mm:ss zzz".
    /// </summary>
    System::String get_DateTimeLocalFormat();
    /// <summary>
    /// Gets/sets datetime local format. Default value: "yyyy.MM.dd HH:mm:ss zzz".
    /// </summary>
    void set_DateTimeLocalFormat(System::String value);
    /// <summary>
    /// Gets/sets datetime format. Default value: "yyyy.MM.dd HH:mm:ss".
    /// </summary>
    System::String get_DateTimeFormat();
    /// <summary>
    /// Gets/sets datetime format. Default value: "yyyy.MM.dd HH:mm:ss".
    /// </summary>
    void set_DateTimeFormat(System::String value);
    /// <summary>
    /// Gets/sets culture info value. Default value: InvariantCulture.
    /// </summary>
    System::SharedPtr<System::Globalization::CultureInfo> get_Culture();
    /// <summary>
    /// Gets/sets culture info value. Default value: InvariantCulture.
    /// </summary>
    void set_Culture(System::SharedPtr<System::Globalization::CultureInfo> value);
    
    /// <summary>
    /// Inititalizes new instance of the <see cref="SignatureCustomAppearance"/> class.
    /// </summary>
    SignatureCustomAppearance();
    
protected:

    System::Object::shared_members_type GetSharedMembers() override;
    
private:

    System::String _fontFamilyName;
    double _fontSize;
    bool _showContactInfo;
    bool _showReason;
    bool _showLocation;
    System::String _dateSignedAtLabel;
    System::String _contactInfoLabel;
    System::String _reasonLabel;
    System::String _locationLabel;
    System::String _digitalSignedLabel;
    System::String _dateTimeLocalFormat;
    System::String _dateTimeFormat;
    System::SharedPtr<System::Globalization::CultureInfo> _cultureInfo;
    
};

} // namespace Forms
} // namespace Pdf
} // namespace Aspose


