#pragma once

#include "WizThreadBaseType.hpp"

namespace Wiz
{
    namespace ThreadPool
    {
        namespace Base
        {
            WIZ_CLASS
            {
            public:
                type(::Wiz::Size::in inThreadNum = 0);

                virtual ~type();

            public:
                ::Wiz::Void::type AddThread(::Wiz::Size::in inNum);

                ::Wiz::Void::type ShutDown();

                ::Wiz::Size::type ThreadNum() const;

            public:
                template<class FuncT, class... ArgsT>
                ::Wiz::Void::type ReceiveTask(FuncT const & inFunc, ArgsT &&... inArgs)
                {
                    auto const TFWPtr = new WrappedTask::Type{::std::bind(inFunc, ::std::forward<ArgsT>(inArgs)...)};
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);

                        SharedInfoPtr->TaskQueue.emplace([TFWPtr]() { (*TFWPtr)(); delete TFWPtr; });
                    }
                    SharedInfoPtr->Notifier.notify_one();
                }

                template<class FuncT, class... ArgsT>
                ::Wiz::Void::type ReceiveTask(FuncT && inFunc, ArgsT &&... inArgs)
                {
                    auto const TFWPtr = new WrappedTask::Type{::std::bind(::std::forward<FuncT>(inFunc), ::std::forward<ArgsT>(inArgs)...)};
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);

                        SharedInfoPtr->TaskQueue.emplace([TFWPtr]() { (*TFWPtr)(); delete TFWPtr; });
                    }
                    SharedInfoPtr->Notifier.notify_one();
                }

            public:
                ::Wiz::Void::type ReceiveTask(ThreadPool::WrappedTask::type const & inTask)
                {
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);
                        SharedInfoPtr->TaskQueue.emplace(inTask);
                    }
                    SharedInfoPtr->Notifier.notify_one();
                }

                ::Wiz::Void::type ReceiveTask(ThreadPool::WrappedTask::type && inTask)
                {
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);
                        SharedInfoPtr->TaskQueue.emplace(::std::forward<ThreadPool::WrappedTask::type>(inTask));
                    }
                    SharedInfoPtr->Notifier.notify_one();
                }

            public:
                ::Wiz::Void::type ReceiveTaskBatch(::Wiz::Vector::Type<ThreadPool::WrappedTask::type> const & inTaskArray)
                {
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);
                        for (auto & Task : inTaskArray)
                        {
                            SharedInfoPtr->TaskQueue.emplace(Task);
                        }
                    }
                    SharedInfoPtr->Notifier.notify_all();
                }

                ::Wiz::Void::type ReceiveTaskBatch(::Wiz::Vector::Type<ThreadPool::WrappedTask::type> && inTaskArray)
                {
                    {
                        ::Wiz::Mutex::LockGuard::type TaskQueueLock(SharedInfoPtr->Mutex);
                        for (auto && Task : inTaskArray)
                        {
                            SharedInfoPtr->TaskQueue.emplace(::std::forward<ThreadPool::WrappedTask::type>(Task));
                        }
                    }
                    SharedInfoPtr->Notifier.notify_all();
                }
            private:
                ::Wiz::SharedPtr::Type<ThreadPool::SharedInfo::type>    SharedInfoPtr;

                ::Wiz::Vector::Type<::Wiz::Thread::type>                ThreadArray;
            };
        } // namespace Base
    } // namespace ThreadPool
} // namespace Wiz
