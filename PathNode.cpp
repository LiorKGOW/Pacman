#include "PathNode.h"

/*----------------------------------------------------------------------------------------------*
* GETTERS:
/*----------------------------------------------------------------------------------------------*
* g GETTER
*/
int PathNode:: getg() const {

	return g;
}

/*----------------------------------------------------------------------------------------------* 
* h GETTER
*/
int PathNode:: geth() const {

	return h;
}

/*----------------------------------------------------------------------------------------------* 
* f GETTER
*/
int PathNode:: getf() const {

	return f;
}

/*----------------------------------------------------------------------------------------------* 
* Parent GETTER
*/
PathNode* PathNode:: getParent() const {

	return parent;
}

/*----------------------------------------------------------------------------------------------* 
* Position GETTER
*/
const GameObject PathNode:: getPosition() const {
		return position;
	
}

/*----------------------------------------------------------------------------------------------*
* SETTERS:
/*----------------------------------------------------------------------------------------------*
* g SETTER
*/
void PathNode:: setg(int newG) {

	g = newG;
}

/*----------------------------------------------------------------------------------------------* 
* h SETTER
*/
void PathNode:: seth(int newH) {

	h = newH;
}

/*----------------------------------------------------------------------------------------------*
* f SETTER
*/
void PathNode:: setf(int newF) {

	f = newF;
}

/*----------------------------------------------------------------------------------------------*
* Parent SETTER
*/
void PathNode:: setParent(PathNode* newParent) {

	parent = newParent;
}

/*----------------------------------------------------------------------------------------------*
* Position SETTER
*/
void PathNode:: setPosition(GameObject newPos) {

	position = newPos;
}

/*----------------------------------------------------------------------------------------------*/