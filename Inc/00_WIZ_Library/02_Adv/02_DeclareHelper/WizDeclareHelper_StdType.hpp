#pragma once

namespace SharedPtr
{
    template<class T>
    using Type = ::std::shared_ptr<T>;

    template <class T, class... ArgsT>
    WIZ_INLINE ::Wiz::SharedPtr::Type<T> Make(ArgsT&&... inArgs)
    {
        return ::std::make_shared<T>(::std::forward<ArgsT>(inArgs)...);
    }
} // namespace SharedPtr

namespace WeakPtr
{
    template<class T>
    using Type = ::std::weak_ptr<T>;
} // namespace SharedPtr

namespace UniquePtr
{
    template<class T>
    using Type = ::std::unique_ptr<T>;
} // namespace UniquePtr


namespace Vector
{
    template<class T>
    using Type = ::std::vector<T>;
} // namespace Vector

namespace Map
{
    template<class KeyT, class ValueT>
    using Type = ::std::map<KeyT, ValueT>;
} // namespace Map

namespace List
{
    template<class T>
    using Type = ::std::list<T>;
} // namespace List

namespace Queue
{
    template<class T>
    using Type = ::std::queue<T>;
} // namespace Queue

namespace InitializerList
{
    template<class T>
    using Type = ::std::initializer_list<T>;
} // namespace InitializerList

namespace Function
{
    template<class T>
    using Type = ::std::function<T>;
} // namespace Function
