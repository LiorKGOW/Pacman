#include "GameObject.h"
#pragma once
class Player : public GameObject
{
public:
	enum Direction
	{
		UP,DOWN,LEFT,RIGHT
	};
public:
	Player(int x, int y) : GameObject(x, y) {};
	void move(Direction dir);
	void draw();

};

