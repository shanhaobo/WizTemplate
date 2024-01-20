#ifndef __WIZ_TIMER_HIGHRES_HPP__SHANHAOBO_19800429__
#define __WIZ_TIMER_HIGHRES_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicType.hpp"
#include "../../01_Basic/02_MU/WizBasicMU.hpp"

namespace Wiz
{
    namespace Timer
    {
        namespace HighRes
        {
            WIZ_CLASS
            {
            public:
                type()
                {
                }

                virtual ~type()
                {
                }

                virtual Void::type Reset() = 0;

                virtual R64::type Now_Second() = 0;             /// √Î

                virtual R64::type Now_MilliSecond() = 0;        /// ∫¡√Î

                virtual R64::type Now_MicroSecond() = 0;        /// Œ¢√Î
            };

            ptr instancePtr();
        } /// end of namespace HighRes
    } /// end of namespace Timer
} /// end of namespace Wiz

#endif /*__WIZ_TIMER_HIGHRES_HPP__SHANHAOBO_19800429__*/
