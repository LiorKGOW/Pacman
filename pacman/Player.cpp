#include "Player.h"
#include "utils.h"

void Player::draw() {
	gotoxy(getX(), getY());
	cout << '@';
}

void Player::move(Player::Direction dir) {

	if (dir == Direction::UP)
	{
		this->setY(getY() - 1);
	}
	else if (dir == Direction::DOWN) {
		this->setY(getY() + 1);
	}
	else if (dir == Direction::RIGHT) {
		this->setX(getX() + 1);
	}
	else if (dir == Direction::LEFT) {
		this->setX(getX() -1 );
	}
	
}