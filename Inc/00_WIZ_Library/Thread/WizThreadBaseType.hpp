#pragma once

#include "../01_Basic/01_Type/WizBasicType.hpp"

//##############################################//

#include "../02_Adv/02_DeclareHelper/WizDeclareHelper_PrevInclude.hpp"
namespace Wiz
{
#include "../02_Adv/02_DeclareHelper/WizDeclareHelper_StdType.hpp"
#include "../02_Adv/02_DeclareHelper/WizDeclareHelper_SimpleTypeContainer.hpp"

#if WIZ_WITH_THREAD
#include "../02_Adv/02_DeclareHelper/WizDeclareHelper_Thread.hpp"
#endif /// WIZ_WITH_THREAD
} /// namespace Wiz

//##############################################//

namespace Wiz
{
    namespace Thread
    {
        namespace Receipt
        {
            template<class T>
            using Type = ::Wiz::Future::Type<T>;
        } // namespace Receipt
    } // namespace Thread
    
    namespace ThreadPool
    {
        namespace WrappedTask
        {
            typedef ::Wiz::Function::Type<::Wiz::Void::type()>      type;
        } /// WrappedTask

        namespace SharedInfo
        {
            struct type
            {
                ::Wiz::Bool::type                                   ShutDown = false;
                ::Wiz::ConditionVariable::type                      Notifier;
                ::Wiz::Mutex::type                                  Mutex;
                ::Wiz::Queue::Type<ThreadPool::WrappedTask::type>   TaskQueue;
            };
        } // namespace SharedInfo
    } // namespace ThreadPool
} // namespace Wiz
