#include "./WizRegexAutomaton.hpp"

#include "./WizRegexExpressionVisitor.hpp"
#include "./WizRegexExpression.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Automaton
        {
            Transition::ptr Type::StateTransition(State::ptr inBeginStatePtr, State::ptr inEndStatePtr)
            {
                Transition::ptr TransPtr = WIZ_NEW Transition::type;
                if (::Wiz::IsValidPtr(TransPtr))
                {
                    if (LinkNode(TransPtr, inBeginStatePtr, inEndStatePtr))
                    {
                        insertLink(TransPtr);
                        return TransPtr;
                    }

                    WIZ_DEL TransPtr;
                    TransPtr = WIZ_NULL;
                }

                return WIZ_NULL;
            }


            Transition::Epsilon::ptr Type::EpsilonTransition(State::ptr inBeginStatePtr, State::ptr inEndStatePtr)
            {
                Transition::Epsilon::ptr EpsilonPtr = WIZ_NEW Transition::Epsilon::type;
                if (::Wiz::IsValidPtr(EpsilonPtr))
                {
                    if (LinkNode(EpsilonPtr, inBeginStatePtr, inEndStatePtr))
                    {
                        insertLink(EpsilonPtr);
                        return EpsilonPtr;
                    }

                    WIZ_DEL EpsilonPtr;
                    EpsilonPtr = WIZ_NULL;
                }

                return WIZ_NULL;
            }
        } /// end of namespace Automaton
    } /// end of namespace Regex
} /// end of namespace Wiz

