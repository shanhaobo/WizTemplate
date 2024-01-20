#ifndef __WIZ_REGEX_EXPRESSION_BASE_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_EXPRESSION_BASE_HPP__SHANHAOBO_19800429__

#include "./WizRegexBaseType.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Expression
        {
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            /// ::Wiz::DP::Visitable::Base::Type
            class type : public ::Wiz::DP::Visitable::Base::Type< Visitor::type, Bool::type, Expression::ptr, ::Wiz::MemObj::Type<Allocator::Expression::type> >
            {
            protected:
                typedef ::Wiz::DP::Visitable::Base::Type< Visitor::type, Bool::type, Expression::ptr, ::Wiz::MemObj::Type<Allocator::Expression::type> > tSuper;

            public:
                type() : tSuper(), m_Final(Bool::False)
                {

                }

            public:
                WIZ_INLINE Bool::type IsFinal()
                {
                    return m_Final;
                };

            protected:
                Bool::type m_Final;
            };

            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            /// ::Wiz::DP::Visitable::Type
            namespace Terminal
            {
                template<class DerivedT>
                class Type : public ::Wiz::DP::Visitable::Type<DerivedT, Expression::type>
                {
                protected:
                    Type()
                    {

                    }
                protected:

                };
            } /// end of namespace Terminal

            namespace Unary
            {
                template<class DerivedT>
                class Type : public ::Wiz::DP::Visitable::Type<DerivedT, Expression::type>
                {
                protected:
                    Type() : m_OnlyChildPtr(WIZ_NULLPTR)
                    {

                    }
                public:
                    Expression::ptr m_OnlyChildPtr;
                };
            } /// end of namespace Unary

            namespace Binary
            {
                template<class DerivedT>
                class Type : public ::Wiz::DP::Visitable::Type<DerivedT, Expression::type>
                {
                protected:
                    Type() : m_LeftChildPtr(WIZ_NULLPTR), m_RightChildPtr(WIZ_NULLPTR)
                    {

                    }
                public:
                    Expression::ptr m_LeftChildPtr;
                    Expression::ptr m_RightChildPtr;
                };
            } /// end of namespace Binary

            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////
        } /// end of namespace Expression
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_EXPRESSION_BASE_HPP__SHANHAOBO_19800429__
