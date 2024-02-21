// Working with Pointers.cpp : This file contains the 'main' function. Program execution begins and ends there.
//
#include <string>
#include <iostream>
using namespace std;
void SquarePtr(int* pointer) {
    *pointer *= *pointer;
}

int main()
{
    int pointee;
    int* pointer = &pointee;
    pointee = 3;
    cout << pointee << " <- " << pointer << endl; //Get it? because it points at the pointee. (I'm so funny)
    SquarePtr(pointer);
    cout << pointee << endl;
    delete pointer;
    pointer = nullptr;
    cout << pointer << endl;
}


