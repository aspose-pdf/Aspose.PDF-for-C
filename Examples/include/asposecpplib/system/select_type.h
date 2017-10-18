#pragma once

#include <type_traits>
#include <fwd.h>

namespace System
{

namespace Details
{

struct ByteBool
{
    typedef uint8_t InternalType;
    InternalType m_val;

    ByteBool()
        : m_val(false) {}

    ByteBool(bool b)
        : m_val(b) {}

    ByteBool& operator=(bool b)
    {
        m_val = b;
        return *this;
    }

    operator bool() const
    {
        return !!m_val;
    }

    bool operator==(ByteBool rhs) const { return !!m_val == !!rhs.m_val; }
    bool operator==(bool rhs) const { return !!m_val == rhs; }

    bool operator<(ByteBool rhs) const { return !!m_val < !!rhs.m_val; }
    bool operator<(bool rhs) const { return !!m_val < rhs; }
};

inline bool operator==(bool lhs, ByteBool rhs) { return rhs.operator==(lhs); }

inline bool operator!=(ByteBool lhs, ByteBool rhs) { return !lhs.operator==(rhs);  }
inline bool operator!=(ByteBool lhs, bool rhs) { return !lhs.operator==(rhs); }
inline bool operator!=(bool lhs, ByteBool rhs) { return !operator==(lhs, rhs);  }

inline bool operator<(bool lhs, ByteBool rhs) { return (lhs != rhs) && !(rhs < lhs); }
//TODO >, <=, >= operators

static_assert(sizeof(ByteBool) == 1, "Size of ByteBool must be 1");
static_assert(sizeof(ByteBool[17]) == 17, "Alignment of ByteBool must be 1");
static_assert(std::is_standard_layout<ByteBool>::value, "ByteBool must have Standard Layout");

template<typename T>
struct SelectType
{
    using type = T;
};

template<>
struct SelectType<bool>
{
    using type = Details::ByteBool;
};

} // namespace Details
} // namespace System
