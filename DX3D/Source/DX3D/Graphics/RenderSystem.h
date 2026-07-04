#pragma once
#include <DX3D/Core/Core.h>
#include <DX3D/Core/Base.h>
#include <d3d11.h>
#include <wrl.h>

namespace DX3D
{
	class RenderSystem final : public Base
	{
		public:
		RenderSystem();
		virtual ~RenderSystem() override;
	private:
		Microsoft::WRL::ComPtr<ID3D11Device> m_device{};
		Microsoft::WRL::ComPtr<ID3D11DeviceContext> m_context{};
	};
}
