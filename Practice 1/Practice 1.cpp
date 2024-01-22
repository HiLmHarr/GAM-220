// Practice 1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>

int main()
{
    int array[] = { 90, 93, 82, 68, 100, 54, 101, 84, 93, 103, 77, 76, 93, 85, 70 }; //sets up arrays
    int sum = 0; //these variable will be used later
    int maximum = array[0];
    int minimum = array[0];
    for (int i = 0; i < 15; i++) 
    {
        sum += array[i];
    }
    std::cout << "The sum of the numbers is " << sum << std::endl;

    float average = sum / 15; //finds average of the array
    std::cout << "The average of the numbers is " << average << std::endl;

    for (int i = 0; i < 15; i++) //Prints out first number in array less than 70
    {
        if (array[i] < 70)
        {
            std::cout << "The first number less than 70 is " << array[i]; 
            std::cout << std::endl; // putting the << after array[i] caused an error so I just made it a seperate line of code
            break;
        }
    }

    for (int i = 0; i < 15; i++) //Prints out the largest numbers, extra and is still present in original code so we'll keep it
    {
        if (array[i] > 100)
        {
            std::cout << array[i] << " and ";
        }
    }
    std::cout << std::endl << "Are greater than 100" << std::endl;

    for (int i = 0; i < 15; i++) //Prints out first number in array less than 70
    {
        if (array[i] < minimum)
        {
            minimum = array[i];
        }
        else if (array[i] > maximum) 
        {
            maximum = array[i];
        }
    }
    std::cout << "The largest number is " << maximum << " and the smallest is " << minimum << std::endl;
}


