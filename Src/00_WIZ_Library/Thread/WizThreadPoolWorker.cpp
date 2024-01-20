#include "WizThreadPoolWorker.hpp"

#include<iostream>

namespace Wiz
{
    namespace ThreadPool
    {
        namespace Worker
        {
            type::type(::Wiz::SharedPtr::Type<::Wiz::ThreadPool::SharedInfo::type> const & inSharedInfoPtr)
                : SharedInfoPtr(inSharedInfoPtr)
            {

            }

            ::Wiz::Void::type type::operator() ()
            {
                ::Wiz::Mutex::UniqueLock::type Lock(SharedInfoPtr->Mutex);   /// RAII construct:lock() destructor:unlock()
                while (true)
                {
                    if (SharedInfoPtr->TaskQueue.empty() == false)
                    {
                        auto Task = ::std::move(SharedInfoPtr->TaskQueue.front());
                        SharedInfoPtr->TaskQueue.pop();
                        Lock.unlock();
                        Task();
                        Lock.lock();
                    }
                    else if (SharedInfoPtr->ShutDown)
                    {
                        break;
                    }
                    else
                    {
                        SharedInfoPtr->Notifier.wait(Lock);
                    }
                }
            }
        } // namespace Worker
    } // namespace ThreadPool
} // namespace Wiz
