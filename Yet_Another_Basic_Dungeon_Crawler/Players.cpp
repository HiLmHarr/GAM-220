#include "Players.h"
#include <string>
#include <iostream>
using namespace std;
void Players::ChangeHealth(int value) {
    health += value;
    if (value < 0) {
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