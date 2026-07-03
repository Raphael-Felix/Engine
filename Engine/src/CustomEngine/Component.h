#pragma once
class Component
{
public:
	enum class Type : int
	{
		Unknow,
		Transform,
		Sprite,
		Animation,
		Collider,
		Physic
	};

private:
	bool is_activated = true;

public:
	virtual Type type() { return Type::Unknow; }

	void Activate(bool activate) { is_activated = activate; }
};