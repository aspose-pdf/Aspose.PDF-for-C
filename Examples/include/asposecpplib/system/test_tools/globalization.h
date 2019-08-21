#pragma once

#include <system/globalization/culture_info.h>

namespace System {

class ScopedCulture final
{
public:
    explicit ScopedCulture(const String& culture_name)
        : m_current_culture(Globalization::CultureInfo::GetCultureInfo(culture_name))
        , m_stored_culture(Globalization::CultureInfo::get_CurrentCulture())
    {
        Globalization::CultureInfo::set_CurrentCulture(m_current_culture);
    }

    ~ScopedCulture()
    {
        Globalization::CultureInfo::set_CurrentCulture(m_stored_culture);
    }

    ScopedCulture(const ScopedCulture&) = delete;
    ScopedCulture& operator=(const ScopedCulture&) = delete;

    const Globalization::CultureInfo* operator->() const { return m_current_culture.get(); }
    Globalization::CultureInfo* operator->() { return m_current_culture.get(); }

private:
    const Globalization::CultureInfoPtr m_current_culture;
    const Globalization::CultureInfoPtr m_stored_culture;
};

} // namespace System
