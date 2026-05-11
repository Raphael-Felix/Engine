#pragma once

#include "SFML/Window/Event.hpp"

#include <vector>

class Entity;

class Scene
{
private:
	std::vector<Entity*> m_entities;

public:
	void EnterScene();
	void ExitScene();

	virtual void OnEnterScene() = 0;
	virtual void OnExitScene() = 0;

	void Update();
	virtual void OnUpdate() = 0;

	void Event(sf::Event& event);
	virtual void OnEvent() = 0;
};