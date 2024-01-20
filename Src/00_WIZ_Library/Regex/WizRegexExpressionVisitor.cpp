#include "./WizRegexExpressionVisitor.hpp"

namespace Wiz
{
    namespace Regex
    {
        namespace Expression
        {
            namespace Traverse
            {
                Bool::type type::Visit(CharSet::ref ioExpRef, Expression::ptr inParentPtr)
                {
                    return Bool::True;
                }
                Bool::type type::Visit(Sequence::ref ioExpRef, Expression::ptr inParentPtr)
                {
                    if (::Wiz::IsValidPtr(ioExpRef.m_LeftChildPtr))
                    {
                        ioExpRef.m_LeftChildPtr->Accept(*this, &ioExpRef);
                    }
                    if (::Wiz::IsValidPtr(ioExpRef.m_RightChildPtr))
                    {
                        ioExpRef.m_RightChildPtr->Accept(*this, &ioExpRef);
                    }

                    return Bool::True;
                }
                Bool::type type::Visit(Alternative::ref ioExpRef, Expression::ptr inParentPtr)
                {
                    if (::Wiz::IsValidPtr(ioExpRef.m_LeftChildPtr))
                    {
                        if (ioExpRef.m_LeftChildPtr->Accept(*this, &ioExpRef))
                        {
                            return Bool::True;
                        }
                    }
                    if (::Wiz::IsValidPtr(ioExpRef.m_RightChildPtr))
                    {
                        return ioExpRef.m_RightChildPtr->Accept(*this, &ioExpRef);
                    }

                    return Bool::False;
                }
                Bool::type type::Visit(Repeat::ref ioExpRef, Expression::ptr inParentPtr)
                {
                    if (::Wiz::IsValidPtr(ioExpRef.m_OnlyChildPtr))
                    {
                        ioExpRef.m_OnlyChildPtr->Accept(*this, &ioExpRef);
                    }

                    return Bool::True;
                }
            } /// end of namespace ThompsonConstruction
        } /// end of namespace State
    } /// end of namespace Regex
} /// end of namespace Wiz
