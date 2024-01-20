#pragma once

#include "WizThreadPoolBase.hpp"

#include "WizThreadPoolWrappedTask.hpp"

namespace Wiz
{
    namespace ThreadPool
    {
        WIZ_CLASS : public ::Wiz::ThreadPool::Base::type
        {
            typedef ::Wiz::ThreadPool::Base::type super;

        public:
            type(::Wiz::Size::in inThreadNum = 0);

            virtual ~type();

        public:
            template<class FuncT, class... ArgsT>
            auto AcceptTask(FuncT const & inFunc, ArgsT &&... inArgs) -> ::Wiz::Thread::Receipt::Type<decltype(inFunc(inArgs...))>
            {
                using WrappedTaskT = ::Wiz::ThreadPool::WrappedTask::Helper::Type<FuncT, ArgsT...>;
                
                auto const WTPtr = new WrappedTaskT{inFunc, ::std::forward<ArgsT>(inArgs)...};

                auto Receipt = WTPtr->Promise.get_future();

                /// ThreadPool::WrappedTask::Type::operator() -> ::Wiz::Void::type
                ReceiveTask([WTPtr](){ (*WTPtr)(); delete WTPtr;});

                return Receipt;
            }

            template<class ReturnT>
            auto AcceptTaskBatch(Wiz::Vector::Type< ::Wiz::Function::Type<ReturnT()> >&& TaskArray) -> Wiz::Vector::Type< ::Wiz::Thread::Receipt::Type<ReturnT> >
            {
                Wiz::Vector::Type< ::Wiz::Thread::Receipt::Type<ReturnT> > Result;

                Wiz::Vector::Type< ::Wiz::ThreadPool::WrappedTask::type > WrappedTaskArray;

                for (auto && Task : TaskArray)
                {
                    using WrappedTaskT = ::Wiz::ThreadPool::WrappedTask::Type<ReturnT>;
                    
                    auto const WTPtr = new WrappedTaskT{::std::forward< ::Wiz::Function::Type<ReturnT()> >(Task)};

                    Result.emplace_back(WTPtr->Promise.get_future());

                    /// ThreadPool::WrappedTask::Type::operator() -> ::Wiz::Void::type
                    WrappedTaskArray.emplace_back([WTPtr](){ (*WTPtr)(); delete WTPtr;});
                }
    
                ReceiveTaskBatch(WrappedTaskArray);

                return Result;
            }
        };
    } // namespace Task
} // namespace Wiz
