
void progressRoom() {
    int roomChoice = rand() % 5;
    switch (roomChoice) {
    case 1:
        cout << "You found nothing in the room" << endl;
        break;
    case 2:
        //find item
        //randomly select item from list of items for player to pick up
        break;
    case 3:
        //find weapon
        //randomly select item from list of weapons for player to pick up
        break;
    case 4:
        //fight enemy
        //randomly select enemy to fight
        break;
    }
}

#include <random>
#include <list>
#include <iostream>
#include <string>
#include "Enemies.h"
#include "Weapons.h"
#include "Inventory.h"
#include "Players.h"
#include "Items.h"
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}


