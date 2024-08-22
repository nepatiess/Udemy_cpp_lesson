#include <iostream>
using namespace std;

int main() {
	int a, b;
	cout << "Please enter the value of a: ";
	cin >> a;

	cout << "Please enter the value of b: ";
	cin >> b;

	if (a == b) {
		cout << "a == b" << endl;
		cout << "a and b are equal." << endl;
	}
	else if (a != b) {
		cout << "a != b" << endl;
		cout << "a and b are not equal." << endl;
	}
	else if (a < b) {
		cout << "a < b" << endl;
		cout << "a is less than b." << endl;
	}
	else if (a > b) {
		cout << "a > b" << endl;
		cout << "a is greater then b." << endl;
	}
	else if (a <= b) {
		cout << "a <= b" << endl;
		cout << " a is less than equal to b." << endl;
	}
	else if (a >= b) {
		cout << "a >= b" << endl;
		cout << "a is greater than or equal to b." << endl;
	}
	else {
		cout << "Invalid choice.";
	}

	int x = 15, y = 30;

	cout << "x = 15" << endl;
	cout << "y = 30" << endl;

	if (x > 10 && y > 20) {
		cout << "x is greater than 10 AND y is greater than 20." << endl;
	}

	if (x < 20 || y < 40) {
		cout << "x is less than 20 OR y is less than 40." << endl;
	}

	if (!(x > 10)) {
		cout << "x is not greater than 10." << endl;
	}

	return 0;
}