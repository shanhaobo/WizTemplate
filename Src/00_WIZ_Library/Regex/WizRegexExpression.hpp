#ifndef __WIZ_REGEX_EXPRESSION_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_EXPRESSION_HPP__SHANHAOBO_19800429__

#include "./WizRegexExpressionBase.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Expression
        {
            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////

            namespace CharSet
            {
                class type : public Terminal::Type<type>
                {
                protected:
                    typedef Terminal::Type<type> tSuper;
                public:
                    type() : tSuper()
                    {

                    }
                };
            } /// end of namespace CharSet

            namespace Sequence
            {
                class type : public Binary::Type<type>
                {
                protected:
                    typedef Binary::Type<type> tSuper;
                public:
                    type() : tSuper()
                    {

                    }
                };
            } /// end of namespace Sequence

            namespace Alternative
            {
                class type : public Binary::Type<type>
                {
                protected:
                    typedef Binary::Type<type> tSuper;
                public:
                    type() : tSuper()
                    {

                    }
                };
            } /// end of namespace Alternative

            namespace Repeat
            {
                class type : public Unary::Type<type>
                {
                protected:
                    typedef Unary::Type<type> tSuper;
                public:
                    type() : tSuper()
                    {

                    }
                };
            } /// end of namespace Repeat

            ////////////////////////////////////////////
            ////////////////////////////////////////////
            ////////////////////////////////////////////
        } /// end of namespace Expression
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_EXPRESSION_HPP__SHANHAOBO_19800429__
