#include <iostream>
using namespace std;

int main() {
	
	int num1, num2, result = 0;
	int operation;

	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;

	cout << "press 1 to addition" << endl;
	cout << "press 2 to subtraction" << endl;
	cout << "press 3 to multiplication" << endl;
	cout << "press 4 to division" << endl;
	cout << "press 5 to find remainder" << endl;
	cout << "Please select the operation: ";
	cin >> operation;

	if (operation == 1) {
		result = num1 + num2;
	}
	else if (operation == 2) {
		result = num1 - num2;
	}
	else if (operation == 3) {
		result = num1 * num2;
	}
	else if (operation == 4) {
		result = num1 / num2;
	}
	else if (operation == 5) {
		result = num1 % num2;
	}
	else {
		cout << "Invalid choice.";
	}

	cout << "The result: " << result << endl;
	
	return main();
}