#include "../../../Inc/00_WIZ_Library/Thread/WizThreadPoolBase.hpp"

#include "WizThreadPoolWorker.hpp"

namespace Wiz
{
    namespace ThreadPool
    {
        namespace Base
        {
            type::type(::Wiz::Size::in inNum)
                : SharedInfoPtr(::Wiz::SharedPtr::Make<::Wiz::ThreadPool::SharedInfo::type>())
            {
                ::Wiz::Size::type ThreadNum = inNum;
                if (ThreadNum == 0)
                {
                    ThreadNum = ::Wiz::Thread::ConcurrencyNum();
                }

                AddThread(ThreadNum);
            }

            type::~type()
            {
                ShutDown();
            }

            ::Wiz::Void::type type::AddThread(::Wiz::Size::in inNum)
            {
                for (::Wiz::Size::type i = 0; i < inNum; i++)
                {
                    ThreadArray.emplace_back(
                        ::Wiz::Thread::type
                        {
                            ::Wiz::ThreadPool::Worker::type{SharedInfoPtr}
                        }
                    );
                }
            }

            ::Wiz::Void::type type::ShutDown()
            {
                {
                    ::Wiz::Mutex::LockGuard::type lk{SharedInfoPtr->Mutex};
                    SharedInfoPtr->ShutDown = true;
                }
                SharedInfoPtr->Notifier.notify_all();

                for (auto & ThreadRef : ThreadArray)
                {
                    if (ThreadRef.joinable())
                    {
                        ThreadRef.join();
                    }
                }
                
                ThreadArray.clear();
            }

            ::Wiz::Size::type type::ThreadNum() const
            {
                return ThreadArray.size();
            }
        } // namespace Base
    } // namespace ThreadPool
} // namespace Wiz
