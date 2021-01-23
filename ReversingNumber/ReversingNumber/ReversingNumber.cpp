#include <iostream>
using namespace std;

void main() {

	// Reversing number


	int number, reversedNumber = 0;
	cout << "Number: ";
	cin >> number;//123

	while (number != 0) {
		reversedNumber *= 10;
		//int lastDigit = number % 10;
		reversedNumber += number % 10;
		number /= 10;
	}

	cout << "Rerversed: " << reversedNumber;


	system("pause>0");
}