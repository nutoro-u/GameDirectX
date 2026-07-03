#include <DX3D/Window/Window.h>
#include <Windows.h>
#include <stdexcept>

DX3D::Window::Window() : Base()
{
	WNDCLASSEX wc{};
	wc.cbSize = sizeof(WNDCLASSEX);
	wc.lpszClassName = L"DX3DWindow";
	wc.lpfnWndProc = DefWindowProc;
	auto windowClassId = RegisterClassEx(&wc);

	if(!windowClassId)
	{
		throw std::runtime_error("Failed to register window class");
	}

	RECT rc = { 0, 0, 1280, 720 };
	AdjustWindowRect(&rc, WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, false);

	m_handle = CreateWindowEx(NULL, MAKEINTATOM(windowClassId), L"Mazen Issa | DirectX C++ Game",
		WS_OVERLAPPED | WS_CAPTION | WS_SYSMENU, CW_USEDEFAULT, CW_USEDEFAULT,
		rc.right - rc.left, rc.bottom - rc.top,
		NULL, NULL, NULL, NULL);

	if(!m_handle)
	{
		throw std::runtime_error("Failed to create window");
	}

	ShowWindow(static_cast<HWND>(m_handle), SW_SHOWDEFAULT);
}

DX3D::Window::~Window()
{
	DestroyWindow(static_cast<HWND>(m_handle));
}
