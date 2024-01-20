#ifndef __WIZ_ADV_GRAPH_LINK_HPP__SHANHAOBO_19800429__
#define __WIZ_ADV_GRAPH_LINK_HPP__SHANHAOBO_19800429__

#include "./WizAdvGraphForwardDeclare.hpp"

namespace Wiz
{
    namespace Graph
    {
        namespace Link
        {
            class type
            {
                friend class ::Wiz::Graph::type;
            public:
                type() : m_BeginNodePtr(WIZ_NULLPTR), m_EndNodePtr(WIZ_NULLPTR)
                {

                }

                virtual ~type()
                {

                }
            public:

            protected:

                Node::ptr m_BeginNodePtr;
                Node::ptr m_EndNodePtr;
            };
        } /// end of namespace Link
    } /// end of namespace Graph
} /// end of namespace Wiz

#endif /// __WIZ_ADV_GRAPH_LINK_HPP__SHANHAOBO_19800429__
