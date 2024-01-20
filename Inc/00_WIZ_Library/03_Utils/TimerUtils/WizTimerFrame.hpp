#ifndef __WIZ_TIMER_FRAME_HPP__SHANHAOBO_19800429__
#define __WIZ_TIMER_FRAME_HPP__SHANHAOBO_19800429__

#include "./WizTimerHighRes.hpp"

namespace Wiz
{
    namespace Timer
    {
        /// ���ʱ�ӵ�Ŀ�ľ��ǣ�ÿֻ֡����һ�Σ���֡���ô�ʱ��
        namespace Frame
        {
            WIZ_CLASS
            {
            public:
                type();

            public:
                Void::type Reset();

                Void::type Tick();

            public:
                R64::refc Now() const
                {
                    return m_Now;
                }

                R64::refc DeltaTime() const
                {
                    return m_DeltaTime;
                }

            protected:
                R64::type   m_Now;
                R64::type   m_DeltaTime;
            };
        } /// end of namespace Frame
    } /// end of namespace Timer
} /// end of namespace Wiz

#endif /*__WIZ_TIMER_FRAME_HPP__SHANHAOBO_19800429__*/
