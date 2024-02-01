//MAJOR BUG: Choice is set to 0 and cannot be changed so the project runs in an infinite loop until closed
//This is caused either by inputing something that is not an integer for integer inputs or by putting a space in the string input

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
    int firstIndex;
    int secondIndex;
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
        case 1: //outputs string
            cout << myString << endl;
            break;
        case 2: //replaces string with input
            cout << "Input text" << endl << "> ";
            cin >> extraString;
            wrong = BadInput(extraString);
            if (wrong)
            {
                cout << "Bad Input, please use only letters" << endl;
                extraString = "";
            }
            else
            {
                myString = extraString;
            }
            break;
        case 3: //adds input onto existing string
            cin >> extraString;
            wrong = BadInput(extraString);
            if (wrong)
            {
                cout << "Bad Input, please use only letters" << endl;
                extraString = "";
            }
            else
            {
                myString = myString + extraString;
            }
            break;
        case 4: //reverses letter order
            //I genuinely don't know my thought process for this but it works
            for (int i = 0; i < myString.length(); i++) 
            {
                myString = myString + myString[myString.length() - (i + 1)];
                myString.erase(myString.length() - (i + 2), 1);
            }
            break;
        case 5: //capitalizes all lowercase letters
            for (int i = 0; i < myString.length(); i++) 
            {
                if (myString[i] > 96 && myString[i] < 123) 
                {
                    myString[i] -= 32;
                }
            }
            break;
        case 6: //lowercases all capital letters
            for (int i = 0; i < myString.length(); i++)
            {
                if (myString[i] > 64 && myString[i] < 91)
                {
                    myString[i] += 32;
                }
            }
            break;
        case 7: //Capitalizes all letters after index
            cout << "Capitalize after what index?" << endl << "> ";
            cin >> firstIndex;
            if (firstIndex < 0 || firstIndex > myString.length()) //check to make index is in bounds
            {
                cout << "invalid index" << endl;
                break;
            }
            for (int i = firstIndex; i < myString.length(); i++) 
            {
                if (myString[i] > 96 && myString[i] < 123)
                {
                    myString[i] -= 32;
                }
            }
            break;
        case 8: //swaps 2 characters at indexes
            cout << "First index" << endl << "> ";
            cin >> firstIndex;
            cout << "Second index" << endl << "> ";
            cin >> secondIndex;
            if (firstIndex < 0 || firstIndex > myString.length() || secondIndex < 0 || secondIndex > myString.length())
            {
                cout << "invalid index" << endl;
                break;
            }
            extraString = myString[firstIndex];
            myString[firstIndex] = myString[secondIndex];
            myString[secondIndex] = extraString[0];
            extraString = "";
            break;
        case 9: //capitalizes characters after a space
            for (int i = 0; i < myString.length(); i++) 
            {
                if (myString[i] = 32 && i < myString.length() - 1) 
                {
                    if (myString[i + 1] > 96 && myString[i + 1] < 123)
                    {
                        myString[i + 1] -= 32;
                    }
                }
            }
            break;
        default: //just in case they don't input a proper number
            cout << "invalid input, please use the number preceding the choice" << endl;
            break;
        }
        cout << endl;
    }
}



