#ifndef __WIZ_BASIC_CORE_DECLARE_HPP__SHANHAOBO_19800429__
#define __WIZ_BASIC_CORE_DECLARE_HPP__SHANHAOBO_19800429__

#include "../../00_Config/WizConfig.hpp"

////////////////////////////////////////////////////////////////////////////

#   define WIZ_DECLARE_STDNAME_TYPE                 type

#   define WIZ_DECLARE_TYPE_STDNAME(t)              \
    typedef t                   WIZ_DECLARE_STDNAME_TYPE;

#   define WIZ_DECLARE_TYPE_CONST(t)                \
    typedef t const             typec;

#   define WIZ_DECLARE_PTR(t)                       \
    typedef t *                 ptr;                \
    typedef t const *           ptrc;               \
    typedef t * const           ptrf;               \
    typedef t const * const     ptrfc;

#   define WIZ_DECLARE_REF(t)                       \
    typedef t &                 ref;                \
    typedef t const &           refc;

#   define WIZ_DECLARE_PARAM(t)                     \
    typedef t const &           in;                 \
    typedef t &                 out;                \
    typedef t &                 io;

#   define WIZ_DECLARE_PARAM_SIMPLE(t)              \
    typedef t const             in;                 \
    typedef t &                 out;                \
    typedef t &                 io;

////////////////////////////////////////////////////////////////////////////

#   define WIZ_DECLARE_TYPE(t)                      \
    WIZ_DECLARE_TYPE_STDNAME(t);                    \
    WIZ_DECLARE_TYPE_CONST(t)

#   define WIZ_DECLARE_BASE(t)                      \
    WIZ_DECLARE_TYPE(t)                             \
    WIZ_DECLARE_PTR(t)                              \
    WIZ_DECLARE_REF(t)

#   define WIZ_DECLARE(t)                           \
    WIZ_DECLARE_BASE(t)                             \
    WIZ_DECLARE_PARAM(t)

#   define WIZ_DECLARE_SIMPLE(t)                    \
    WIZ_DECLARE_BASE(t)                             \
    WIZ_DECLARE_PARAM_SIMPLE(t)

#   define WIZ_DECLARE_IN_STDCLASS(t)                \
    WIZ_DECLARE_TYPE_CONST(t)                       \
    WIZ_DECLARE_PTR(t)                              \
    WIZ_DECLARE_REF(t)                              \
    WIZ_DECLARE_PARAM(t)

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

#   define WIZ_FORWARD_DECLARE(t)                   \
    WIZ_DECLARE_TYPE_CONST(t)                       \
    WIZ_DECLARE_PTR(t)                              \
    WIZ_DECLARE_REF(t)                              \
    WIZ_DECLARE_PARAM(t)

#   define WIZ_FORWARD_DECLARE_CLASS                \
    class WIZ_DECLARE_STDNAME_TYPE;                 \
    WIZ_FORWARD_DECLARE(WIZ_DECLARE_STDNAME_TYPE)

#   define WIZ_FORWARD_DECLARE_STRUCT               \
    struct WIZ_DECLARE_STDNAME_TYPE;                \
    WIZ_FORWARD_DECLARE(WIZ_DECLARE_STDNAME_TYPE)

////////////////////////////////////////////////////////////////////////////

#   define WIZ_CLASS                                \
    class WIZ_DECLARE_STDNAME_TYPE;                 \
    WIZ_FORWARD_DECLARE(WIZ_DECLARE_STDNAME_TYPE)   \
    class WIZ_DECLARE_STDNAME_TYPE

#   define WIZ_STRUCT                               \
    struct WIZ_DECLARE_STDNAME_TYPE;                \
    WIZ_FORWARD_DECLARE(WIZ_DECLARE_STDNAME_TYPE)   \
    struct WIZ_DECLARE_STDNAME_TYPE

////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////
////////////////////////////////////////////////////////////////////////////

#   define WIZ_DECLARE_ITER(itr)                    \
    typedef itr                                     Iterator;

#   define WIZ_DECLARE_ITER_CONST(itr)              \
    typedef itr                                     IteratorC;

#endif /*__WIZ_BASIC_CORE_DECLARE_HPP__SHANHAOBO_19800429__*/
