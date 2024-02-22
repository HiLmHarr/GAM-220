#pragma once
#include <list>
#include "Items.h"
class Inventory
{
private:
    std::list<Items> backpack;
    std::list<Items>::iterator it;
public:
    void Pickup(Items item);
    void Display();
    void ChooseItem(int choice);
};

