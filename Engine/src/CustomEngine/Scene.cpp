#include "Scene.h"

void Scene::EnterScene()
{
	OnEnterScene();
}

void Scene::ExitScene()
{
	OnExitScene();
}

void Scene::Update()
{
	OnUpdate();
}

void Scene::Event(sf::Event& event)
{
	OnEvent();
}