#ifndef __WIZ_BASIC_MPP_STRINGIZE_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_MPP_STRINGIZE_HPP__SHANHAOBO_19800429__

#ifndef WIZ_MPP_STRINGIZE

/// ʾ��:Macro_1,�Ƿֱ���һ����, ����Ҫת����"Macro"
/// #define  Macro_1   Macro
/// #define  WIZ_MPP_STRINGIZE_Error(x)  #x
/// ���� WIZ_MPP_STRINGIZE_Error(Macro_1) => "Macro_1" ����δ�ﵽԤ�ڵ�"Macro"��
/// ��������ֱ�ӽ�Macro_1�����ַ�������
/// �����������ȷ��WIZ_MPP_STRINGIZE,�ͻ����WIZ_MPP_BRIDGE_STRINGIZE((text)),����ʱ�༭���ὫMacro_1չ��

#   define WIZ_MPP_STRINGIZE(text)              WIZ_MPP_BRIDGE_STRINGIZE((text))
#   define WIZ_MPP_BRIDGE_STRINGIZE(text)       WIZ_MPP_BRIDGE_STRINGIZE_IMPL text

#   define WIZ_MPP_BRIDGE_STRINGIZE_IMPL(text)  #text

#endif /*WIZ_MPP_STRINGIZE*/

#endif /*__WIZ_BASIC_MPP_STRINGIZE_HPP__SHANHAOBO_19800429__*/
