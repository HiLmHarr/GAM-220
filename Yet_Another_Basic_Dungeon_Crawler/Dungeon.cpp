#include "Dungeon.h"
#include <list>
#include <string>
#include <iostream>
#include "Rooms.h"
using namespace std;

//This will create a 5 x 5 floor with each room containing a different event
//Loop with i infinately repeats
Dungeon::Dungeon() {
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; i++) {
			floor.push_back(Rooms(i, j));
		}
	}
	currentRoom = floor.begin();
}
//This refreshes the floor and puts things back in the rooms
void Dungeon::Refresh() {
	floor.clear();
	for (int i = 1; i < 6; i++) {
		for (int j = 1; j < 6; i++) {
			floor.push_back(Rooms(i, j));
		}
	}
}
//This moves the character around the floor
void Dungeon::Move() {
	properChoice = false;
	north = false;
	south = false;
	east = false;
	west = false;
	while (properChoice) {
		cout << "Choose a direction" << endl;

		//Checks for what direction the character can go
		//Output should look like:
		//  N
		//W   E
		//  S
		if ((*currentRoom).firstCord != 1) {
			cout << "  N" << endl;
			north = true;
		}
		else {
			cout << endl;
		}

		if ((*currentRoom).secondCord != 1) {
			cout << "W   ";
			west = true;
		}
		else {
			cout << "    ";
		}

		if ((*currentRoom).secondCord != 5) {
			cout << "E" << endl;
			east = true;
		}
		else {
			cout << endl;
		}

		if ((*currentRoom).firstCord != 5) {
			cout << "  S" << endl;
			south = true;
		}
		else {
			cout << endl;
		}
		
		//Players choice, iterator will move according to cords
		cout << "> ";
		cin >> choice;
		if (toupper(choice) == 'N' and north) {
			advance(currentRoom, -5);
			properChoice = true;
		}
		else if (toupper(choice) == 'W' and west) {
			advance(currentRoom, -1);
			(*currentRoom).Enter();
			properChoice = true;
		}
		else if (toupper(choice) == 'E' and east) {
			advance(currentRoom, 1);
			(*currentRoom).Enter();
			properChoice = true;
		}
		else if (toupper(choice) == 'S' and south) {
			advance(currentRoom, 5);
			(*currentRoom).Enter();
			properChoice = true;
		}
		else {
			cout << "Inproper choice, please input character " << endl << endl;
		}
	}
}