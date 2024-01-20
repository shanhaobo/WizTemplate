#pragma once

#include <inttypes.h>
#include <float.h>

#include <memory>

#include <vector>
#include <map>
#include <list>
#include <initializer_list>

#include <functional>
#include <queue>

#if WIZ_WITH_THREAD
    #include <mutex>
    #include <condition_variable>
    #include <thread>
    #include <future>
#endif /// WIZ_WITH_THREAD
