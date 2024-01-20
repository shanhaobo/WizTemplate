#ifndef __WIZ_RANDOM_ENGINE_C_HPP__SHANHAOBO_19800429__
#define __WIZ_RANDOM_ENGINE_C_HPP__SHANHAOBO_19800429__

#include "./WizRandomEngine.hpp"
#include <stdlib.h>
#include <time.h>

namespace Wiz
{
    namespace Random
    {
        namespace Engine
        {
			namespace C
			{
				class Type : public ::Wiz::Random::Engine::Type<::Wiz::U::type, 0, RAND_MAX>
				{
					typedef ::Wiz::Random::Engine::Type<::Wiz::U::type, 0, RAND_MAX> tSuper;
				public:
					virtual ::Wiz::U::type Rand() const
					{
						return rand();
					}
					virtual ::Wiz::Void::type Seed(::Wiz::U::in s)
					{
						srand(s);
					}
					virtual ::Wiz::Void::type Seed()
					{
						Seed(::Wiz::Cast::Static<::Wiz::U::type>(time(WIZ_NULLPTR)));
					}
				public:
					Type()
					{
					}
				};
			} /// end of namespace C
        } /// end of namespace Engine
    } /// end of namespace Random
} /// end of namespace Wiz

#endif /*__WIZ_RANDOM_ENGINE_C_HPP__SHANHAOBO_19800429__*/
