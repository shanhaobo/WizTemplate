#ifndef __WIZ_BASIC_TEMPLATE_ONE_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TEMPLATE_ONE_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicType.hpp"

namespace Wiz
{
    namespace Absolute
    {
        template<class T>
        WIZ_INLINE T GetOne()
        {
            return T(1);
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type IsOne(const T& inVal)
        {
            return ::Wiz::Absolute::GetOne<T>() == inVal;
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotOne(const T& inVal)
        {
            return ::Wiz::Absolute::GetOne<T>() != inVal;
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessOne(const T& inVal)
        {
            return inVal < ::Wiz::Absolute::GetOne<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterOne(const T& inVal)
        {
            return inVal > ::Wiz::Absolute::GetOne<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqualOne(const T& inVal)
        {
            return inVal <= ::Wiz::Absolute::GetOne<T>();
        }

        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqualOne(const T& inVal)
        {
            return inVal >= ::Wiz::Absolute::GetOne<T>();
        }
    } /// end of namespace Absolute

    /////////////////////////

    template<class T>
    WIZ_INLINE T GetOne()
    {
        return ::Wiz::Absolute::GetOne<T>();
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type IsOne(const T& inVal)
    {
        return ::Wiz::Absolute::IsOne<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type NotOne(const T& inVal)
    {
        return ::Wiz::Absolute::NotOne<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type LessOne(const T& inVal)
    {
        return ::Wiz::Absolute::LessOne<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type GreaterOne(const T& inVal)
    {
        return ::Wiz::Absolute::GreaterOne<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type LessEqualOne(const T& inVal)
    {
        return ::Wiz::Absolute::LessEqualOne<T>(inVal);
    }

    template<class T>
    WIZ_INLINE ::Wiz::Bool::type GreaterEqualOne(const T& inVal)
    {
        return ::Wiz::Absolute::GreaterEqualOne<T>(inVal);
    }

    /////////////////////////

    namespace Nearly
    {
        /// IsOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type IsOne(const T& inVal)
        {
            return ::Wiz::Absolute::IsOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type IsOne(::Wiz::R32::type const & inVal)
        {
            return (inVal >= ::Wiz::R32::MinOneEp) && (inVal <= ::Wiz::R32::MaxOneEp);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type IsOne(::Wiz::R64::type const & inVal)
        {
            return (inVal >= ::Wiz::R64::MinOneEp) && (inVal <= ::Wiz::R64::MaxOneEp);
        }

        /// NotOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type NotOne(const T& inVal)
        {
            return ::Wiz::Absolute::NotOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type NotOne(::Wiz::R32::type const & inVal)
        {
            return (inVal < ::Wiz::R32::MinOneEp) || (inVal > ::Wiz::R32::MaxOneEp);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type NotOne(::Wiz::R64::type const & inVal)
        {
            return (inVal < ::Wiz::R64::MinOneEp) || (inVal > ::Wiz::R64::MaxOneEp);
        }

        /// LessOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessOne(const T& inVal)
        {
            return ::Wiz::Absolute::LessOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessOne(::Wiz::R32::type const & inVal)
        {
            return inVal < ::Wiz::R32::MinOneEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessOne(::Wiz::R64::type const & inVal)
        {
            return inVal < ::Wiz::R64::MinOneEp;
        }

        /// GreaterOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterOne(const T& inVal)
        {
            return ::Wiz::Absolute::GreaterOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterOne(::Wiz::R32::type const & inVal)
        {
            return inVal > ::Wiz::R32::MaxOneEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterOne(::Wiz::R64::type const & inVal)
        {
            return inVal > ::Wiz::R64::MaxOneEp;
        }

        /// LessEqualOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type LessEqualOne(const T& inVal)
        {
            return ::Wiz::Absolute::LessEqualOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessEqualOne(::Wiz::R32::type const & inVal)
        {
            return inVal <= ::Wiz::R32::MaxOneEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type LessEqualOne(::Wiz::R64::type const & inVal)
        {
            return inVal <= ::Wiz::R64::MaxOneEp;
        }

        /// GreaterEqualOne
        template<class T>
        WIZ_INLINE ::Wiz::Bool::type GreaterEqualOne(const T& inVal)
        {
            return ::Wiz::Absolute::GreaterEqualOne<T>(inVal);
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterEqualOne(::Wiz::R32::type const & inVal)
        {
            return inVal >= ::Wiz::R32::MinOneEp;
        }

        template<>
        WIZ_INLINE::Wiz::Bool::type GreaterEqualOne(::Wiz::R64::type const & inVal)
        {
            return inVal >= ::Wiz::R64::MinOneEp;
        }
    } /// end of namespace Nearly

} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TEMPLATE_ONE_HPP__SHANHAOBO_19800429__*/
