#pragma once
#include <DX3D/Core/Base.h>
#include <DX3D/Core/Core.h>

namespace DX3D
{
	class Game : public Base
	{
	public:
		Game();
		virtual ~Game() override;
		virtual void Run() final;

	private:
		std::unique_ptr<Window> m_display{};
		bool m_isRunning{ true };
	};
}
