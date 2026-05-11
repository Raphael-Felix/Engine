#pragma once

#include <vector>

class Component;

class Entity
{
private:
	std::vector<Component*> m_components;

public:
	std::vector<Component*> GetComponents() { return m_components; }


};