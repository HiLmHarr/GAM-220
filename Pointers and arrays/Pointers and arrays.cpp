// Pointers and arrays.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[10] = { 10,11,12,13,14,15,16,17,18,19 };

    int* p = a;

    cout << *p << endl; //outputs how many values in array
    cout << &a << endl; //outputs address of array

    for (int i = 0; i < sizeof(a) / sizeof(int); i++) 
    {
        cout << a[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(a) / sizeof(int); i++)
    {
        cout << p[i] << ", ";
    }
    cout << endl;

    for (int i = 0; i < sizeof(a) / sizeof(int); i++) 
    {
        cout << *(p + i) << ", ";
    }


}


