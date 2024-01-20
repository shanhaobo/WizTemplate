#ifndef __WIZ_ADV_BITSFIELD_HPP__SHANHAOBO_19800429__
#define __WIZ_ADV_BITSFIELD_HPP__SHANHAOBO_19800429__

#include "../../01_Basic/01_Type/WizBasicTypeInt.hpp"
#include "../../01_Basic/04_TU/WizBasicTUBit.hpp"

namespace Wiz
{
    namespace Bitsfield
    {
        template<class StorageT>
        class Type
        {
            typedef StorageT    tStorage;
        public:
            Type()
            {
                this->m_Value = 0;
            }
            ~Type(){}
            explicit Type(tStorage Val)
            {
                this->m_Value = Val;
            }
        public:
            tStorage Get()
            {
                return this->m_Value;
            }
            ::Wiz::Void::type Reset(tStorage Val = 0)
            {
                this->m_Value = Val;
            }
            ////////////////////////////////////////////////////////////////////////
        public:
            ::Wiz::Void::type Set(const tStorage& Val)
            {
                ::Wiz::Bit::Set(this->m_Value, Val);
            }

            tStorage TestSet(const tStorage& Val)
            {
                return ::Wiz::Bit::TestSet(this->m_Value, Val);
            }

            ::Wiz::Void::type Unset(const tStorage& Val)
            {
                ::Wiz::Bit::Unset(this->m_Value, Val);
            }

            tStorage TestClear(const tStorage& Val)
            {
                return ::Wiz::Bit::TestClear(this->m_Value, Val);
            }

            ::Wiz::Void::type SetN(::Wiz::I::in n)
            {
                ::Wiz::Bit::SetN(this->m_Value, n)
            }

            tStorage TestSetN(::Wiz::I::in n)
            {
                return ::Wiz::Bit::TestSetN(this->m_Value, n);
            }
            ////////////////////////////////////////////////////////////////////////
        public:
            ::Wiz::Bool::type IsSet(const tStorage& Val) const
            {
                return ::Wiz::Bit::IsSet(this->m_Value, Val);
            }

            ::Wiz::Bool::type IsAnySet(const tStorage& Val) const
            {
                return ::Wiz::Bit::IsAnySet(this->m_Value, Val);
            }

            ::Wiz::Bool::type IsAllSet(const tStorage& Val) const
            {
                return ::Wiz::Bit::IsAllSet(this->m_Value, Val);
            }

            ::Wiz::Bool::type IsOnlySet(const tStorage& Val) const
            {
                return ::Wiz::Bit::IsOnlySet(this->m_Value, Val);
            }

            ::Wiz::Bool::type NotSet(const tStorage& Val) const
            {
                return ::Wiz::Bit::NotSet(this->m_Value, Val);
            }

            ::Wiz::Bool::type NotAnySet(const tStorage& Val) const
            {
                return ::Wiz::Bit::NotAnySet(this->m_Value, Val);
            }

            ::Wiz::Bool::type NotAllSet(const tStorage& Val) const
            {
                return ::Wiz::Bit::NotAllSet(this->m_Value, Val);
            }

            ::Wiz::Bool::type NotOnlySet(const tStorage& Val) const
            {
                return ::Wiz::Bit::NotOnlySet(this->m_Value, Val);
            }

            ::Wiz::Bool::type GetMarked(const tStorage& Val) const
            {
                return ::Wiz::Bit::GetMarked(this->m_Value, Val);
            }
            ////////////////////////////////////////////////////////////////////////

            ////////////////////////////////////////////////////////////////////////
            template<int CNT>
            tStorage GetLowBits() const
            {
                return this->m_Value & ::Wiz::Bit::MakeLowMark<tStorage, CNT>();
            }

            template<int B, int CNT> const
                tStorage GetBits()
            {
                return this->m_Value & ::Wiz::Bit::MakeMark<tStorage, B, CNT>();
            }
            template<int B, int E>
            tStorage GetRangeBits() const
            {
                return this->m_Value & ::Wiz::Bit::MakeRangeMark<tStorage, B, E>();
            }
            ////////////////////////////////////////////////////////////////////////

            ////////////////////////////////////////////////////////////////////////
            template<int B, int CNT>
            tStorage GetBitsToLow() const
            {
                return ::Wiz::Bit::GetBitsToLow<B, CNT, tStorage>(this->m_Value);
            }

            template<int B, int E>
            tStorage GetRangeBitsToLow() const
            {
                return ::Wiz::Bit::GetRangeBitsToLow<B, E, tStorage>(this->m_Value);
            }
            ////////////////////////////////////////////////////////////////////////
        private:
            tStorage m_Value;
        };
    } /// end of namespace Bitsfield
    namespace Bitsfield8
    {
        WIZ_DECLARE(::Wiz::Bitsfield::Type<::Wiz::U8::type>);
    } /// end of namespace Bitsfield8

    namespace Bitsfield16
    {
        WIZ_DECLARE(::Wiz::Bitsfield::Type<::Wiz::U16::type>);
    } /// end of namespace Bitsfield16

    namespace Bitsfield32
    {
        WIZ_DECLARE(::Wiz::Bitsfield::Type<::Wiz::U32::type>);
    } /// end of namespace Bitsfield32

    namespace Bitsfield64
    {
        WIZ_DECLARE(::Wiz::Bitsfield::Type<::Wiz::U64::type>);
    } /// end of namespace Bitsfield64
} /// end of namespace Wiz

#endif /*__WIZ_ADV_BITSFIELD_HPP__SHANHAOBO_19800429__*/
