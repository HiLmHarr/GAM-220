// Vectors and Lists.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <list>
#include <vector>
#include "Car.h"
#include <random>
using namespace std;
    int main(int argc, char** argv)
    {
        list<int> integers;
        vector<Car> cars;
        vector<Car*> carPointers;
        vector<Car>::iterator ptr;
        vector<Car*>::iterator ptr2;
        // Your code here
        // Generate 50 random values, and add them into the integers list
        for (int i = 0; i < 50; i++) {
            integers.push_back(rand() % 101);
        }
        cout << "random list works" << endl;
        // Add 10 Car objects to the cars vector
        cars.push_back(Car("Ford"));
        cars.push_back(Car("Honda"));
        cars.push_back(Car("Hyundai"));
        cars.push_back(Car("BMW"));
        cars.push_back(Car("Fiat"));
        cars.push_back(Car("Toyota"));
        cars.push_back(Car("Kia"));
        cars.push_back(Car("Volkswagen"));
        cars.push_back(Car("Testla"));
        cars.push_back(Car("Subaru"));
        // Using iterators, add pointers to the objects in the cars
        // vector into the carPointers vector
        for (ptr = cars.begin(); ptr < cars.end(); ptr++) {
            carPointers.push_back(&(*ptr));
        }
        // Using iterators, loop through the carPointers vector and
        // print the name of each car
        for (ptr2 = carPointers.begin(); ptr2 < carPointers.end(); ptr2++) {
            cout << (**ptr2).name << endl;
        }
    }




