#ifndef __WIZ_BASIC_MPP_COMBINE_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_MPP_COMBINE_HPP__SHANHAOBO_19800429__

#ifndef WIZ_MPP_COMBINE

/// ʾ��:X,Y�Ƿֱ���������, ����Ҫ�ϳ�"Macro"
/// #define  MacroPart_1   Ma
/// #define  MacroPart_2   cro
/// #define  WIZ_MPP_COMBINE_Error(x, y)  x##y
/// ���� WIZ_MPP_COMBINE_Error(MacroPart_1, MacroPart_2) => MacroPart_1MacroPart_2 ����δ�ﵽԤ�ڵ�Macro��
/// ��������ֱ�ӽ�MacroPart_1��MacroPart_2�����ַ�������
/// �����������ȷ��Combine,�ͻ����WIZ_MPP_COMBINE_BRIDGE(Ma, cro),����ʱ�༭���ὫMacroPart_1��MacroPart_2չ��

/// �����##�����������ȼ�������,���ͬ����[##]������[��չ��]��ô�ͻ����MacroPart_1MacroPart_2�����
/// ͬ��#������Ҳ����ִ�����

#   define WIZ_MPP_COMBINE(X, Y)                WIZ_MPP_BRIDGE_COMBINE(X, Y)
#   define WIZ_MPP_BRIDGE_COMBINE(X, Y)         WIZ_MPP_BRIDGE_COMBINE_IMPL(X,Y)
#   define WIZ_MPP_BRIDGE_COMBINE_IMPL(X, Y)    X##Y

#endif /*WIZ_MPP_COMBINE*/

#   define WIZ_MPP_COMBINE_3(X, Y, Z)               WIZ_MPP_COMBINE(WIZ_MPP_COMBINE(X, Y), Z)
#   define WIZ_MPP_COMBINE_4(X, Y, Z, W)            WIZ_MPP_COMBINE(WIZ_MPP_COMBINE_3(X, Y, Z), W)

#endif /*__WIZ_BASIC_MPP_COMBINE_HPP__SHANHAOBO_19800429__*/
