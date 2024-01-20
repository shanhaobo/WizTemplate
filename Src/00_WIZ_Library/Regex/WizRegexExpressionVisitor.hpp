#ifndef __WIZ_REGEX_EXPRESSION_VISITOR_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_EXPRESSION_VISITOR_HPP__SHANHAOBO_19800429__

#include "./WizRegexExpression.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Expression
        {
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            /// Visitor
            namespace Visitor
            {
                struct type : public ::Wiz::DP::Visitor::Type<EnumParamWrapper(CharSet::type, Sequence::type, Alternative::type, Repeat::type)>
                {
                    virtual Bool::type Visit(CharSet::ref ioExpRef, Expression::ptr) = 0;
                    virtual Bool::type Visit(Sequence::ref ioExpRef, Expression::ptr) = 0;
                    virtual Bool::type Visit(Alternative::ref ioExpRef, Expression::ptr) = 0;
                    virtual Bool::type Visit(Repeat::ref ioExpRef, Expression::ptr) = 0;
                };
            } /// end of namespace Visitor

            namespace Traverse
            {
                struct type : Expression::Visitor::type
                {
                    type() : m_AutomatonPtr(WIZ_NULLPTR)
                    {
                    }

                    Automaton::ptr m_AutomatonPtr;

                    virtual Bool::type Visit(CharSet::ref ioExpRef, Expression::ptr inParentPtr);

                    virtual Bool::type Visit(Sequence::ref ioExpRef, Expression::ptr inParentPtr);

                    virtual Bool::type Visit(Alternative::ref ioExpRef, Expression::ptr inParentPtr);

                    virtual Bool::type Visit(Repeat::ref ioExpRef, Expression::ptr inParentPtr);
                };
            } /// end of namespace Traverse
        } /// end of namespace Expression
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_EXPRESSION_VISITOR_HPP__SHANHAOBO_19800429__
