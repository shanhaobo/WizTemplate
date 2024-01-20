#ifndef __WIZ_REGEX_BASETYPE_HPP__SHANHAOBO_19800429__
#define __WIZ_REGEX_BASETYPE_HPP__SHANHAOBO_19800429__

#include "../../../Inc/00_WIZ_Library/01_Basic/01_Type/WizBasicType.hpp"
#include "../../../Inc/00_WIZ_Library/01_Basic/04_TU/WizBasicTU.hpp"
#include "../../../Inc/00_WIZ_Library/01_Basic/05_Mem/WizBasicMem.hpp"
#include "../../../Inc/00_WIZ_Library/02_Adv/01_Type/Graph/WizAdvGraph.hpp"
#include "../../../Inc/00_WIZ_Library/05_DP/Visitor/WizDPVisitor.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace OBJ_CAT
        {
            enum eOC_State
            {
            };

            enum eOC_Transition
            {
            };


            enum eOC_Automaton
            {
            };


            enum eOC_Expression
            {
            };
        }

        namespace Allocator
        {
            namespace State
            {
                typedef ::Wiz::Allocator::Categorized<OBJ_CAT::eOC_State>::Type      type;
            } /// end of namespace State

            namespace Transition
            {
                typedef ::Wiz::Allocator::Categorized<OBJ_CAT::eOC_Transition>::Type type;
            } /// end of namespace Transition

            namespace Automaton
            {
                typedef ::Wiz::Allocator::Categorized<OBJ_CAT::eOC_Automaton>::Type  type;
            } /// end of namespace Automaton

            namespace Expression
            {
                typedef ::Wiz::Allocator::Categorized<OBJ_CAT::eOC_Expression>::Type  type;
            } /// end of namespace Expression
        } /// end of namespace Allocator

        namespace State
        {
            WIZ_FORWARD_DECLARE_CLASS;
        } /// end of namespace State

        namespace Transition
        {
            namespace Epsilon
            {
                WIZ_FORWARD_DECLARE_CLASS;
            } /// end of namespace Epsilon

            WIZ_FORWARD_DECLARE_CLASS;
        } /// end of namespace Transition

        namespace Automaton
        {
            WIZ_FORWARD_DECLARE_CLASS;
        } /// end of namespace Automaton

        namespace Expression
        {
            namespace Visitor
            {
                WIZ_FORWARD_DECLARE_STRUCT;
            } /// end of namespace Visitor

            namespace CharSet
            {
                WIZ_FORWARD_DECLARE_CLASS;
            } /// end of namespace CharSet;

            namespace Sequence
            {
                WIZ_FORWARD_DECLARE_CLASS;
            } /// end of namespace Sequence

            namespace Alternative
            {
                WIZ_FORWARD_DECLARE_CLASS;
            } /// end of namespace Sequence

            namespace Repeat
            {
                WIZ_FORWARD_DECLARE_CLASS;
            } /// end of namespace Repeat

            WIZ_FORWARD_DECLARE_CLASS;
        } /// end of namespace Expression
    } /// end of namespace Regex
} /// end of namespace Wiz

#endif /// __WIZ_REGEX_BASETYPE_HPP__SHANHAOBO_19800429__
