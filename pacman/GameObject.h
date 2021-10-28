#include <iostream>
#pragma once
using namespace std;

class GameObject
{
private:
	int xPos;
	int yPos;

public:
	GameObject(int x = 0, int y = 0) {
		this->xPos = x;
		this->yPos = y;
	};
	void setX(int newX);
	void setY(int newY);
	int getX();
	int getY();
	void printPos() const;
};

