#pragma once
#include <DX3D/Core/Base.h>

namespace DX3D
{
	class Window : public Base
	{
	public:
		Window();
		virtual ~Window() override;

	private:
		void* m_handle{};
	};
} // namespace DX3D