#include "Entity.h"

void Entity::Update(float dt)
{
	OnUpdate();
}

void Entity::Draw()
{
	OnDraw();
}