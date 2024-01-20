#ifndef __WIZ_MATH_UTILS_MISC_HPP__SHANHAOBO_19800429__
#define __WIZ_MATH_UTILS_MISC_HPP__SHANHAOBO_19800429__

#include <math.h>

#include "../../01_Basic/01_Type/WizBasicType.hpp"
#include "../../01_Basic/04_TU/WizBasicTUCast.hpp"

namespace Wiz
{
    ////////////////////////////////////////////////////////////////////////
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type IsPowerOfTwo(const T& Val)
    {
        return WIZ_ISPOWEROFTWO(Val);
    }

    template<int n>
    WIZ_INLINE ::Wiz::Bool::type IsPowerOfTwo()
    {
        return WIZ_ISPOWEROFTWO(n);
    }
    //////////////////////////////////////////////////////////////////////////
    WIZ_INLINE ::Wiz::I32::type NextPowerOfTwo(::Wiz::I32::type x)
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        return x + 1;
    }

    WIZ_INLINE ::Wiz::U32::type NextPowerOfTwo(::Wiz::U32::type x)
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        return x + 1;
    }

    WIZ_INLINE ::Wiz::I64::type NextPowerOfTwo(::Wiz::I64::type x)
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        x |= (x >> 32);
        return x + 1;
    }

    WIZ_INLINE ::Wiz::U64::type NextPowerOfTwo(::Wiz::U64::type x)
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        x |= (x >> 32);
        return x + 1;
    }

    template<::Wiz::I32::type x>
    WIZ_INLINE ::Wiz::I32::type NextPowerOfTwo()
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        return x + 1;
    }

    template<::Wiz::U32::type x>
    WIZ_INLINE ::Wiz::U32::type NextPowerOfTwo()
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        return x + 1;
    }

    template<::Wiz::I64::type x>
    WIZ_INLINE ::Wiz::I64::type NextPowerOfTwo()
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        x |= (x >> 32);
        return x + 1;
    }

    template<::Wiz::U64::type x>
    WIZ_INLINE ::Wiz::U64::type NextPowerOfTwo()
    {
        x |= (x >> 1);
        x |= (x >> 2);
        x |= (x >> 4);
        x |= (x >> 8);
        x |= (x >> 16);
        x |= (x >> 32);
        return x + 1;
    }

    //////////////////////////////////////////////////////////////////////////
    /// ABS
    template<class T>
    WIZ_INLINE T AbsDiff(const T& t1, const T& t2)
    {
        return t1 >= t2 ? t1 - t2 : t2 - t1;
    }

    //////////////////////////////////////////////////////////////////////////

    template<class T>
    WIZ_INLINE T Abs(const T& t)
    {
        return t < 0 ? -t : t;
    }

    template<class T>
    WIZ_INLINE T Sign(const T& v)
    {
        return v < 0 ? -1 : v > 0 ? 1 : 0;
    }

    //////////////////////////////////////////////////////////////////////////
    /// CLAMP
    template<class T>
    WIZ_INLINE T Clamp(const T& v, const T& Min_v, const T& Max_v)
    {
        return v < Min_v ? Min_v : v > Max_v ? Max_v : v;
    }

    template<class T>
    WIZ_INLINE T Saturate(const T& v)
    {
        return ::Wiz::Clamp<T>(v, 0, 1);
    }

    template<class T>
    WIZ_INLINE T ConvertRange(const T& t, const T& From1, const T& From2, const T& To1, const T& To2) 
    {
        return (t - From1) * (To2 - To1) / (From2 - From1) + To1;           /// (t - From1) / (From2 - From1) = (x - To1) / (To2 - To1)
    }
    //////////////////////////////////////////////////////////////////////////
    template<typename T>
    WIZ_INLINE T Sqr(const T& r)
    {
        return r * r;
    }

    template<typename T>
    WIZ_INLINE T Sqrt(const T& v)
    {
        return static_cast<T>(::sqrt(static_cast<double>(v)));
    }
    WIZ_INLINE ::Wiz::R32::type SqrtFast(::Wiz::R32::in v)
    {
        return static_cast<::Wiz::R32::type>(::sqrt(static_cast<double>(v)));
    }
    WIZ_INLINE ::Wiz::R64::type SqrtFast(::Wiz::R64::in v)
    {
        return static_cast<::Wiz::R64::type>(::sqrt(v));
    }

    template<typename T>
    WIZ_INLINE T RecipSqrt(const T& v)
    {
        return 1 / ::Wiz::Sqrt(v);
    }
    WIZ_INLINE ::Wiz::R32::type RecipSqrtFast(::Wiz::R32::in v)
    {
        return static_cast<::Wiz::R32::type>(1 / ::sqrt(v));
    }
    WIZ_INLINE ::Wiz::R64::type RecipSqrtFast(::Wiz::R64::in v)
    {
        return 1 / ::sqrt(v);
    }

    //////////////////////////////////////////////////////////////////////////

    WIZ_INLINE ::Wiz::R32::type Abs(::Wiz::R32::in v)
    {
        return static_cast<::Wiz::R32::type>(::abs(v));
    }

    WIZ_INLINE ::Wiz::R32::type Exp(::Wiz::R32::in v)
    {
        return static_cast<::Wiz::R32::type>(::exp(v));
    }

    /// Not A Number
    WIZ_INLINE ::Wiz::Bool::type IsNAN(::Wiz::R32::in v)
    {
        //return ::_isnan(v) != 0;
        // std::isnan() is C99, not supported by all compilers
        // However NaN always fails this next test, no other number does.
        return v != v;
    }

    /// -inF << v << inF
    WIZ_INLINE ::Wiz::Bool::type IsFinite(::Wiz::R32::in v)
    {
        return ::_finite(v) != 0;
    }

    /// returns the largest integer that is not greater than the argument
    WIZ_INLINE ::Wiz::R32::type FloorF(::Wiz::R32::in v)
    {
        return static_cast<::Wiz::R32::type>(::floor(v));
    }

    /// 四舍五入
    WIZ_INLINE ::Wiz::I32::type Round(::Wiz::R32::in v)
    {
        return _mm_cvt_ss2si(_mm_set_ss(v + v + 0.5f)) >> 1;
    }

    /// Returns the largest integer that is not greater than the argument.
    WIZ_INLINE ::Wiz::I32::type Floor(::Wiz::R32::in v)
    {
        return _mm_cvt_ss2si(_mm_set_ss(v + v - 0.5f)) >> 1;
    }

    /// Returns the smallest integer that is not less than the argument.
    WIZ_INLINE ::Wiz::I32::type Ceil(::Wiz::R32::in v)
    {
        return -(_mm_cvt_ss2si(_mm_set_ss(0.5f - (v + v))) >> 1);
    }

    /// Calculates the floating-point remainder.
    WIZ_INLINE ::Wiz::R32::type Fmod(::Wiz::R32::in numerator, ::Wiz::R32::in denominator)
    {
        return static_cast<::Wiz::R32::type>(::fmod(numerator, denominator));
    }

    WIZ_INLINE ::Wiz::R32::type Log2(::Wiz::R32::in v)
    {
        /*
        ** NOTE: log_base_2(x) = log(x) / log(2)
        ** NOTE: 1.442695 = 1/log(2).
        */
        return static_cast<::Wiz::R32::type>(::log(v) * 1.442695f);
    }

    WIZ_INLINE ::Wiz::R32::type LogE(::Wiz::R32::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R32::type>(::log(v));
    }

    WIZ_INLINE ::Wiz::R32::type Log10(::Wiz::R32::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R32::type>(::log10(v));
    }

    WIZ_INLINE ::Wiz::R32::type Pow(::Wiz::R32::in base, ::Wiz::R32::in exponent)
    {
        return ::Wiz::Cast::Static<::Wiz::R32::type>(::pow(base, exponent));
    }

    WIZ_INLINE ::Wiz::I32::type Trunc(::Wiz::R32::in r)
    {
        return _mm_cvt_ss2si(_mm_set_ss(r));
    }

    WIZ_INLINE ::Wiz::R32::type TruncF(::Wiz::R32::in r)
    {
        return ::Wiz::Cast::Static<::Wiz::R32::type>(::Wiz::Trunc(r));
    }

    WIZ_INLINE ::Wiz::R32::type Fract(::Wiz::R32::in r)
    {
        return r - ::Wiz::TruncF(r);
    }

    WIZ_INLINE ::Wiz::I::type QuadraticEquationRoots(::Wiz::R32::out Root1, ::Wiz::R32::out Root2, ::Wiz::R32::in A, ::Wiz::R32::in B, ::Wiz::R32::in C)
    {
        if (A == 0)
        {
            if (B == 0)
            {
                return 0;
            }
            Root1 = -C / B;
            return 1;
        }

        ::Wiz::R32::typec t = B * B - 4 * A * C;
        if (t < 0)
        {
            return 0;
        }

        ::Wiz::R32::typec TempRoot = -B / (2 * A);
        if (t == 0)
        {
            Root1 = TempRoot;
            return 1;
        }

        ::Wiz::R32::typec TempDiff = ::Wiz::Sqrt(t) / (2 * A);

        Root1 = TempRoot + TempDiff;
        Root2 = TempRoot - TempDiff;
        return 2;
    }

    //////////////////////////////////////////////////////////////////////////

    WIZ_INLINE ::Wiz::R64::type Abs(::Wiz::R64::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::abs(v));
    }

    WIZ_INLINE ::Wiz::R64::type Exp(::Wiz::R64::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::exp(v));
    }

    WIZ_INLINE ::Wiz::R64::type Floor(::Wiz::R64::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::floor(v));
    }

    /// Calculates the floating-point remainder.
    WIZ_INLINE ::Wiz::R64::type Fmod(::Wiz::R64::in numerator, ::Wiz::R64::in denominator)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::fmod(numerator, denominator));
    }

    WIZ_INLINE ::Wiz::R64::type Log2(::Wiz::R64::in v)
    {
        /*
        * NOTE: log_base_2(x) = log(x) / log(2)
        * NOTE: 1.442695 = 1/log(2).
        */
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::log(v) * 1.442695f);
    }


    WIZ_INLINE ::Wiz::R64::type LogE(::Wiz::R64::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::log(v));
    }

    WIZ_INLINE ::Wiz::R64::type Log10(::Wiz::R64::in v)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::log10(v));
    }

    WIZ_INLINE ::Wiz::R64::type Pow(::Wiz::R64::in base, ::Wiz::R64::in exponent)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::pow(base, exponent));
    }

    WIZ_INLINE ::Wiz::I64::type Trunc(::Wiz::R64::in r)
    {
        return ::Wiz::Cast::Static<::Wiz::I64::type>(r);
    }

    WIZ_INLINE ::Wiz::R64::type TruncF(::Wiz::R64::in r)
    {
        return ::Wiz::Cast::Static<::Wiz::R64::type>(::Wiz::Trunc(r));
    }

    WIZ_INLINE ::Wiz::R64::type Fract(::Wiz::R64::in r)
    {
        return r - ::Wiz::Cast::Static<::Wiz::R64::type>(::Wiz::Trunc(r));
    }

    /// Quadratic 二次方程
    WIZ_INLINE ::Wiz::I::type QuadraticEquationRoots(::Wiz::R64::out Root1, ::Wiz::R64::out Root2, ::Wiz::R64::in A, ::Wiz::R64::in B, ::Wiz::R64::in C)
    {
        if (A == 0)
        {
            if (B == 0)
            {
                return 0;
            }
            Root1 = -C / B;
            return 1;
        }

        ::Wiz::R64::typec t = B * B - 4 * A * C;
        if (t < 0)
        {
            return 0;
        }

        ::Wiz::R64::typec TempRoot = -B / (2 * A);

        if (t == 0)
        {
            Root1 = TempRoot;
            return 1;
        }
        ::Wiz::R64::typec TempDiff = ::Wiz::Sqrt(t) / (2 * A);

        Root1 = TempRoot + TempDiff;
        Root2 = TempRoot - TempDiff;
        return 2;
    }
} /// end of namespace Wiz


#endif /*__WIZ_MATH_UTILS_MISC_HPP__SHANHAOBO_19800429__*/
