#include "Weapons.h"
#include <string>
using namespace std;
Weapons::Weapons(int x, int y, string z) {
    damage = x;
    speed = y;
    name = z;
}