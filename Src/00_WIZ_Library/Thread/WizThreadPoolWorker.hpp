#pragma once

#include "../../../Inc/00_WIZ_Library/Thread/WizThreadPool.hpp"

namespace Wiz
{
    namespace ThreadPool
    {
        namespace Worker
        {
            WIZ_CLASS
            {
            public:
                type(::Wiz::SharedPtr::Type<::Wiz::ThreadPool::SharedInfo::type> const & inSharedInfo);

                ::Wiz::Void::type operator() ();

            private:
                ::Wiz::SharedPtr::Type<::Wiz::ThreadPool::SharedInfo::type>  SharedInfoPtr;
            };
        } // namespace Worker
    } // namespace ThreadPool
} // namespace Wiz
