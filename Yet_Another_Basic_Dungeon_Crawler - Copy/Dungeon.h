#pragma once
#include <list>
#include "Rooms.h"
using namespace std;
class Dungeon
{
private:
	list<Rooms> floor;
	list<Rooms>::iterator currentRoom;
	bool properChoice;
	bool north;
	bool south;
	bool east;
	bool west;
	char choice;
public:
	Dungeon();
	void Refresh();
	void Move();
};

