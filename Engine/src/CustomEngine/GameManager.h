#pragma once

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

class GameManager
{
private:
	static GameManager* m_instance;

	sf::RenderWindow* m_window;

	GameManager();
public:
	static GameManager* Get();

	void CreateWindow(unsigned int width, unsigned int height, sf::Color color = sf::Color::Black);
	void LaunchScene();

	void Update();
};

