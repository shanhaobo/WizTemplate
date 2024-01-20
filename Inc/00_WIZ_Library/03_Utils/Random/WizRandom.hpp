#ifndef __WIZ_RANDOM_HPP__SHANHAOBO_19800429__
#define __WIZ_RANDOM_HPP__SHANHAOBO_19800429__

#include "../../02_Adv/01_Type/Function/WizAdvFunction.hpp"

#include "./WizRandomCore.hpp"

#include "./WizRandomEngine.hpp"
#include "./WizRandomEngine_C.hpp"
#include "./WizRandomEngine_HC.hpp"

namespace Wiz
{
    namespace Random
    {
        /// ���ݹ��캯���ֱ���� ����Χ���벻����Χ���������
		template<class NumT, class EngineT = ::Wiz::Random::Engine::C::Type>
        class Type : public ::Wiz::Noncopyable::Type
        {
			typedef NumT										tNum;
			typedef const tNum&									tNumIn;
			typedef EngineT										tEngine;
			typedef typename tEngine::tNum						tEngineNum;
			typedef ::Wiz::Function::Type<tNum(const tEngine&)>	tRandFunc;

			typedef ::Wiz::Random::Core::Range::Type<tEngine, tNum>	    tCoreRange;
			typedef ::Wiz::Random::Core::NonRange::Type<tEngine, tNum>	tCoreNonRange;
        protected:
            tEngine m_Engine;
            union
			{
				struct  
				{
					tCoreRange    m_CoreRange;          /// ����Χ
				};
				struct
				{
					tCoreNonRange m_CoreNonRange;       /// ������Χ
				};
            };
			/// ʵ���Ͼ��ǵ���::Wiz::Random::Core::Generate
            tRandFunc m_Rand;
        public:
            tNum Generate()
            {
                return m_Rand(m_Engine);
			}
            ::Wiz::Void::type SetSeed(tNumIn S)
            {
                m_Engine.Seed(S);
            }
        public:
            Type() : m_Rand(tRandFunc(&m_CoreNonRange, &tCoreNonRange::Generate))
            {
                m_Engine.Seed();
            }
			Type(tNumIn InSeed) : m_Rand(tRandFunc(&m_CoreNonRange, &tCoreNonRange::Generate))
			{
				m_Engine.Seed(InSeed);
			}
            Type(tNumIn InMin, tNumIn InMax) : m_Rand(tRandFunc(&m_CoreRange, &tCoreRange::Generate))
            {
                m_CoreRange.SetMinMax(InMin, InMax);
                m_Engine.Seed();
			}
			Type(tNumIn InSeed, tNumIn InMin, tNumIn InMax) : m_Rand(tRandFunc(&m_CoreRange, &tCoreRange::Generate))
			{
				m_CoreRange.SetMinMax(InMin, InMax);
				m_Engine.Seed(InSeed);
			}
        };
    } /// end of namespace Random
} /// end of namespace Wiz

#endif /*__WIZ_RANDOM_HPP__SHANHAOBO_19800429__*/
