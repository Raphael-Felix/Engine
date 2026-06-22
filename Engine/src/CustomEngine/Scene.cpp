#include "Scene.h"
#include "Entity.h"

void Scene::EnterScene()
{
	OnEnterScene();
}

void Scene::ExitScene()
{
	OnExitScene();
}

void Scene::Update(float dt)
{
	for (auto& const entity : m_entities)
	{
		entity->Update(dt);
	}

	OnUpdate(dt);
}

void Scene::Event(const sf::Event& event)
{
	OnEvent(event);
}

void Scene::Draw()
{
	for (auto& const entity : m_entities)
	{
		entity->Draw();
	}

	OnDraw();
}
