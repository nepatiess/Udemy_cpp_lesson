#include <iostream>

using namespace std;
int main() {

	/*
				While Loop
	It continues until a predetermined condition is broken.
	After each check of the condition, the operations inside the loop are executed once.
	The loop is exited on the first check after the condition is broken.

	while (condition)
		// operation 1
		// operation 2
		// ...
	*/

	int index = 0;
	while (index <= 3) {
		cout << "The value of index is smaller than 3" << endl;
		index++;
	}
	cout << "Index: " << index << endl;
	cout << "The end of the program." << endl;

	return 0;
}