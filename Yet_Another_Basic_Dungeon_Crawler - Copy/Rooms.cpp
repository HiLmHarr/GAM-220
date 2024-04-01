#include "Rooms.h"
#include <random>
#include <string>
#include <iostream>
using namespace std;

//Creates the room and puts something in it via the state variable
Rooms::Rooms(int cord1, int cord2) {
	firstCord = cord1;
	secondCord = cord2;
	if (firstCord == 5 and secondCord == 5) {
		state = 4;
	}
	else {
		state = rand() % 4;
	}
}
//This will have players start fights, find weapons and items, move to the next floor, or nothing upon entering
void Rooms::Enter() {
	switch (state) {
	case 0:
		cout << "There is nothing in the room." << endl;
		break;
	case 1:
		//enemy
		state = 0;
		break;
	case 2:
		//Item
		state = 0;
		break;
	case 3:
		//weapon
		state = 0;
		break;
	case 4:
		//Next floor
		state = 0;
		break;
	default:
		cout << "error" << endl;
		break;
	}
}