#include "../../../Inc/SWC_Library/RenderFramework/SWCRenderPass.hpp"

namespace swc
{
    namespace RenderPass
    {
        type::type() : m_RenderStagePtr(WMS_NULLPTR), m_RenderTargetPtr(WMS_NULLPTR), m_VertexShaderPtr(WMS_NULLPTR), m_PixelShaderPtr(WMS_NULLPTR)
        {
        }

        type::~type()
        {
        }
    } /// namespace RenderPass
} /// namespace swc
