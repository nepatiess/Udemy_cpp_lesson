#include <iostream>

using namespace std;
int main() {

	string name = "Zeynep Koz";
	int birthDay = 2003;
	float numGradePointAverage = 3.47f;
	double pi = 3.1415926535;
	bool doesPass = true;
	char letterGradePoint = 'A';
	int quiz1Grade = 72;
	float quiz2Grade = 51.8f;
	//or float quizAveage = (float) (quiz1Grade + quiz2Grade) / 2;
	float quizAverage = (quiz1Grade + quiz2Grade) / 2;

	cout << "Hello " << name << endl;
	cout << "Day of birth: " << birthDay << endl;
	cout << "Numerical grade point average: " << numGradePointAverage << endl;
	cout << "Does she pass the lesson?: " << doesPass << endl;
	cout << "Letter grade point: " << letterGradePoint << endl;
	cout << "Average of quizes: " << quizAverage << endl;
	cout << endl;

	//Basic Arithmetic Operations
	cout << "Basic Arithmetic Operations" << endl;

	// 1.Addition
	cout << "1.Addition: ";
	int sum = 5 + 3; //sum = 8
	cout << "5 + 3 = " << sum << endl;
	cout << endl;

	// 2.Subtraction
	cout << "2.Subtracion: ";
	int diff = 5 - 3; //diff = 2
	cout << "5 - 2 = " << diff << endl;
	cout << endl;

	// 3.Mulitplication
	cout << "3.Multiplication: ";
	int product = 5 * 3; //product = 15
	cout << "5 * 3 = " << product << endl;
	cout << endl;

	// 4.Division
	cout << "4.Division: ";
	int quotient = 5 / 2; //quotient = 2 (int division)
	double preciseQuotient = 5.0 / 2; //preciseQuotient = 2.5
	cout << "5 / 2 = " << quotient << endl;
	cout << "5.0 / 2 = " << preciseQuotient << endl;
	cout << endl;

	// 5.Modulus
	cout << "5.Modulus: ";
	int remainder = 5 % 2; //remainder = 1
	cout << "5 % 2 = " << remainder << endl;
	cout << endl;

	// 6.Increment
	cout << "6.Increment: " << endl;
	int x = 5;

	cout << "Print x: " << x << endl;

	//first x increments, then print x
	cout << "++x: " << ++x << " : ";
	cout << "first x increments, then print x" << endl;

	//first print x, then x increments
	cout << "x++: " << x++ << " : ";
	cout << "first print x, then x increments" << endl;

	cout << "Print x: " << x << endl;
	cout << endl;

	// 7.Decrement
	cout << "7.Decrement: " << endl;
	int y = 5;

	cout << "Print y: " << y << endl;

	//first y decrements, then print y
	cout << "--y: " << --y << " : ";
	cout << "first y decrements, then print y" << endl;

	//first print y, then x decrements
	cout << "y--: " << y-- << " : ";
	cout << "first print y, then y decrements" << endl;

	cout << "Print y: " << y << endl;
	cout << endl;

	// 8.Compound Assignment Operators
	cout << "8.Compound Assignment Operators" << endl;

	cout << "a.Addition Assignment (+=)" << endl;
	int a = 5;
	cout << "first a: " << a << endl;
	a += 3; // a = 8
	cout << "a += 3: " << a << endl;
	cout << endl;

	cout << "b.Subtraction Assignment (-=)" << endl;
	int b = 5;
	cout << "first b: " << b << endl;
	b -= 3; // b = 2
	cout << "b -= 3: " << b << endl;
	cout << endl;

	cout << "c.Multiplication Assignment (*=)" << endl;
	int c = 5;
	cout << "first c: " << c << endl;
	c *= 3; // c = 15
	cout << "c *= 3: " << c << endl;
	cout << endl;

	cout << "d.Division Assignment (/=)" << endl;
	int d = 6;
	cout << "first d: " << d << endl;
	d /= 3; // d = 2
	cout << "d /= 3: " << d << endl;
	cout << endl;

	cout << "e.Modulus Assignment (%=)" << endl;
	int e = 5;
	cout << "first e: " << e << endl;
	e %= 3; // e = 2
	cout << "e %= 3: " << e << endl;
	cout << endl;

	return 0;
}