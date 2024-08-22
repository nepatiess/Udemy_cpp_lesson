#include <iostream>

using namespace std;
int main() {
	int day;
	cout << "Please enter the days of the week as a number: ";
	cin >> day;

	switch (day) {

	case 1:
		cout << "Monday" << endl;
		break;

	case 2:
		cout << "Tuesday" << endl;
		break;

	case 3:
		cout << "Wednesday" << endl;
		break;

	case 4:
		cout << "Thursday" << endl;
		break;

	case 5:
		cout << "Friday" << endl;
		break;

	case 6:
		cout << "Saturday" << endl;
		break;

	case 7:
		cout << "Sunday" << endl;
		break;

	default:
		cout << "You entered wrong number. Please enter a value between 1 and 7 " << endl;

	}
	return main();
}