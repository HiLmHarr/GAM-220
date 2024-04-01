#include "Enemies.h"
#include <string>
using namespace std;
//If i do make permenant stat buff for items I'll need to make enemies scale with what floor the players on
Enemies::Enemies(int x, int y, string z) {
    damage = x;
    speed = y;
    name = z;
}