#include <iostream>

using namespace std;
int main() {

	int num;
	//print "Hello C++"
	cout << "Hello C++" << endl;

	//Take an int from the user
	cout << "Please enter an int number: ";
	cin >> num;

	//Print the int multiplied by 2.
	num *= 2;
	cout << "New number: " << num;
	return 0;
}