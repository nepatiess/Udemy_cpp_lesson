#include <iostream>

using namespace std;
int main() {
	string name;
	int width, height, area;

	cout << "Please enter your name: ";
	cin >> name;

	cout << "Hello " << name << endl << "Welcome to the geometric calculation program" << endl;
	
	cout << "Please enter the width of the rectangle: ";
	cin >> width;

	cout << "Please enter the height of the rectangle: ";
	cin >> height;

	//Calculating...
	area = width * height;
	cout << "Mrs. " << name << " your result is: " << area << endl;

	return 0;
}