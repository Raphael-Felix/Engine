#pragma once

#include <vector>

#include "Component.h"

class Entity
{
private:
	std::vector<Component*> m_components;

public:
	std::vector<Component*> GetComponents() { return m_components; }

	template <typename T>
	void AddComponent()
	{
		static_assert(std::is_base_of<Component, T>(), "T must be derived of Component");

		for (const auto& component : m_components)
		{
			if (dynamic_cast<T> (component))
			{
				return;
			}
		}

		m_components.push_back(new T);
	}

	void EraseComponent(Component::Type type)
	{
		for (const auto& component : m_components)
		{
			if (component->type() == type)
			{
				delete component;
			}
		}
	}

	void ActivateComponent(Component::Type type, bool activate = true)
	{
		for (const auto& component : m_components)
		{
			if (component->type() == type)
			{
				component->Activate(activate);
			}
		}
	}

	void Update(float dt);
	void Draw();

	virtual void OnUpdate() = 0;
	virtual void OnDraw() = 0;
};