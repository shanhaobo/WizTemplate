#ifndef __WIZ_BASIC_TYPE_DECLARE_HELPER_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TYPE_DECLARE_HELPER_HPP__SHANHAOBO_19800429__

#include "./WizBasicType.hpp"

/// Ê¾Àý
/// #undef  WIZ_CUSTOM_DECLARE_HELPER
/// #define WIZ_CUSTOM_DECLARE_HELPER                RKK_DECLARE
/// #undef  WIZ_CUSTOM_DECLARE_HELPER_SIMPLE
/// #define WIZ_CUSTOM_DECLARE_HELPER_SIMPLE         RKK_DECLARE_SIMPLE
/// #undef  WIZ_CUSTOM_DECLARE_HELPER_PTR
/// #define WIZ_CUSTOM_DECLARE_HELPER_PTR            RKK_DECLARE_PTR

#ifndef     WIZ_CUSTOM_DECLARE_HELPER
#   define  WIZ_CUSTOM_DECLARE_HELPER               WIZ_DECLARE
#endif ///  WIZ_CUSTOM_DECLARE_HELPER

#ifndef     WIZ_CUSTOM_DECLARE_HELPER_SIMPLE
#   define  WIZ_CUSTOM_DECLARE_HELPER_SIMPLE        WIZ_DECLARE_SIMPLE
#endif ///  WIZ_CUSTOM_DECLARE_HELPER_SIMPLE

#ifndef     WIZ_CUSTOM_DECLARE_HELPER_PTR
#   define  WIZ_CUSTOM_DECLARE_HELPER_PTR           WIZ_DECLARE_PTR
#endif ///  WIZ_CUSTOM_DECLARE_HELPER_PTR

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_I()                                      \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::I::type)                \
    static constexpr ::Wiz::I::type Min = ::Wiz::I::Min;                     \
    static constexpr ::Wiz::I::type Max = ::Wiz::I::Max;

#define WIZ_DECLARE_HELPER_U()                                      \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::U::type)                \
    static constexpr ::Wiz::U::type Min = ::Wiz::U::Min;                     \
    static constexpr ::Wiz::U::type Max = ::Wiz::U::Max;

#define WIZ_DECLARE_HELPER_I8()                                     \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::I8::type)               \
    static constexpr ::Wiz::I8::type Min = ::Wiz::I8::Min;                   \
    static constexpr ::Wiz::I8::type Max = ::Wiz::I8::Max;

#define WIZ_DECLARE_HELPER_U8()                                     \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::U8::type)               \
    static constexpr ::Wiz::U8::type Min = ::Wiz::U8::Min;                   \
    static constexpr ::Wiz::U8::type Max = ::Wiz::U8::Max;

#define WIZ_DECLARE_HELPER_I16()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::I16::type)              \
    static constexpr ::Wiz::I16::type Min = ::Wiz::I16::Min;                 \
    static constexpr ::Wiz::I16::type Max = ::Wiz::I16::Max;

#define WIZ_DECLARE_HELPER_U16()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::U16::type)              \
    static constexpr ::Wiz::U16::type Min = ::Wiz::U16::Min;                 \
    static constexpr ::Wiz::U16::type Max = ::Wiz::U16::Max;

#define WIZ_DECLARE_HELPER_I32()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::I32::type)              \
    static constexpr ::Wiz::I32::type Min = ::Wiz::I32::Min;                 \
    static constexpr ::Wiz::I32::type Max = ::Wiz::I32::Max;

#define WIZ_DECLARE_HELPER_U32()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::U32::type)              \
    static constexpr ::Wiz::U32::type Min = ::Wiz::U32::Min;                 \
    static constexpr ::Wiz::U32::type Max = ::Wiz::U32::Max;

#define WIZ_DECLARE_HELPER_I64()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::I64::type)              \
    static constexpr ::Wiz::I64::type Min = ::Wiz::I64::Min;                 \
    static constexpr ::Wiz::I64::type Max = ::Wiz::I64::Max;

#define WIZ_DECLARE_HELPER_U64()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::U64::type)              \
    static constexpr ::Wiz::U64::type Min = ::Wiz::U64::Min;                 \
    static constexpr ::Wiz::U64::type Max = ::Wiz::U64::Max;

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_R32()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::R32::type)              \
    static constexpr ::Wiz::R32::type Epsilon    = ::Wiz::R32::Epsilon;      \
    static constexpr ::Wiz::R32::type EpsilonSqr = ::Wiz::R32::EpsilonSqr;   \
    static constexpr ::Wiz::R32::type Zero       = ::Wiz::R32::Zero;         \
    static constexpr ::Wiz::R32::type MaxZeroEp  = ::Wiz::R32::MaxZeroEp;    \
    static constexpr ::Wiz::R32::type MinZeroEp  = ::Wiz::R32::MaxZeroEp;    \
    static constexpr ::Wiz::R32::type One        = ::Wiz::R32::One;          \
    static constexpr ::Wiz::R32::type MaxOneEp   = ::Wiz::R32::MaxOneEp;     \
    static constexpr ::Wiz::R32::type MinOneEp   = ::Wiz::R32::MinOneEp;     \
    static constexpr ::Wiz::R32::type Max        = ::Wiz::R32::Max;          \
    static constexpr ::Wiz::R32::type Min        = ::Wiz::R32::Min;

#define WIZ_DECLARE_HELPER_R64()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::R64::type)              \
    static constexpr ::Wiz::R64::type Epsilon    = ::Wiz::R64::Epsilon;      \
    static constexpr ::Wiz::R64::type EpsilonSqr = ::Wiz::R64::EpsilonSqr;   \
    static constexpr ::Wiz::R64::type Zero       = ::Wiz::R64::Zero;         \
    static constexpr ::Wiz::R64::type MaxZeroEp  = ::Wiz::R64::MaxZeroEp;    \
    static constexpr ::Wiz::R64::type MinZeroEp  = ::Wiz::R64::MaxZeroEp;    \
    static constexpr ::Wiz::R64::type One        = ::Wiz::R64::One;          \
    static constexpr ::Wiz::R64::type MaxOneEp   = ::Wiz::R64::MaxOneEp;     \
    static constexpr ::Wiz::R64::type MinOneEp   = ::Wiz::R64::MinOneEp;     \
    static constexpr ::Wiz::R64::type Max        = ::Wiz::R64::Max;          \
    static constexpr ::Wiz::R64::type Min        = ::Wiz::R64::Min;

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_CHAR()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::Char::type)             \
    static constexpr ::Wiz::Char::type Digit_0   = ::Wiz::Char::Digit_0;     \
    static constexpr ::Wiz::Char::type Digit_1   = ::Wiz::Char::Digit_1;     \
    static constexpr ::Wiz::Char::type Digit_2   = ::Wiz::Char::Digit_2;     \
    static constexpr ::Wiz::Char::type Digit_3   = ::Wiz::Char::Digit_3;     \
    static constexpr ::Wiz::Char::type Digit_4   = ::Wiz::Char::Digit_4;     \
    static constexpr ::Wiz::Char::type Digit_5   = ::Wiz::Char::Digit_5;     \
    static constexpr ::Wiz::Char::type Digit_6   = ::Wiz::Char::Digit_6;     \
    static constexpr ::Wiz::Char::type Digit_7   = ::Wiz::Char::Digit_7;     \
    static constexpr ::Wiz::Char::type Digit_8   = ::Wiz::Char::Digit_8;     \
    static constexpr ::Wiz::Char::type Digit_9   = ::Wiz::Char::Digit_9;     \
    static constexpr ::Wiz::Char::type Terminator = ::Wiz::Char::Terminator;

#define WIZ_DECLARE_HELPER_WCHAR()                                  \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::WChar::type)            \
    static constexpr ::Wiz::WChar::type Digit_0  = ::Wiz::WChar::Digit_0;    \
    static constexpr ::Wiz::WChar::type Digit_1  = ::Wiz::WChar::Digit_1;    \
    static constexpr ::Wiz::WChar::type Digit_2  = ::Wiz::WChar::Digit_2;    \
    static constexpr ::Wiz::WChar::type Digit_3  = ::Wiz::WChar::Digit_3;    \
    static constexpr ::Wiz::WChar::type Digit_4  = ::Wiz::WChar::Digit_4;    \
    static constexpr ::Wiz::WChar::type Digit_5  = ::Wiz::WChar::Digit_5;    \
    static constexpr ::Wiz::WChar::type Digit_6  = ::Wiz::WChar::Digit_6;    \
    static constexpr ::Wiz::WChar::type Digit_7  = ::Wiz::WChar::Digit_7;    \
    static constexpr ::Wiz::WChar::type Digit_8  = ::Wiz::WChar::Digit_8;    \
    static constexpr ::Wiz::WChar::type Digit_9  = ::Wiz::WChar::Digit_9;    \
    static constexpr ::Wiz::WChar::type Terminator = ::Wiz::WChar::Terminator;

#define WIZ_DECLARE_HELPER_MBCHAR()                                 \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::MBChar::type)           \
    static constexpr ::Wiz::MBChar::type Digit_0 = ::Wiz::MBChar::Digit_0;   \
    static constexpr ::Wiz::MBChar::type Digit_1 = ::Wiz::MBChar::Digit_1;   \
    static constexpr ::Wiz::MBChar::type Digit_2 = ::Wiz::MBChar::Digit_2;   \
    static constexpr ::Wiz::MBChar::type Digit_3 = ::Wiz::MBChar::Digit_3;   \
    static constexpr ::Wiz::MBChar::type Digit_4 = ::Wiz::MBChar::Digit_4;   \
    static constexpr ::Wiz::MBChar::type Digit_5 = ::Wiz::MBChar::Digit_5;   \
    static constexpr ::Wiz::MBChar::type Digit_6 = ::Wiz::MBChar::Digit_6;   \
    static constexpr ::Wiz::MBChar::type Digit_7 = ::Wiz::MBChar::Digit_7;   \
    static constexpr ::Wiz::MBChar::type Digit_8 = ::Wiz::MBChar::Digit_8;   \
    static constexpr ::Wiz::MBChar::type Digit_9 = ::Wiz::MBChar::Digit_9;   \
    static constexpr ::Wiz::MBChar::type Terminator = ::Wiz::MBChar::Terminator;

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_BOOL()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::Bool::type)             \
    static constexpr ::Wiz::Bool::type True = ::Wiz::Bool::True;             \
    static constexpr ::Wiz::Bool::type False = ::Wiz::Bool::False;           \

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_VOID()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_PTR(::Wiz::Void::type)

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_SIZE()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::Size::type)

#define WIZ_DECLARE_HELPER_SIZE8()                                  \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::USize8::type)            \
    static constexpr ::Wiz::USize8::type Invalid = ::Wiz::U8::Max;           \
    static constexpr ::Wiz::USize8::type Min     = 0;                        \
    static constexpr ::Wiz::USize8::type Max     = ::Wiz::U8::Max - 1;


#define WIZ_DECLARE_HELPER_SIZE16()                                 \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::USize16::type)          \
    static constexpr ::Wiz::USize16::type Invalid    = ::Wiz::U16::Max;      \
    static constexpr ::Wiz::USize16::type Min        = 0;                    \
    static constexpr ::Wiz::USize16::type Max        = ::Wiz::U16::Max - 1;

#define WIZ_DECLARE_HELPER_SIZE32()                                 \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::USize32::type)          \
    static constexpr ::Wiz::USize32::type Invalid    = ::Wiz::U32::Max;      \
    static constexpr ::Wiz::USize32::type Min        = 0;                    \
    static constexpr ::Wiz::USize32::type Max        = ::Wiz::U32::Max - 1;

#define WIZ_DECLARE_HELPER_SIZE64()                                 \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::USize64::type)          \
    static constexpr ::Wiz::USize64::type Invalid    = ::Wiz::U64::Max;      \
    static constexpr ::Wiz::USize64::type Min        = 0;                    \
    static constexpr ::Wiz::USize64::type Max        = ::Wiz::U64::Max - 1;

/////////////////////////////////////////////////////////

#define WIZ_DECLARE_HELPER_ID8()                                    \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::ID8::type)              \
    static constexpr ::Wiz::ID8::type Invalid = ::Wiz::U8::Max;              \
    static constexpr ::Wiz::ID8::type Min = 0;                               \
    static constexpr ::Wiz::ID8::type Max = ::Wiz::U8::Max - 1;

#define WIZ_DECLARE_HELPER_ID16()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::ID16::type)             \
    static constexpr ::Wiz::ID16::type Invalid = ::Wiz::U16::Max;            \
    static constexpr ::Wiz::ID16::type Min = 0;                              \
    static constexpr ::Wiz::ID16::type Max = ::Wiz::U16::Max - 1;

#define WIZ_DECLARE_HELPER_ID32()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::ID32::type)             \
    static constexpr ::Wiz::ID32::type Invalid = ::Wiz::U32::Max;            \
    static constexpr ::Wiz::ID32::type Min = 0;                              \
    static constexpr ::Wiz::ID32::type Max = ::Wiz::U32::Max - 1;

#define WIZ_DECLARE_HELPER_ID64()                                   \
    WIZ_CUSTOM_DECLARE_HELPER_SIMPLE(::Wiz::ID64::type)             \
    static constexpr ::Wiz::ID64::type Invalid = ::Wiz::U64::Max;            \
    static constexpr ::Wiz::ID64::type Min = 0;                              \
    static constexpr ::Wiz::ID64::type Max = ::Wiz::U64::Max - 1;

/////////////////////////////////////////////////////////

#endif /*__WIZ_BASIC_TYPE_DECLARE_HELPER_HPP__SHANHAOBO_19800429__*/
