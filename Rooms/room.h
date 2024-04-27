#pragma once
#include <map>
#include <list>
#include "WorldObjects.h"
#include <string>
using namespace std;
class room
{
public:
	enum Connection { north, south, east, west, up, down };
	map <Connection, room*>::iterator mapit;
	map <Connection, room*> mp;
	list<WorldObjects*>::iterator listit;
	list<WorldObjects*> roomObjects;
	string description;
	void PrintRoom();
	void AddConnection(Connection connect, room* room);
	room* GetConnection(Connection connect);
	void RemoveObject(WorldObjects* object);
	void AddObject(WorldObjects* object);
	void MoveObject(WorldObjects* object, Connection connect);
	void MoveObject(WorldObjects* object, room* room);
	room(string descript);

};

