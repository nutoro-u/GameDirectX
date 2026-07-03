#include <DX3D/Window/Window.h>
#include <Windows.h>

DX3D::Window::Window() : Base()
{
	WNDCLASSEX wc{};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"DX3DWindow";
	wc.lpfnWndProc = DefWindowProc;
	auto windowClassId = RegisterClassEx(&wc);

	RECT rc = { 0, 0, 1280, 720 };
	AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

	CreateWindowEx(NULL, MAKEINTATOM(windowClassId), L"Mazen Issa | DirectX C++ Game",
		WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
		rc.right - rc.left, rc.bottom - rc.top,
		NULL, NULL, NULL, NULL);
}

DX3D::Window::~Window()
{
}
