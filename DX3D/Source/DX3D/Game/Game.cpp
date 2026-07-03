#include <DX3D/Game/Game.h>
#include <DX3D/Window/Window.h>

DX3D::Game::Game()
{
	m_display = std::make_unique<Window>();
}

DX3D::Game::~Game()
{
}
