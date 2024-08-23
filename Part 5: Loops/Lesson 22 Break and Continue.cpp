#include <iostream>

using namespace std;
int main() {

	//break: ends the cycle. (exit the loop)
	//continue: the code sections under the continue keyword are skipped and the loop is continued

	for (int i = 0; i <= 5; i++) {
		if (i == 3)
			break;
		cout << i << " ";
	}
	cout << endl;
	// 0 1 2

	for (int k = 0; k <= 5; k++) {
		if (k == 3)
			continue;
		cout << k << " ";
	}
	cout << endl;
	// 0 1 2 4 5

	return 0;
}