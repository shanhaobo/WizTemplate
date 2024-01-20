#ifndef __WIZ_BASIC_TEMPLATE_ZERO_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TEMPLATE_ZERO_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicType.hpp"

namespace Wiz
{
    /////////////////////////

    namespace Absolute
    {
        template<class T>
        WIZ_INLINE T GetZero()
        {
            return T(0);
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type IsZero(const T& inVal)
        {
            return ::Wiz::Absolute::GetZero<T>() == inVal;
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotZero(const T& inVal)
        {
            return ::Wiz::Absolute::GetZero<T>() != inVal;
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessZero(const T& inVal)
        {
            return inVal < ::Wiz::Absolute::GetZero<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterZero(const T& inVal)
        {
            return inVal > ::Wiz::Absolute::GetZero<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqualZero(const T& inVal)
        {
            return inVal <= ::Wiz::Absolute::GetZero<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqualZero(const T& inVal)
        {
            return inVal >= ::Wiz::Absolute::GetZero<T>();
        }
    } /// end of namespace Absolute

    /////////////////////////

    template<class T>
    WIZ_INLINE T GetZero()
    {
        return ::Wiz::Absolute::GetZero<T>();
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type IsZero(const T& inVal)
    {
        return ::Wiz::Absolute::IsZero<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type NotZero(const T& inVal)
    {
        return ::Wiz::Absolute::NotZero<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type LessZero(const T& inVal)
    {
        return ::Wiz::Absolute::LessZero<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type GreaterZero(const T& inVal)
    {
        return ::Wiz::Absolute::GreaterZero<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type LessEqualZero(const T& inVal)
    {
        return ::Wiz::Absolute::LessEqualZero<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type GreaterEqualZero(const T& inVal)
    {
        return ::Wiz::Absolute::GreaterEqualZero<T>(inVal);
    }

    /////////////////////////

    namespace Nearly
    {
        /// IsZero
        template<class T>
        WIZ_INLINE::Wiz::Bool::type IsZero(T const & inVal)
        {
            return ::Wiz::Absolute::IsZero(inVal);
        }

        template<>
        WIZ_INLINE ::Wiz::Bool::type IsZero(::Wiz::R32::type const & inVal)
        {
            return (inVal >= ::Wiz::R32::MinZeroEp) && (inVal <= ::Wiz::R32::MaxZeroEp);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type IsZero(::Wiz::R64::type const & inVal)
        {
            return (inVal >= ::Wiz::R64::MinZeroEp) && (inVal <= ::Wiz::R64::MaxZeroEp);
        }

        /// NotZero
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotZero(const T& inVal)
        {
            return ::Wiz::Absolute::NotZero(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type NotZero(::Wiz::R32::type const & inVal)
        {
            return (inVal < ::Wiz::R32::MinZeroEp) || (inVal > ::Wiz::R32::MaxZeroEp);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type NotZero(::Wiz::R64::type const & inVal)
        {
            return (inVal < ::Wiz::R64::MinZeroEp) || (inVal > ::Wiz::R64::MaxZeroEp);
        }

        /// LessZero
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessZero(const T& inVal)
        {
            return ::Wiz::Absolute::LessZero<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessZero(::Wiz::R32::type const & inVal)
        {
            return inVal < ::Wiz::R32::MinZeroEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessZero(::Wiz::R64::type const & inVal)
        {
            return inVal < ::Wiz::R64::MinZeroEp;
        }

        /// GreaterZero
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterZero(const T& inVal)
        {
            return ::Wiz::Absolute::GreaterZero<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterZero(::Wiz::R32::type const & inVal)
        {
            return inVal > ::Wiz::R32::MaxZeroEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterZero(::Wiz::R64::type const & inVal)
        {
            return inVal > ::Wiz::R64::MaxZeroEp;
        }

        /// LessEqualZero
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqualZero(const T& inVal)
        {
            return ::Wiz::Absolute::LessEqualZero<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessEqualZero(::Wiz::R32::type const & inVal)
        {
            return inVal <= ::Wiz::R32::MaxZeroEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessEqualZero(::Wiz::R64::type const & inVal)
        {
            return inVal <= ::Wiz::R64::MaxZeroEp;
        }

        /// GreaterEqualZero
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqualZero(const T& inVal)
        {
            return ::Wiz::Absolute::GreaterEqualZero<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterEqualZero(::Wiz::R32::type const & inVal)
        {
            return inVal >= ::Wiz::R32::MinZeroEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterEqualZero(::Wiz::R64::type const & inVal)
        {
            return inVal >= ::Wiz::R64::MinZeroEp;
        }
    } /// end of namespace Nearly
    /////////////////////////
} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TEMPLATE_ZERO_HPP__SHANHAOBO_19800429__*/
