#include "Enemies.h"
#include <string>
using namespace std;
Enemies::Enemies(int x, int y, string z) {
    damage = x;
    speed = y;
    name = z;
}