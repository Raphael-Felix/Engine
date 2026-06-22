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

	void Update(float dt);
	virtual void OnUpdate(float dt) = 0;

	void Event(const sf::Event& event);
	virtual void OnEvent(const sf::Event& event) = 0;

	void Draw();
	virtual void OnDraw() = 0;
};