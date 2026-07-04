#include <DX3D/Graphics/RenderSystem.h>

DX3D::RenderSystem::RenderSystem()
{
	D3D_FEATURE_LEVEL featureLevel{};
	UINT createDeviceFlags{};

#ifdef _DEBUG
	createDeviceFlags |= D3D11_CREATE_DEVICE_DEBUG;
#endif // _DEBUG


	auto hr = D3D11CreateDevice(NULL, D3D_DRIVER_TYPE_HARDWARE, NULL, createDeviceFlags, NULL, 0, D3D11_SDK_VERSION,
		&m_device, &featureLevel, &m_context);
	if (FAILED(hr))
	{
		throw std::runtime_error("Failed to create D3D11 device and context.");
	}
}

DX3D::RenderSystem::~RenderSystem()
{
}
