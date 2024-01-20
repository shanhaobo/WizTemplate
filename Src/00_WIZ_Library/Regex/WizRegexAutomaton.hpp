#ifndef __WIZ_REGEX_AUTOMATON_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_AUTOMATON_HPP__SHANHAOBO_19800429__

#include "./WizRegexBaseType.hpp"

#include "./WizRegexState.hpp"
#include "./WizRegexTransition.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Automaton
        {
            class Type : public ::Wiz::MemObj::Type<Allocator::Automaton::type, ::Wiz::Graph::type>
            {
            protected:
                typedef ::Wiz::Graph::type tSuper;

            public:
                Type()
                {

                }
            public:

                Transition::ptr StateTransition(State::ptr inBeginStatePtr, State::ptr inEndStatePtr);

                Transition::Epsilon::ptr EpsilonTransition(State::ptr inBeginStatePtr, State::ptr inEndStatePtr);

            protected:

                State::ptr  m_StartState;
            };
        } /// end of namespace Automaton
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_AUTOMATON_HPP__SHANHAOBO_19800429__
