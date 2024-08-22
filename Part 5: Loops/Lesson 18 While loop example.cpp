#include <iostream>

using namespace std;
int main() {
	
/* Get 2 numbers from the user.
Name them as the start and end numbers.
Display all the numbers between the start and end numbers 
that are divisible by 7.
*/
	int start_num, end_num;
	int index;
	cout << "Please enter the start number: ";
	cin >> start_num;
	cout << "Please enter the end number: ";
	cin >> end_num;

	index = start_num;
	while (index <= end_num) {
		
		if (index % 7 == 0) {
			cout << index << " ";
		}
		index++;
	}
	return 0;
}