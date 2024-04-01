#include <iostream>
#include <string>
#include <fstream>
#include "file.txt"
using namespace std;

void Numbers(string file) {
    int number[5];
    int sum = 0;
    double average;
    for (int i = 0; i < 5; i++) {
        while (number[i] < 0 || number[i] > 9) {
            cout << "Please type a 1 digit positive number" << endl << "> ";
            cin >> number[i];
            cout << endl;
            if (number[i] < 0 || number[i] > 9) {
                cout << "try again" << endl << endl;
            }
        }
        sum += number[i];
    }
    average = sum / sizeof(number);
    ifstream fileinput;
    fileinput.open(file);
    for (int i = 0; i < 5; i++) {
        fileinput >> number[i];
    }
    fileinput >> sum;
    fileinput >> average;
    fileinput.close();
}
int main()
{
    Numbers("file.txt");
}


