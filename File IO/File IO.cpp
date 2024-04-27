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
    average = sum / 5;
    ofstream fileinput;
    fileinput.open(file);
    for (int i = 0; i < 5; i++) {
        fileinput << number[i] << ", ";
    }
    fileinput << "\n";
    fileinput << "sum: " << sum << "\n";
    fileinput << "average: " << average;
    fileinput.close();
}

int Count(string file) {
    char letter;
    int wordCount = 0;
    ifstream fileSearch;
    fileSearch.open(file);
    while (fileSearch.get(letter)) {
        if (letter == ' ' || letter == '\n') {
            wordCount++;
       }
    }
    fileSearch.close();
    return wordCount;
}

int VowelCount(string file) {
    cout << "Word Count: " << Count(file) << endl;
    char letter;
    int vowelCount = 0;
    ifstream fileSearch;
    fileSearch.open(file);
    while (fileSearch.get(letter)) {
        if (letter == 'a' || letter == 'e' || letter == 'i' || letter == 'o' || letter == 'u') {
            vowelCount++;
        }
    }
    fileSearch.close();
    return vowelCount;
}
int main()
{
    Numbers("file.txt");
    cout << Count("War&Peace.txt") << endl;
    cout << VowelCount("War&Peace.txt") << endl;
}


