#pragma once

#include "SFML/Window.hpp"
#include "SFML/Graphics.hpp"

#include <string>
#include <list>

class Scene;

class GameManager
{
private:
	static GameManager* m_instance;

	sf::RenderWindow* m_window;

	std::list<Scene*> m_scenes;
	Scene* m_currentScene;

	GameManager();
public:
	static GameManager* Get();

	void CreateWindow(unsigned int width, unsigned int height, std::string title = "Game", sf::Color color = sf::Color::Black);

	template <typename T>
	void LaunchScene();

	void Update();
};

