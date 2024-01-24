// Practice 2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;

//PART 1
//The get takes the line or character and saves it to that variable before removing it
//I assume there's a very common use where removing the input makes life easier
//Like arrays and Random.Next() not going to the max number in C#
int main(int argc, char* argv[])
{
    cout << "Please type something." << endl;
    cout << "> ";
    char a = cin.get();
    char b = cin.get();
    string myString;
    getline(cin, myString);
    cout << "a: " << a << ", b: " << b << endl;
    cout << "myString: " << myString << endl << endl;
    
    //PART 2
    cout << "Please enter your name. " << endl;
    cout << "> ";
    getline(cin, myString);
    for (int i = 0; i < myString.length(); i++) //goes through each char and outputs it on a different line
    {
        cout << myString[i] << endl;
    }
    cout << endl;

    //PART 3
    string abc[] = {"apple", "bapple", "capple", "dapple", "eapple", "fapple", "gapple", "happle", "iapple", "japple", "kapple",
    "lapple", "mapple", "napple", "oapple", "papple", "qapple", "rapple", "sapple", "tapple", "uapple", "vapple", "wapple", "xapple",
    "yapple", "zaple"};
    for (int i = 0; i < 26; i++) //Outputs each word of abc on a different line
    {
        cout << abc[i] << endl;
    }
    cout << endl;

    //PART 4
    //Runs through each char of myString and each word of abc, sees if they overlap, and if they do it prints them
    for (int i = 0; i < myString.length(); i++)
    {
        for (string var : abc) 
        {
            if (var[0] == tolower(myString[i])) //tolower so capitalization doesn't matter
            {
                cout << myString[i] << " is for " << var << endl;
                break; // Stops it from running through the rest of the list when the overlap has already been found
            }
        }
    }
}


