#include <iostream>
using namespace std;

int main() {

// kullanıcıdan 3 sayı isteyin ve bu sayılardan en küçüğünü bulan program yazın
	
	int num1, num2, num3;
	cout << "----------------------------------" << endl;
	cout << "Please enter the first number: ";
	cin >> num1;
	cout << "Please enter the second number: ";
	cin >> num2;
	cout << "Please enter the third number: ";
	cin >> num3;

	if (num1 < num2 && num1 < num3) {
		cout << "The smallest of the 3 numbers: " << num1 << endl;
	}
	else if (num2 < num1 && num2 < num3) {
		cout << "The smallest of the 3 numbers: " << num2 << endl;
	}
	else if (num3 < num1 && num3 < num2) {
		cout << "The smallest of the 3 numbers: " << num3 << endl;
	}
	else if (num1 == num2 || num2 == num3 || num1 == num3) {
		cout << "There is no smallest number." << endl;
	}
	else {
		cout << "Invalid section.";
	}

	return main();
}