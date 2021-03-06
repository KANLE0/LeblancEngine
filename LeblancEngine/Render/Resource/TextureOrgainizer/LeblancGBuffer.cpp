#include "LeblancEngine/Render/Resource/TextureOrgainizer/LeblancGBuffer.h"
#include "LeblancEngine/Render/Resource/Texture/Texture2D.h"
#include "LeblancEngine/Render/Resource/Texture/DepthStencilTexture.h"

GBuffer::GBuffer()
{

}


GBuffer::~GBuffer()
{
	release();
}

void GBuffer::initialize(ID3D11Device* device, UINT width, UINT height)
{
	if (device)
	{
		m_normal_smoothness_buffer->intialize(width, height);
		m_albedo_buffer->intialize(width, height);
		m_metal_reflectance_ao_buffer->intialize(width, height);
		m_radiosity_buffer->intialize(width, height);

		m_depth_stencil_texture_buffer->initialize(width, height);
	}
}

void GBuffer::release()
{
	if (m_normal_smoothness_buffer)
	{
		m_normal_smoothness_buffer->release();
		m_normal_smoothness_buffer = nullptr;
	}

	if (m_albedo_buffer)
	{
		m_albedo_buffer->release();
		m_albedo_buffer = nullptr;
	}

	if (m_metal_reflectance_ao_buffer)
	{
		m_metal_reflectance_ao_buffer->release();
		m_metal_reflectance_ao_buffer = nullptr;
	}

	if (m_radiosity_buffer)
	{
		m_radiosity_buffer->release();
		m_radiosity_buffer = nullptr;
	}

	if (m_depth_stencil_texture_buffer)
	{
		m_depth_stencil_texture_buffer->release();
		m_depth_stencil_texture_buffer = nullptr;
	}
}

void GBuffer::bind()
{

}

void GBuffer::unbind()
{

}