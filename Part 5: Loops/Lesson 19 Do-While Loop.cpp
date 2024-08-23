#include <iostream>

using namespace std;
int main() {

	/*
	do {
		// operation 1
		// operation 2
		// ...
	} while (condition)

	*/

	int password = 1234;
	int input;

	do {
		cout << "Please enter the password: ";
		cin >> input;
	} while (input != password);
	//             true
	// again do loop

	cout << "Welcome. " << endl;
	return 0;
}