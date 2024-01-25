// Additional String Manipulation.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <string>
using namespace std;
bool BadInput(string myString)
{
    for (int i = 0; i < myString.length(); i++) 
    {
        if ((myString[i] < 65 && myString[i] != 32) || (myString[i] > 90 && myString[i] < 97) || myString[i] > 122) 
        {
            return true;
        }
        else 
        {
            return false;
        }
    }
}
int main()
{
    int choice = 0; //Had to make this an int as Switch statements don't work with strings
    string myString = "";
    string extraString; //This just makes some of the options easier
    bool wrong = false;
    while (choice != 10)
    {
        cout << "Pick the number of your choice" << endl << "1. display string" << endl << "2. set string" << endl << "3. apend string" << endl
            << "4. reverse string" << endl << "5. Captialize all letters" << endl << "6. lowercase all letters" << endl <<
            "7. Toggle Capitalization for characters at index" << endl << "8. swap characters at 2 indicies" << endl <<
            "9. Captitalize the first letter of every word" << endl << "10. quit" << endl << "> ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << myString << endl;
            break;
        case 2:
            cout << "Input text" << endl << "> ";
            cin >> extraString;
            wrong = BadInput(extraString);
            if (wrong)
            {
                cout << "Bad Input, please use only letters" << endl;
                extraString = "";
                wrong = false;
            }
            else
            {
                myString = extraString;
            }
            break;
        case 3:
            getline(cin, extraString);
            wrong = BadInput(extraString);
            if (wrong)
            {
                cout << "Bad Input, please use only letters" << endl;
                extraString = "";
                wrong = false;
            }
            else
            {
                myString = myString + extraString;
            }
            break;
        case 4:
            break;
        default:
            cout << "Input not recognized, please use the number preceading the choice" << endl;
            break;
        }
        cout << endl << endl;
    }
}



