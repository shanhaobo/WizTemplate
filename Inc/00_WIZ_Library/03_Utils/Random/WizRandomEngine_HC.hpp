#ifndef __WIZ_RANDOM_ENGINE_HC_HPP__SHANHAOBO_19800429__
#define __WIZ_RANDOM_ENGINE_HC_HPP__SHANHAOBO_19800429__

#include "./WizRandomEngine.hpp"
#include <stdlib.h>
#include <time.h>

namespace Wiz
{
    namespace Random
    {
        namespace Engine
        {
			/// hal chamberlin
			namespace HC
			{
				class type : public ::Wiz::Random::Engine::Type<::Wiz::U32::type, 0, ::Wiz::U32::Max>
				{
					typedef ::Wiz::Random::Engine::Type<::Wiz::U32::type, 0, ::Wiz::U32::Max> tSuper;
				public:
					virtual ::Wiz::U32::type Rand() const
					{
						m_Seed = m_Seed * 196314165 + 907633515;
						return m_Seed;
					}
					virtual ::Wiz::Void::type Seed(::Wiz::U32::in s)
					{
						m_Seed  = s;
					}
					virtual ::Wiz::Void::type Seed()
					{
						Seed(::Wiz::Cast::Static<::Wiz::U32::type>(time(WIZ_NULLPTR)));
					}
				public:
					type()
					{
					}
				protected:
					mutable ::Wiz::U32::type		m_Seed;
				};
			} /// end of namespace HC
        } /// end of namespace Engine
    } /// end of namespace Random
} /// end of namespace Wiz

#endif /*__WIZ_RANDOM_ENGINE_HC_HPP__SHANHAOBO_19800429__*/
