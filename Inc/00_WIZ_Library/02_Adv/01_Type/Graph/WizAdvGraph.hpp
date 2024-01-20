#ifndef __WIZ_GRAPH_HPP__SHANHAOBO_19800429__
#define __WIZ_GRAPH_HPP__SHANHAOBO_19800429__

#include "./WizAdvGraphNode.hpp"
#include "./WizAdvGraphLink.hpp"

namespace Wiz
{
    namespace Graph
    {
        class type
        {
        protected:
            typedef Set::Type<Link::ptr> tLinkSet;
            typedef Set::Type<Node::ptr> tNodeSet;

        public:
            type()
            {

            }

            virtual ~type()
            {

            }
        public:
            static Bool::type LinkNode(Link::ptr inLinkPtr, Node::ptr inBeginNodePtr, Node::ptr inEndNodePtr)
            {
                if (::Wiz::IsValidPtr(inLinkPtr) && ::Wiz::IsValidPtr(inBeginNodePtr) && ::Wiz::IsValidPtr(inEndNodePtr))
                {
                    inLinkPtr->m_BeginNodePtr = inBeginNodePtr;
                    inLinkPtr->m_EndNodePtr = inEndNodePtr;

                    inBeginNodePtr->m_OutputSet.insert(inLinkPtr);
                    inEndNodePtr->m_InputSet.insert(inLinkPtr);

                    return Bool::True;
                }

                return Bool::False;
            }

            Void::type insertLink(Link::ptr inLinkPtr)
            {
                LinkSet.insert(inLinkPtr);
            }

            Void::type insertNode(Node::ptr inNodePtr)
            {
                NodeSet.insert(inNodePtr);
            }

        protected:
            tNodeSet NodeSet;
            tLinkSet LinkSet;
        };
    } /// end of namespace Graph
} /// end of namespace Wiz

#endif /// __WIZ_GRAPH_HPP__SHANHAOBO_19800429__
