#ifndef __WIZ_REGEX_STATE_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_STATE_HPP__SHANHAOBO_19800429__

#include "./WizRegexBaseType.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace State
        {
            class type : public ::Wiz::MemObj::Type<Allocator::State::type, ::Wiz::Graph::Node::type>
            {
            public:
                type() : m_Final(Bool::False)
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
        } /// end of namespace State
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_STATE_HPP__SHANHAOBO_19800429__
