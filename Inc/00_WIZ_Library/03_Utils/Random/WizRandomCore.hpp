#ifndef __WIZ_RANDOM_CORE_HPP__SHANHAOBO_19800429__
#define __WIZ_RANDOM_CORE_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicType.hpp"

#include "../../01_Basic/04_TU/WizBasicTU.hpp"

namespace Wiz
{
    namespace Random
    {
        namespace Core
		{
			namespace NonRange
			{
				template<class EngineT, class NumT>
				class Type
				{
					typedef NumT					tNum;
					typedef const tNum&				tNumIn;
					typedef EngineT					tEngine;
					typedef typename tEngine::tNum	tEngineNum;
					typedef const tEngine&			tEngineIn;
                public:
					tNum Generate(tEngineIn Eng) const
					{
						return ::Wiz::Cast::Static<tNum>(Eng.Rand());
					}
                public:
                    /// ����Ϊ��,��ʼ�����ܿ���,��Ϊ�����Ƿ���Union�����
					Type()
					{
					}
				};
			} /// end of namespace NonRange

			namespace Range
			{
				template<class EngineT, class NumT>
				class Type
				{
					typedef EngineT					tEngine;
                    typedef tEngine const&          tEngineIn;
					typedef typename tEngine::tNum	tEngineNum;

					typedef NumT					tNum;
					typedef const tNum&				tNumIn;
				private:
					tNum					m_Min;
					tNum					m_Max;
                    ::Wiz::R64::type        m_RangeScale;
				private:
					WIZ_INLINE tNum GetMin() const
					{
						return m_Min;
					}
					WIZ_INLINE tNum GetMax() const
					{
						return m_Max;
					}
                    WIZ_INLINE ::Wiz::R64::type GetRange() const
					{
                        return ::Wiz::Cast::Static<::Wiz::R64::type>(GetMax() - GetMin());
					}
                private:
					WIZ_INLINE::Wiz::R64::type InnerRand(tEngineIn inEng) const
                    {
                        tEngineNum const lRandVal = inEng.Rand() - inEng.GetMin();

						return lRandVal * m_RangeScale;
                    }
				public:
					tNum Generate(tEngineIn inEng) const
					{
						return ::Wiz::Cast::Static<tNum>(InnerRand(inEng)) + this->GetMin();
					}
				public:
                    /// ����Ϊ��,��ʼ�����ܿ���,��Ϊ�����Ƿ���Union�����
					Type()
					{
					}
				public:
					::Wiz::Void::type SetMinMax(tNumIn Min, tNumIn Max)
					{
						m_Min = Min;
						m_Max = Max;

						m_RangeScale = this->GetRange() / ::Wiz::Cast::Static<::Wiz::R64::type>(tEngine::GetRange());
					}
				};
			} /// end of namespace Range
		} /// end of namespace Core
    } /// end of namespace Random
} /// end of namespace Engine

#endif /*__WIZ_RANDOM_CORE_HPP__SHANHAOBO_19800429__*/
