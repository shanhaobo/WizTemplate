#ifndef __WIZ_BASIC_TEMPLATE_COMPARE_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TEMPLATE_COMPARE_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicType.hpp"
#include "./WizMathUtilsZero.hpp"
#include "./WizMathUtilsOne.hpp"

namespace Wiz
{
    /////////////////////////

    namespace Absolute
    {
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type IsEqual(const T& v1, const T& v2)
        {
            return v1 == v2;
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotEqual(const T& v1, const T& v2)
        {
            return v1 != v2;
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type Less(const T& v1, const T& v2)
        {
            return v1 < v2;
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type Greater(const T& v1, const T& v2)
        {
            return v1 > v2;
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqual(const T& v1, const T& v2)
        {
            return v1 <= v2;
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqual(const T& v1, const T& v2)
        {
            return v1 >= v2;
        }
        /// [Min, Max] Close
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type inRange(const T& v, const T& Min, const T& Max)
        {
            return (Min <= v) && (v <= Max);
        }
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type outRange(const T& v, const T& Min, const T& Max)
        {
            return (Min > v) || (v > Max);
        }
    } /// end of namespace Absolute

    /////////////////////////

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type IsEqual(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::IsEqual<T>(v1, v2);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type NotEqual(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::NotEqual<T>(v1, v2);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type Less(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::Less<T>(v1, v2);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type Greater(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::Greater<T>(v1, v2);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type LessEqual(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::LessEqual<T>(v1, v2);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type GreaterEqual(const T& v1, const T& v2)
    {
        return ::Wiz::Absolute::GreaterEqual<T>(v1, v2);
    }
    /// [Min, Max] Close
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type inRange(const T& v, const T& Min, const T& Max)
    {
        return ::Wiz::Absolute::inRange<T>(v, Min, Max);
    }
    template<class T>
    WIZ_INLINE ::Wiz::Bool::type outRange(const T& v, const T& Min, const T& Max)
    {
        return ::Wiz::Absolute::outRange<T>(v, Min, Max);
    }
    /////////////////////////

    namespace Nearly
    {
        /// IsEqual
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type IsEqual(const T v1, const T v2)
        {
            return ::Wiz::Absolute::IsEqual<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type IsEqual(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::IsZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type IsEqual(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::IsZero(v1 - v2);
        }

        /// NotEqual
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotEqual(const T v1, const T v2)
        {
            return ::Wiz::Absolute::NotEqual<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type NotEqual(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::NotZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type NotEqual(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::NotZero(v1 - v2);
        }

        /// Less
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type Less(const T v1, const T v2)
        {
            return ::Wiz::Absolute::Less<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type Less(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::LessZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type Less(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::LessZero(v1 - v2);
        }

        /// Greater
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type Greater(const T v1, const T v2)
        {
            return ::Wiz::Absolute::Greater<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type Greater(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::GreaterZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type Greater(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::GreaterZero(v1 - v2);
        }

        /// LessEqual
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqual(const T v1, const T v2)
        {
            return ::Wiz::Absolute::LessEqual<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type LessEqual(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::LessEqualZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type LessEqual(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::LessEqualZero(v1 - v2);
        }

        /// GreaterEqual
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqual(const T v1, const T v2)
        {
            return ::Wiz::Absolute::GreaterEqual<T>(v1, v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqual(::Wiz::R32::in v1, ::Wiz::R32::in v2)
        {
            return ::Wiz::Nearly::GreaterEqualZero(v1 - v2);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqual(::Wiz::R64::in v1, ::Wiz::R64::in v2)
        {
            return ::Wiz::Nearly::GreaterEqualZero(v1 - v2);
        }

        /// inRange [Min, Max] Close
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type inRange(const T v, const T Min, const T Max)
        {
            return ::Wiz::Absolute::inRange<T>(v, Min, Max);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type inRange(::Wiz::R32::in v, ::Wiz::R32::in Min, ::Wiz::R32::in Max)
        {
            return (v >= (Min - ::Wiz::R32::Epsilon)) && (v <= (Max + ::Wiz::R32::Epsilon));
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type inRange(::Wiz::R64::in v, ::Wiz::R64::in Min, ::Wiz::R64::in Max)
        {
            return (v >= (Min - ::Wiz::R64::Epsilon)) && (v <= (Max + ::Wiz::R64::Epsilon));
        }

        /// outRange
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type outRange(const T v, const T Min, const T Max)
        {
            return ::Wiz::Absolute::outRange<T>(v, Min, Max);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type outRange(::Wiz::R32::in v, ::Wiz::R32::in Min, ::Wiz::R32::in Max)
        {
            return (v < (Min - ::Wiz::R32::Epsilon)) || (v > (Max + ::Wiz::R32::Epsilon));
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type outRange(::Wiz::R64::in v, ::Wiz::R64::in Min, ::Wiz::R64::in Max)
        {
            return (v < (Min - ::Wiz::R64::Epsilon)) || (v > (Max + ::Wiz::R64::Epsilon));
        }

    } /// end of namespace Nearly
    /////////////////////////
} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TEMPLATE_COMPARE_HPP__SHANHAOBO_19800429__*/
