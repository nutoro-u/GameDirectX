#include <DX3D/Game/Game.h>
#include <Windows.h>

void DX3D::Game::Run()
{
	MSG msg{};
	while (m_isRunning)
	{
		while (PeekMessage(&msg, NULL, 0, 0, PM_REMOVE))
		{
			TranslateMessage(&msg);
			DispatchMessage(&msg);
		}
		Sleep(1);
	}
}