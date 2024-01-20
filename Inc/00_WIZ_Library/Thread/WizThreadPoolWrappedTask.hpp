#pragma once

#include <type_traits>

#include "WizThreadBaseType.hpp"

namespace Wiz
{
    namespace ThreadPool
    {
        namespace WrappedTask
        {
            template <typename TaskResultT>
            class Type
            {
            public:
                Type(::Wiz::Function::Type<TaskResultT()> && inFunc)
                    : TaskFunc(::std::forward<::Wiz::Function::Type<TaskResultT()>>(inFunc))
                {

                }

                ::Wiz::Promise::Type<TaskResultT>       Promise;
                ::Wiz::Function::Type<TaskResultT()>    TaskFunc;

                ::Wiz::Void::type operator()()
                {
                    Promise.set_value(TaskFunc());
                }
            };

            template <>
            class Type<::Wiz::Void::type>
            {
            public:
                Type(::Wiz::Function::Type<::Wiz::Void::type()> && inFunc)
                    : TaskFunc(::std::forward<::Wiz::Function::Type<::Wiz::Void::type()>>(inFunc))
                {

                }

                ::Wiz::Promise::Type<::Wiz::Void::type>       Promise;
                ::Wiz::Function::Type<::Wiz::Void::type()>    TaskFunc;

                ::Wiz::Void::type operator()()
                {
                    TaskFunc();
                    Promise.set_value();
                }
            };


            /*
            namespace Helper
            {
                template <typename FuncT, typename... ArgsT>
                class Type : public ::Wiz::ThreadPool::WrappedTask::Type< typename ::std::invoke_result< FuncT, ArgsT... >::Type >
                {
                    typedef ::Wiz::ThreadPool::WrappedTask::Type<typename ::std::invoke_result<FuncT, ArgsT...>::Type> super;

                public:
                    Type(FuncT&& inFunc, ArgsT &&... inArgs)
                        : super(::std::bind(::std::forward<FuncT>(inFunc), ::std::forward<ArgsT>(inArgs)...))
                    {
                    }
                public:
                    Type(FuncT const& inFunc, ArgsT &&... inArgs)
                        : super(::std::bind(inFunc, ::std::forward<ArgsT>(inArgs)...))
                    {
                    }
                };
            } // namespace Helper
            */
        } /// namespace WrappedTask
    } // namespace ThreadPool
} // namespace Wiz
