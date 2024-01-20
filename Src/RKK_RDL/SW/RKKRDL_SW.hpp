#ifndef __RENDERKINGKONG_RENDERDEVICELAYER_SW_HPP__
#define __RENDERKINGKONG_RENDERDEVICELAYER_SW_HPP__

#include "../../../Inc/RKK_Library/RenderDeviceLayer/RKKRenderDeviceLayer.hpp"

namespace rkk
{
    namespace RenderDeviceLayer
    {
        namespace SW
        {
            ///////////////////////////
            ///////////////////////////
            WMS_CLASS : public ::rkk::RenderDeviceLayer::type
            {
            public:
                type();
                virtual ~type();

            public:
#               undef RKK_RDL_METHOD
#               define RKK_RDL_METHOD   RKK_RDL_METHOD_DECLARE
#                   include "../../../Inc/RKK_Library/RenderDeviceLayer/RKKRenderDeviceLayerMethod.hpp"
#               undef RKK_RDL_METHOD
            };
            ///////////////////////////
            ///////////////////////////
        } /// end of namespace SW
    } /// namespace RenderDeviceLayer
} /// namespace rkk

#endif /// #ifndef __RENDERKINGKONG_RENDERDEVICELAYER_SW_HPP__
