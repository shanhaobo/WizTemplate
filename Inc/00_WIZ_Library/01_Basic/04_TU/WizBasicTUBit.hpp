#ifndef __WIZ_BASIC_TU_BIT_HPP__SHANHAOBO__19800429__
#define __WIZ_BASIC_TU_BIT_HPP__SHANHAOBO__19800429__

#include "../01_Type/WizBasicType.hpp"

namespace Wiz
{
    namespace Bit
    {
        ////////////////////////////////////////////////////////////////////////
        template<class T, class U>
        WIZ_INLINE ::Wiz::Void::type Set(T& BtsFld, const U& Val)
        {
            BtsFld |= Val;
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Void::type Unset(T& BtsFld, const U& Val)
        {
            BtsFld &= ~Val;
        }

        template<class T>
        WIZ_INLINE ::Wiz::Void::type SetN(T& BtsFld, ::Wiz::I::in n)
        {
            BtsFld |= (1 << n);
        }

        //////////////////////////////////////////////////////////////////////////

        template<class T, class U>
        WIZ_INLINE T TestSet(const T& BtsFld, const U& Val)
        {
            return BtsFld | Val;
        }

        template<class T, class U>
        WIZ_INLINE T TestUnset(const T& BtsFld, const U& Val)
        {
            return BtsFld & (~Val);
        }

        template<class T>
        WIZ_INLINE T TestSetN(const T& BtsFld, ::Wiz::I::in n)
        {
            return BtsFld | (1 << n);
        }

        //////////////////////////////////////////////////////////////////////////

        /// Only For Single Bit Flags
        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type IsSet(const T& BtsFld, const U& Val)
        {
            /// IsPowerOfTwo(Val)
            WIZ_ASSERT_COMMENT((Val & Val - 1) == 0, "This Value is combined by multi flags, So please use [IsAnySet|IsAllSet|IsOnlySet]");
            return (BtsFld & Val) != 0;
        }

        /// Val�е�����һ��Bit����BtsFld,��ΪTrue
        /// BtsFld has any of bits that included by Val
        /// BtsFld = Flag1 | Flag2 | Flag3 | Flag4;
        /// Val = Flag1 | Flag2 ------> True 
        /// Val = Flag1 | Flag3 | Flag5 -----> True
        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type IsAnySet(const T& BtsFld, const U& Val)
        {
            return (BtsFld & Val) != 0;
        }

        /// Val�е����е�Bit����������BtsFld,��ΪTrue
        /// BtsFld has all of  the bits that included by Val
        /// BtsFld = Flag1 | Flag2 | Flag3 | Flag4;
        /// Val = Flag1 | Flag2 ------> True
        /// Val = Flag1 | Flag3 | Flag5 -----> False(Flag5)
        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type IsAllSet(const T& BtsFld, const U& Val)
        {
            return (BtsFld & Val) == Val;
        }

        /// BtsFldֻ����Val��Bit������е�ֵֹģ�
        /// BtsFld only has the bits that included by Val (some bits included by Val Is not included by BtsFld)
        /// Val = Flag1 | Flag2 | Flag3 | Flag4;
        /// BtsFld = Flag1 | Flag4 -----> True
        /// BtsFld = Flag1 | Flag5 -----> False(Flag5)
        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type IsOnlySet(const T& BtsFld, const U& Val)
        {
            return (BtsFld & Val) == BtsFld;
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type NotSet(const T& BtsFld, const U& Val)
        {
            /// IsPowerOfTwo(Val)
            WIZ_ASSERT_COMMENT((Val & Val - 1) == 0, "This Value is combined by multi flags, So please use NotAnySet or NotAllSet");
            return (BtsFld & Val) == 0;
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type NotAnySet(const T& BtsFld, const U& Val)
        {
            return !::Wiz::Bit::IsAnySet(BtsFld, Val);
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type NotAllSet(const T& BtsFld, const U& Val)
        {
            return !::Wiz::Bit::IsAllSet(BtsFld, Val);
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type NotOnlySet(const T& BtsFld, const U& Val)
        {
            return !::Wiz::Bit::IsOnlySet(BtsFld, Val);
        }

        template<class T, class U>
        WIZ_INLINE ::Wiz::Bool::type GetMarked(const T& BtsFld, const U& Val)
        {
            return BtsFld & Val;
        }
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        /// MakeMark<::Wiz::U16::type, 6>() =>  0000 0000 0011 1111
        template<typename RetT, int CNT>
        WIZ_INLINE RetT MakeLowMark()
        {
            return (RetT(1) << (CNT)) - 1;
        }

        /// B �� 0 Ϊ��
        /// MakeMark<::Wiz::U16::type, 5, 6>() =>  0000 0111 1110 0000
        template<typename RetT, int B, int CNT>
        WIZ_INLINE RetT MakeMark()
        {
            return MakeLowMark<RetT, CNT>() << B;
        }

        /// B �� 0 Ϊ��
        /// MakeMarkRange<::Wiz::U16::type, 5, 13>() =>  0001 1111 1110 0000
        template<typename RetT, int B, int E>
        WIZ_INLINE RetT MakeRangeMark()
        {
            return MakeMark<RetT, B, E - B>();
        }
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        template<int CNT, typename T>
        WIZ_INLINE T GetLowBits(T Num)
        {
            return Num & MakeLowMark<T, CNT>();
        }

        template<int B, int CNT, typename T>
        WIZ_INLINE T GetBits(T Num)
        {
            return Num & MakeMark<T, B, CNT>();
        }
        template<int B, int E, typename T>
        WIZ_INLINE T GetRangeBits(T Num)
        {
            return Num & MakeRangeMark<T, B, E>();
        }
        ////////////////////////////////////////////////////////////////////////

        ////////////////////////////////////////////////////////////////////////
        template<int B, int CNT, typename T>
        WIZ_INLINE T GetBitsToLow(T Num)
        {
            return GetLowBits<CNT, T>(Num >> B);
        }

        template<int B, int E, typename T>
        WIZ_INLINE T GetRangeBitsToLow(T Num)
        {
            return GetRangeBits<B, E, T>(Num) >> B;
        }
        ////////////////////////////////////////////////////////////////////////

        namespace Separate
        {
            namespace By1
            {
                /// ---- ---- 7654 3210 => -7-6 -5-4 -3-2 -1-0
                WIZ_INLINE ::Wiz::U16::type Low8(
                    ::Wiz::U16::in inX
                    )
                {
                    ::Wiz::U16::type Ret = ::Wiz::Bit::GetLowBits<8, ::Wiz::U16::type>(inX);

                    /// - ��ʾ 0,���˳��������ֱ�ʾԭʼ���ݵ�BIT��λ�����
                    /// x = ---- ---- 7654 3210
                    /// x = ---- 7654 ---- 3210 <=  ---- ---- 7654 3210 
                    ///                           | ---- 7654 3210 ----
                    ///                           = ---- 7654 xxxx 3210
                    ///                           & 0000 1111 0000 1111 /// ���ǳ���0x0F0F
                    ///                           = ---- 7654 ---- 3210
                    /// x = --76 --54 --32 --10 <=  ---- 7654 ---- 3210
                    ///                           | --76 54-- --32 10--
                    ///                           = --76 xx54 --32 xx10
                    ///                           & 0011 0011 0011 0011 /// ���ǳ���0x3333
                    ///                           = --76 --54 --32 --10
                    /// x = -7-6 -5-4 -3-2 -1-0 <=  --76 --54 --32 --10
                    ///                           | -76- -54- -32- -10-
                    ///                           = -7x6 -5x4 -3x2 -1x0
                    ///                           & 0101 0101 0101 0101 /// ���ǳ���0x5555
                    ///                           = -7-6 -5-4 -3-2 -1-0
                    Ret = (Ret | (Ret << 4)) & 0x0F0F;
                    Ret = (Ret | (Ret << 2)) & 0x3333;
                    Ret = (Ret | (Ret << 1)) & 0x5555;

                    return inX;
                }

                /// ---- ---- 7654 3210 => -7-6 -5-4 -3-2 -1-0
                WIZ_INLINE ::Wiz::U32::type Low16(
                    ::Wiz::U32::in inX
                    )
                {
                    ::Wiz::U32::type Ret = ::Wiz::Bit::GetLowBits<16, ::Wiz::U32::type>(inX);

                    Ret = (Ret | (Ret << 8)) & 0x00FF00FF;
                    Ret = (Ret | (Ret << 4)) & 0x0F0F0F0F;
                    Ret = (Ret | (Ret << 2)) & 0x33333333;
                    Ret = (Ret | (Ret << 1)) & 0x55555555;

                    return Ret;
                }

                /// ---- ---- 7654 3210 => -7-6 -5-4 -3-2 -1-0
                WIZ_INLINE ::Wiz::U64::type Low32(
                    ::Wiz::U64::in inX
                    )
                {
                    ::Wiz::U64::type Ret = ::Wiz::Bit::GetLowBits<32, ::Wiz::U64::type>(inX);

                    Ret = (Ret | (Ret << 16)) & 0x0000FFFF0000FFFF;
                    Ret = (Ret | (Ret <<  8)) & 0x00FF00FF00FF00FF;
                    Ret = (Ret | (Ret <<  4)) & 0x0F0F0F0F0F0F0F0F;
                    Ret = (Ret | (Ret <<  2)) & 0x3333333333333333;
                    Ret = (Ret | (Ret <<  1)) & 0x5555555555555555;

                    return Ret;
                }
            } /// end of namespace By1


            namespace By2
            {
                /// ---- ---- ---43210 => ---4--3--2--1--0
                WIZ_INLINE ::Wiz::U16::type Low5(
                    ::Wiz::U16::in inX
                    )
                {
                    ::Wiz::U16::type Ret = ::Wiz::Bit::GetLowBits<5, ::Wiz::U16::type>(inX);

                    Ret = (Ret | (Ret<<8)) & 0x100F;
                    Ret = (Ret | (Ret<<4)) & 0x10C3;
                    Ret = (Ret | (Ret<<2)) & 0x1249;

                    return Ret;
                }

                /// ---- ---- ---43210 => ---4--3--2--1--0
                WIZ_INLINE ::Wiz::U32::type Low10(
                    ::Wiz::U32::in inX
                    )
                {
                    ::Wiz::U32::type Ret = ::Wiz::Bit::GetLowBits<10, ::Wiz::U32::type>(inX);

                    Ret = (Ret | (Ret << 16)) & 0x030000FF;
                    Ret = (Ret | (Ret <<  8)) & 0x0300F00F;
                    Ret = (Ret | (Ret <<  4)) & 0x030C30C3;
                    Ret = (Ret | (Ret <<  2)) & 0x09249249;

                    return Ret;
                }

                /// ---- ---- ---43210 => ---4--3--2--1--0
                WIZ_INLINE ::Wiz::U64::type Low21(
                    ::Wiz::U64::in inX
                    )
                {
                    ::Wiz::U64::type Ret = ::Wiz::Bit::GetLowBits<21, ::Wiz::U64::type>(inX);

                    Ret = (Ret | (Ret << 32)) & 0x001F00000000FFFF;
                    Ret = (Ret | (Ret << 16)) & 0x001F0000FF0000FF;
                    Ret = (Ret | (Ret <<  8)) & 0x010F00F00F00F00F;
                    Ret = (Ret | (Ret <<  4)) & 0x10C30C30C30C30C3;
                    Ret = (Ret | (Ret <<  2)) & 0x1249249249249249;

                    return Ret;
                }
            } /// end of namespace By2
        } /// end of namespace Separate
        ////////////////////////////////////////////////////////////////////////
        ////////////////////////////////////////////////////////////////////////
    } /// namespace Bit
} /// end of namespace Wiz

#endif /*__WIZ_BASIC_TU_BIT_HPP__SHANHAOBO__19800429__*/
