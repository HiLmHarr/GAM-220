#include "room.h"

//contructor
room::room(string descript) {
	description = descript;
}

//outputs room description
void room::PrintRoom() {
	cout << description << endl << "There is ";
	for (listit = roomObjects.begin(); listit != roomObjects.end(); listit++) {
		cout << (**listit).name << " ";
	}
	cout << "in the room" << endl;
}

//Adds room and connection to map
void room::AddConnection(Connection connect, room* room) {
	mp[connect] = room;
}

//Returns room connected to connector given
room* room::GetConnection(Connection connect) {
	mapit = mp.begin();
	while (mapit != mp.end()) {
		if (mapit->first == connect) {
			return mapit->second;
		}
		else {
			mapit++;
		}
	}
}

//Removed object from room
void room::RemoveObject(WorldObjects* object) {
	for (listit = roomObjects.begin(); listit != roomObjects.end(); listit++) {
		if (*listit == object) {
			roomObjects.erase(listit);
			return;
		}
	}
}

//Add object to Room
void room::AddObject(WorldObjects* object) {
	roomObjects.push_back(object);
}

//Moves an object via connection
void room::MoveObject(WorldObjects* object, Connection connect) {
	for (listit = roomObjects.begin(); listit != roomObjects.end(); listit++) {
		if (*listit == object) {
			roomObjects.erase(listit);
			for (mapit = mp.begin(); mapit != mp.end(); mapit++) {
				if (mapit->first == connect) {
					mapit->second->AddObject(object);
					return;
				}
			}
		}
	}
}

//Moves object via room
void room::MoveObject(WorldObjects* object, room* room) {
	for (listit = roomObjects.begin(); listit != roomObjects.end(); listit++) {
		if (*listit == object) {
			roomObjects.erase(listit);
			for (mapit = mp.begin(); mapit != mp.end(); mapit++) {
				if (mapit->second == room) {
					mapit->second->AddObject(object);
					return;
				}
			}
		}

	}
}