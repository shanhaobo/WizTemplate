#ifndef __WIZ_BASIC_MPP_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_MPP_HPP__SHANHAOBO_19800429__

#include "./WizBasicMPPCombine.hpp"

#include "./WizBasicMPPStringize.hpp"

#include "./WizBasicMPPBool.hpp"

#include "./WizBasicMPPIf.hpp"

#include "./WizBasicMPPBitOp.hpp"

#include "./WizBasicMPPInc.hpp"
#include "./WizBasicMPPDec.hpp"

#include "./WizBasicMPPLoop.hpp"
#include "./WizBasicMPPRepeatFile.hpp"

#include "./WizBasicMPPTupleElem.hpp"

//////////////////////////////////////////////////////////////////////////
/// ����ö�ٺ��������İ�����
#define WIZ_COMMA   ,
#define WIZ_SPACE

#define WIZ_COMMA_IF(C)                 WIZ_MPP_IF(C, WIZ_COMMA, WIZ_SPACE)

/// WIZ_ENUM_PARAM_M_X(��ѭ������(Sum)�� ��ǰѭ������(Curr)�� ����(Param)) �ڴ����У���ѭ����������
/// X0, X1, X2
#define WIZ_ENUM_PARAM_M_X(S, C, P)     WIZ_COMMA_IF(C) WIZ_MPP_COMBINE(P, C)
#define WIZ_ENUM_PARAM_X(S, X)          WIZ_MPP_LOOP(S, WIZ_ENUM_PARAM_M_X, X)

/// WIZ_ENUM_PARAM_M_XY(��ѭ�������� ��ǰѭ�������� ����) �ڴ����У���ѭ����������
/// T0 X0, T1 X1
#define WIZ_ENUM_PARAM_M_XY(S, C, P)    WIZ_COMMA_IF(C) WIZ_MPP_COMBINE(WIZ_MPP_TUPLE_ELEM(2, 0, P), C) WIZ_MPP_COMBINE(WIZ_MPP_TUPLE_ELEM(2, 1, P), C)
#define WIZ_ENUM_PARAM_XY(S, X, Y)      WIZ_MPP_LOOP(S, WIZ_ENUM_PARAM_M_XY, (X, Y))

namespace Wiz
{
    typedef void EnumParamWrapper;
} /// end of namespace Wiz

//////////////////////////////////////////////////////////////////////////

#endif /*__WIZ_BASIC_MPP_HPP__SHANHAOBO_19800429__*/
