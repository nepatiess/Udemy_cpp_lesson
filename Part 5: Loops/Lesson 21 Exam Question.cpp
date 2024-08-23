#include <iostream>

using namespace std;
int main() {

	/*
	Write a C++ program that calculates the factorial 
		of the number that the user enters through the console
	*/

	int num, result = 1;
	cout << "Please enter a number: ";
	cin >> num;
	
	for (int i = 1; i <= num; i++) {
		result = result * i;
	}

	cout << "The factorial of the " << num << " is " << result << endl;

	return 0;
}