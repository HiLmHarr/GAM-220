#include <random>
#include <list>
#include <iostream>
#include <string>
#include "Enemies.h"
#include "Weapons.h"
#include "Inventory.h"
#include "Players.h"
#include "Items.h"
#include "Rooms.h"
#include "Dungeon.h"
//Will add a list manager that holds lists of all items, enemies, and weapons and can output them
using namespace std;


int main()
{
    Players player;
    Enemies enemy(1, 1, "dog");
    Weapons weapon(1, 1, "Sword");
    Inventory backpack;
    Items item("bread");
    //The for loop for i infinately repeats, breaking the program
    //Dungeon dungeon;
    Rooms room(6, 6);
    backpack.Pickup(item);
    backpack.Display();
    cout << sizeof(player) << endl << sizeof(enemy) << endl << sizeof(weapon) << endl << sizeof(backpack) << endl << sizeof(item)
        << endl << sizeof(room) << endl;
    cout << &player << endl << &enemy << endl << &weapon << endl << &backpack << endl << &item << endl << &room;

}


