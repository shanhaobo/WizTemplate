#ifndef __WIZ_BASIC_TYPE_CHAR_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TYPE_CHAR_HPP__SHANHAOBO_19800429__

#include "./WizBasicTypeDeclareUtils.hpp"

namespace Wiz
{
    ///////////////////////////////////////////////////
    namespace Char
    {
        WIZ_DECLARE_SIMPLE(char);
        static constexpr type Terminator = '\0';

        static constexpr type Digit_0 = '0';
        static constexpr type Digit_1 = '1';
        static constexpr type Digit_2 = '2';
        static constexpr type Digit_3 = '3';
        static constexpr type Digit_4 = '4';
        static constexpr type Digit_5 = '5';
        static constexpr type Digit_6 = '6';
        static constexpr type Digit_7 = '7';
        static constexpr type Digit_8 = '8';
        static constexpr type Digit_9 = '9';
    } /// end of namespace Char

    namespace WChar
    {
        WIZ_DECLARE_SIMPLE(wchar_t);
        static constexpr type Terminator = L'\0';

        static constexpr type Digit_0 = L'0';
        static constexpr type Digit_1 = L'1';
        static constexpr type Digit_2 = L'2';
        static constexpr type Digit_3 = L'3';
        static constexpr type Digit_4 = L'4';
        static constexpr type Digit_5 = L'5';
        static constexpr type Digit_6 = L'6';
        static constexpr type Digit_7 = L'7';
        static constexpr type Digit_8 = L'8';
        static constexpr type Digit_9 = L'9';
    } /// end of namespace WChar

    namespace MBChar
    {
        WIZ_DECLARE_SIMPLE(unsigned char);
        static constexpr type Terminator = '\0';

        static constexpr type Digit_0 = '0';
        static constexpr type Digit_1 = '1';
        static constexpr type Digit_2 = '2';
        static constexpr type Digit_3 = '3';
        static constexpr type Digit_4 = '4';
        static constexpr type Digit_5 = '5';
        static constexpr type Digit_6 = '6';
        static constexpr type Digit_7 = '7';
        static constexpr type Digit_8 = '8';
        static constexpr type Digit_9 = '9';
    } /// end of namespace MBChar
    ///////////////////////////////////////////////////
} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TYPE_CHAR_HPP__SHANHAOBO_19800429__*/
