#include <iostream>
#include <list>
#include <string>
#include <vector>
using namespace std;
// Fibonacci sequence
// This function should print the fibonacci sequence
// The Fibonacci sequence is: 1, 1, 2, 3, 5, 8, 13, 21, 34, …
// where each value is the sum of the two previous values, or
// the sequence at index 5 is equal to index 4 + index 3
// calling Fib(5) should print: 1 1 2 3 5
int Fib(int index)
{
	vector<int> fibby {1,1};
	for (int i = 0; i < index; i++) {
		if (i < 2) {
			cout << fibby[i] << " ";
		}
		else {
			fibby.push_back(fibby[i - 1] + fibby[i - 2]);
			cout << fibby[i] << " ";
		}
	}
	cout << endl;
	return 0;
}
// Return the sum of all values in the array
int Sum(int length, int values[])
{
	int sum = 0;
	for (int i = 0; i < length; i++) {
		sum += values[i];
	}
	return sum;
}
// Print each letter in the character array
void Print(char* letters, int maxSize, int currentIndex)
{
	if (currentIndex == maxSize)
		return;
	std::cout << letters[currentIndex];
	Print(letters, maxSize, currentIndex + 1);
}
// Print each letter in the character array, in reverse
void PrintBackwards(char* letters, int maxSize, int currentIndex)
{
	if (currentIndex == maxSize)
		return;
	cout << letters[maxSize - currentIndex];
	PrintBackwards(letters, maxSize, currentIndex + 1);
}
int main(int argc, char** argv)
{
	// Calculate the sum of all values
	int nums[] = { 5,6,3,4,7,4,8,3,4,2 };
	std::cout << Sum(10, nums) << std::endl;
	Fib(10);
	char miniAlphabet[] = { 'S', 'o', 'm', 'e', ' ', 't', 'e', 'x', 't' };
	char* p = miniAlphabet;
	Print(p, 9, 0);
PrintBackwards(p, 9, 0);
}

