#include "Inventory.h"
#include <string>
#include <iostream>

    void Inventory::Pickup(Items item) {
        backpack.push_back(item);
        std::cout << "Added " << item.name << " to backpack" << std::endl;
    }
    void Inventory::Display() {
        for (auto i : backpack) {
            std::cout << "1: " << i.name << std::endl;
        }
    }
    void Inventory::ChooseItem(int choice) {
        for (auto i : backpack) {
            std::cout << "1: " << i.name << std::endl;
        }
        std::cout << "Which item would you like to select? (number)" << std::endl << "> ";
        std::cin >> choice;
        it = backpack.begin();
        advance(it, choice - 1);
        (*it).Use();
        backpack.erase(it);
    }