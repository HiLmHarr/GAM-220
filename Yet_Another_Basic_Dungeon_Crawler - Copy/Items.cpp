#include "Items.h"
#include <string>
#include <iostream>
using namespace std;
Items::Items(string newName) {
	name = newName;
}
void Items::Use() {
	cout << "did something" << endl;
}