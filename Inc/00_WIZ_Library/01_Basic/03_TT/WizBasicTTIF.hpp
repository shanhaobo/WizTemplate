#ifndef __WIZ_BASIC_TT_IF_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_TT_IF_HPP__SHANHAOBO_19800429__

/// ֻ������::Wiz::Bool::type
#include "../01_Type/WizBasicTypeBool.hpp"

namespace Wiz
{
    namespace TT
    {
        namespace _IMPL
        {
            /// General Case
            template<::Wiz::Bool::type, class T1, class T2>
            struct If_Impl
            {
                typedef T1 tType;
            };

            /// Specialization for False
            template<class T1, class T2>
            struct If_Impl<::Wiz::Bool::False, T1, T2>
            {
                typedef T2 tType;
            };
        } /// end of namespace Implement

        /// ֱ��ͨ��BOOLֵ����ȡ
        template<::Wiz::Bool::type bV, class T1, class T2>
        struct If
        {
            typedef typename _IMPL::If_Impl<bV, T1, T2>::tType             tType;
        };

        /// ͨ�����͵�ֵ(bValue)����ȡ
        template<class CondT, class T1, class T2>
        struct _If
        {
            typedef typename _IMPL::If_Impl<CondT::bValue, T1, T2>::tType tType;
        };
    } /// end of namespace TypeTraits
} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TT_IF_HPP__SHANHAOBO_19800429__*/
