#include <DX3D/Game/Game.h>
#include <DX3D/Window/Window.h>

DX3D::Game::Game()
{
	m_display = new Window();
}

DX3D::Game::~Game()
{
	delete m_display;
}
