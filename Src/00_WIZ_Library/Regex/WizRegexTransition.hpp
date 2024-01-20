#ifndef __WIZ_REGEX_TRANSITION_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_TRANSITION_HPP__SHANHAOBO_19800429__

#include "./WizRegexBaseType.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Transition
        {
            namespace Epsilon
            {
                class type : public MemObj::Type<Allocator::Transition::type, ::Wiz::Graph::Link::type>
                {
                public:
                    type()
                    {

                    }
                public:

                protected:
                };
            } /// end of namespace Epsilon

            class type : public Epsilon::type
            {
            protected:
                typedef Epsilon::type tSuper;
            public:
                type() : tSuper()
                {

                }
            public:

            protected:
            };
        } /// end of namespace Transition
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_TRANSITION_HPP__SHANHAOBO_19800429__
