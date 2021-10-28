#include "Game.h"
#include <iostream>
#include <synchapi.h>
#include "Player.h"
#include "utils.h"
using namespace std;

void Game::init() {

	int choice = 0;
	cout << "Welcome to pacman game";
	cout << "Please select Option from the screen:";
	cout << "1.Start Game" << endl;
	cout << "8. Present instructions and keys." << endl;
	cout << "9. Exit" << endl;
	cin >> choice;
	if (choice == 1)
	{
		run();
	}
	else if (choice == 8) {
		instructions();
	}
	else if (choice == 9) {
		return;
	}
}

void Game::run() {

	Player a(1, 1);
	char ch = 'd';
	gotoxy(a.getX(), a.getY());
	while (!_kbhit() || _getch() != 27)
	{
		hideCursor();
		if (_kbhit()) {
			ch = _getch();
		}

		if (ch == 'w' || ch == 'W')
		{
			a.move(Player::UP);
		}
		else if (ch == 'X' || ch == 'x') {
			a.move(Player::DOWN);
		}
		else if (ch == 'd' || ch == 'D') {
			a.move(Player::RIGHT);
		}
		else if (ch == 'a' || ch == 'A') {
			a.move(Player::LEFT);
		}
		else if (ch == 's' || ch == 'S') {

		}
		else {
			a.move(Player::RIGHT);
		}

		a.draw();
		Sleep(400);

		if (_kbhit()) {
			ch = _getch();
		}
		hideCursor();
		system("cls");
	}
}

void Game::instructions() {
	cout << "It's a pacman game what do want me to write?"
}