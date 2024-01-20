#ifndef __WIZ_BASIC_TYPE_REAL_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TYPE_REAL_HPP__SHANHAOBO_19800429__

#include <float.h>

#include "./WizBasicTypeDeclareUtils.hpp"

namespace Wiz
{
    namespace R32
    {
        WIZ_DECLARE_SIMPLE(float);
        static constexpr type Epsilon    = FLT_EPSILON;
        static constexpr type EpsilonSqr = ::Wiz::R32::Epsilon * ::Wiz::R32::Epsilon;
        static constexpr type Zero       = 0;
        static constexpr type MaxZeroEp  = 0 + ::Wiz::R32::Epsilon;
        static constexpr type MinZeroEp  = 0 - ::Wiz::R32::Epsilon;
        static constexpr type One        = 1;
        static constexpr type MaxOneEp   = 1 + ::Wiz::R32::Epsilon;
        static constexpr type MinOneEp   = 1 - ::Wiz::R32::Epsilon;
        static constexpr type Max        = FLT_MAX;
        static constexpr type Min        = -::Wiz::R32::Max;

        /// 用于模版类参数声明【template<float> 是不可以的】
        namespace Template
        {
            typedef R32::refc   type;
        } /// end of namespace Template
        namespace Tmplt = Template;
    }; /// end of namespace R32

    namespace R64
    {
        WIZ_DECLARE_SIMPLE(double);
        static constexpr type Epsilon    = DBL_EPSILON;
        static constexpr type EpsilonSqr = ::Wiz::R64::Epsilon * ::Wiz::R64::Epsilon;
        static constexpr type Zero       = 0;
        static constexpr type MaxZeroEp  = 0 + ::Wiz::R64::Epsilon;
        static constexpr type MinZeroEp  = 0 - ::Wiz::R64::Epsilon;
        static constexpr type One        = 1;
        static constexpr type MaxOneEp   = 1 + ::Wiz::R64::Epsilon;
        static constexpr type MinOneEp   = 1 - ::Wiz::R64::Epsilon;
        static constexpr type Max        = DBL_MAX;
        static constexpr type Min        = 0 - ::Wiz::R64::Max;

        /// 用于模版类参数声明【template<float> 是不可以的】
        namespace Template
        {
            typedef R64::refc   type;
        } /// end of namespace Template
        namespace Tmplt = Template;
    }; /// end of namespace R64


} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TYPE_REAL_HPP__SHANHAOBO_19800429__*/
