#include <iostream>

using namespace std;
int main() {

	//Things to consider when naming variables

	//Descriptive Names: e.g. use 'totalPrice' instead of 'tp'.
	string totalPrice;

	//Avoid Reserved Keywords: e.g 'int', 'for', 'while' these cannot be use

	//Use Camel Case or Underscore: e.g. use 'total_price' or 'totalPrice'
	string total_price;

	//Turkish: Do not use Turkish character in the code.

	/*Start with a Letter or Underscore: should not begin a number
	e.g. 'count1' is valid but '1count' is not.*/
	string count1;

	/*Case Sensivity : C++ is a case-sensitive language.
	e.g. 'myVariable' and 'myvariable' are not same. */

	string myVariable;
	string myvariable;

	//Avoid Special Characters

	//No Spaces: use underscore or camelCase but don't use space.


	string name; //declataration
	name = "Zeynep"; //initialization

	int age;
	age = 20;
	//or int age = 20;

	cout << "Once upon a time there was a young woman named " << name << endl << name << " was " << age << " years old.";
	cout << " " << name << " likes her name, but she doesn't like her age" << " she never wanted to grow up.\n";
	
	//The last one written in the code is the final valid one.
	name = "Koz";
	cout << name;
	return 0;
}