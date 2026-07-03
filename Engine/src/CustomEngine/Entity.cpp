#include "Entity.h"

Component* Entity::GetComponentOfType(Component::Type type)
{
	for (const auto& component : m_components)
	{
		if (component->type() == type)
		{
			return component;
		}
	}

	return nullptr;
}

Component* Entity::CreateComponentOfType(Component::Type type)
{
	switch (type)
	{
	case Component::Type::Unknow:
		return new Component;
		break;
	case Component::Type::Transform:
		//return new ComponentTransform;
		break;
	case Component::Type::Sprite:

		break;
	case Component::Type::Animation:

		break;
	case Component::Type::Collider:

		break;
	case Component::Type::Physic:

		break;
	}
}

void Entity::Update(float dt)
{
	OnUpdate();
}

void Entity::Draw()
{
	OnDraw();
}