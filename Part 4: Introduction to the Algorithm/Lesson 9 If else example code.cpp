#include <iostream>
using namespace std;

int main() {
	
	string username;
	cout << "Please enter username: ";
	cin >> username;
	int password = 1234;
	int userInput;
	cout << "Please enter password: ";
	cin >> userInput;

	if (userInput == password) {

		cout << "Welcome to the system, " << username;
	}
	else {
		cout << "Password is wrong.";
	}

	return 0;
}