class Player {
public:
    int health = 100;
    void ChangeHealth(int value) {
        health += value;
        if (value < 0 ) {
            cout << "You took " << -value << " damage" << endl;
        }
        else if (value > 0 && health <= 100) {
            cout << "You healed " << value << " health" << endl;
        }
        else {
            health = 100;
            cout << "You healed to full health" << endl;
        }
    }
};

class Inventory {
private:
    list<Items> backpack;
    list<Items>::iterator it;
public:
    void Pickup(Items item) {
        backpack.push_back(item);
        cout << "Added " << item.name << " to backpack" << endl;
    }
    void Display() {
        for (auto i : backpack) {
            cout << "1: " << i.name << endl;
        }
    }
    void ChooseItem(int choice) {
        for (auto i : backpack) {
            cout << "1: " << i.name << endl;
        }
        cout << "Which item would you like to select? (number)" << endl << "> ";
        cin >> choice;
        it = backpack.begin();
        advance(it, choice - 1);
        (*it).Use();
        backpack.erase(it);
    }
};

class Items {
public:
    string name;
    void Use() {
        cout << "did something" << endl;
    }
    Items(string x) {
        name = x;
    }
};

class Weapons {
public:
    int damage;
    int speed;
    string name;
    Weapons(int x, int y, string z) {
        damage = x;
        speed = y;
        name = z;
    }
};

class Enemy {
public: 
    string name;
    int damage;
    int speed;
    Enemy(string x, int y, int z) {
        name = x;
        damage = y;
        speed = z;
    }
};

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
using namespace std;

int main()
{
    std::cout << "Hello World!\n";
}


