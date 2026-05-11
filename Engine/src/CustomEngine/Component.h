#pragma once
class Component
{
public:
	enum class Type : int
	{
		Unknow,
		Transform,
		Draw,
		Animation,
		Collider,
		Physic
	};

public:
	virtual Type type() { return Type::Unknow; }
};