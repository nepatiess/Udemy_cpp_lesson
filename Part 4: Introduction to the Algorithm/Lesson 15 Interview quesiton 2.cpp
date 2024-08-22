#include <iostream>

using namespace std;
int main() {

	//What happens to the w output after running the following code blocks?

	/*		A.
	
	int x = 5, y = 9, z = 7.4, w;
	w = (z > x) - (y <= 11);
	//    = 1   -    = 1     = the output:0
	cout << w;

	*/

	/*		B.
	
	int x = 5, y = 9, z = 7.4, w;
	w = z > x - y <= 11;
	//First of all, x - y 
	//w = z > (x - y) <=11
	//Then, z > -4
	//w = (z > (x - y)) <= 11 = the output: 1
	cout << w;

	*/

	return 0;
}