/*----------------------------------------------------------------------------------------------*/
/* Represents a Ghost in the game
*  Inherits from gameObject
*/
#pragma once
#include "GameObject.h"
#include "Const.h"
#include "utils.h"
#include "PathNode.h"
#include <vector>
#include <math.h>

class Ghost : public GameObject {

    char dir;
    bool alive = true;
    char difficulty;
    int moveCount = 20;

public:
    Ghost(int x, int y,char difficulty = BEST, bool alive = true, char dir = STAY) : GameObject(x, y) {
        this->difficulty = difficulty;
        this->dir = dir;
        this->alive = true;
    };
    Ghost(GameObject go, char difficulty = BEST, bool alive = true, char dir = STAY) : GameObject(go.getX(), go.getY()) {
        this->difficulty = difficulty;
        this->dir = dir;
        this->alive = true;
    };
    void move(char board[][terminal_Size_X],GameObject pacmanPos, vector<Ghost> ghosts);
    void move(char board[][terminal_Size_X], char direction, vector<Ghost> ghosts);
    char aStar(char board[][terminal_Size_X], GameObject end, vector<Ghost> ghosts) ;
    void draw();
    void Delete(char board[][terminal_Size_X]);
    char moveApproc(GameObject end, char board[][terminal_Size_X], vector<Ghost> ghosts);
    bool checkLegalMove(char direction, char board[][terminal_Size_X], vector<Ghost> ghosts);
    bool checkLegalMove(GameObject pos, char board[][terminal_Size_X], vector<Ghost> ghosts);

    char getDirection() const;
};