#pragma once

namespace Thread
{
    using type = ::std::thread;

    inline decltype(::std::thread::hardware_concurrency()) ConcurrencyNum()
    {
        return ::std::max<::Wiz::Size::type>(::std::thread::hardware_concurrency(), 1);
    }
} // namespace Thread

namespace Future
{
    template<class T>
    using Type = ::std::future<T>;
} // namespace Future

namespace Promise
{
    template<class T>
    using Type = ::std::promise<T>;
} // namespace Promise

namespace PackagedTask
{
    template<class T>
    using Type = ::std::packaged_task<T>;
} // namespace PackagedTask

namespace LockGuard
{
    template<class T>
    using Type = ::std::lock_guard<T>;
} // namespace LockGuard

namespace UniqueLock
{
    template<class T>
    using Type = ::std::unique_lock<T>;
} // namespace UniqueLock

namespace Mutex
{
    typedef ::std::mutex type;

    namespace LockGuard
    {
        typedef ::std::lock_guard<::std::mutex> type;
    } // namespace LockGuard

    namespace UniqueLock
    {
        typedef ::std::unique_lock<::std::mutex> type;
    } // namespace UniqueLock
} // namespace Mutex

namespace ConditionVariable
{
    typedef ::std::condition_variable type;
} // namespace ConditionVariable
