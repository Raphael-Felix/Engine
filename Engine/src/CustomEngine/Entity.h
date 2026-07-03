#pragma once

#include <vector>

#include "Component.h"

class Entity
{
private:
	std::vector<Component*> m_components;

public:
	std::vector<Component*> GetComponents() { return m_components; }

	Component* GetComponentOfType(Component::Type type);

	Component* CreateComponentOfType(Component::Type type);

	void AddComponent(Component::Type type)
	{
		if (GetComponentOfType(type) != nullptr)
			return;

		m_components.push_back(new Component);
	}

	void EraseComponent(Component::Type type)
	{
		if (Component* component = GetComponentOfType(type))
				delete component;
	}

	void ActivateComponent(Component::Type type, bool activate = true)
	{
		if (Component* component = GetComponentOfType(type))
			component->Activate(activate);
	}

	void Update(float dt);
	void Draw();

	virtual void OnUpdate() = 0;
	virtual void OnDraw() = 0;
};