#include <iostream>
#include <cstring>  // For strcpy

using namespace std;

union Data {
	int i;
	float f;
};

int main() {
	/* 
	1. Integer Types
		a. int:Used to store integer values, 
		it has a size of 4 bytes.
	*/
	int count = 10;
	cout << "int example: " << count << endl;

	/*
		b. short: A smaller integer type. 
		Usually 2 bytes.
	*/
	short age = 15;
	cout << "short example: " << age << endl;

	/*
		c. long: Typically 4 or 8 bytes, depend on system.
	*/
	long distance = 100000L;
	cout << "long example: " << distance << endl;

	/*
		d. long long: used for even larger integers. 
		Usually 8 bytes.
	*/
	long long bigNumber = 1234567890LL;
	cout << "long long example: " << bigNumber << endl;

	/*
		e. unsigned int: same as 'int' 
		but can only represent non-negative values
	*/
	unsigned int positiveCount = 20;
	cout << "unsigned int example: " << positiveCount << endl;

	/*
	2. Floating-Point Type
		a. float: Used for single-precision floating-point numbers. 
		Typically 4 bytes.
	*/
	float temprerature = 36.5f;
	cout << "float example: " << temprerature << endl;

	/*
		b. double: Used for doubl-preciison floating-point numbers. 
		Typically 8 bytes.
	*/
	double price = 99.99;
	cout << "double example: " << price << endl;

	/*
		c. long double: Used for extended-precision floating- point numbers.
		Usually 8, 12 or 16 bytes depending on the sysytem
	*/
	long double preciseValue = 123.456789L;
	cout << "long double example: " << preciseValue << endl;

	/*
	3. Character Types
		a. char: Used to store a single character. 
		Typically 1 byte.
	*/
	char letter = 'A';
	cout << "char example: " << letter << endl;

	/*
		b. wchar_t: Used to store a wide character. 
		Typically 2 or 4 bytes.
	*/
	wchar_t wideChar = L'B';
	cout << "wchar_t example: " << wideChar << endl;

	/*
		c. char16_t: Used to store a UTF_16 encoded character.
		Typically 2 bytes.
	*/
	char16_t char16 = u'A';
	cout << "char16_t example: " << char16 << endl;

	/*
		d. char32_t : Used to store a UTF_32 encoded character.
		Typically 4 bytes.
	*/
	char32_t char32 = U'A';
	cout << "char32_t example: " << char32 << endl;

	/*
	4. Boolean Type
		a. bool: Used to store a boolean value, 
		either 'true' or 'false'
	*/
	bool isTrue = true;
	cout << "bool example: " << isTrue << endl;

	/*
	5. Void Type
		a. void: Represents the absence of type.
		Commonly used for functions that do not return a value.
	*/
	void function();
	cout << "void example: void function();" << endl;

	/*
	6. Derived Data Types
		a.arrays: Collection of elements of the same type.
	*/
	int numbers[3] = { 1,2,3 };
	cout << "array example: ";

	for (int i = 0; i < 3; i++) {
		cout << numbers[i] << " ";
	}
	cout << endl;

	/*
		b.pointers: Variables that store memory addresses.
	*/
	int a = 10;
	int* ptr = &a;

	cout << "Pointer's address: " << ptr << endl;
	cout << "Pointer's value: " << *ptr << endl;

	/*
		c.references: Alias for another variable.
	*/
	int& ref = a;
	cout << "Value of a: " << a << endl;
	cout << "Value of ref: " << ref << endl;

	/*
		d. enumeration (enum): User-defined data type with 
		a set of named integral contstants.
	*/
	enum Colors {RED, GREEN, BLUE};
	Colors color = BLUE;
	cout << "enum example (numeric): " << color << endl;

	/*
		e. structures (struct): User-defined data type that 
		groups variable of different types.
	*/
	struct Person {
		int ageperson;
		char nameperson[50];
	};
	Person person;
	person.ageperson = 25;
	strcpy_s(person.nameperson, "Alice");

	// print struct groups variables
	cout << "Struct example:" << endl;
	cout << "Name: " << person.nameperson << endl;
	cout << "Age: " << person.ageperson << endl;

	/*
		f. unions: Similar to structures,
		but members share the samne memory location.
	*/
	union Data { int i; float f; };
	Data data;

	// setting the `int' type and printing
	data.i = 10;
	cout << "Data as integer: " << data.i << endl;

	// setting the `float' type and printing
	data.f = 3.14f;
	cout << "Data as float: " << data.f << endl;

	// things to consider when printing `int` and 'float`
	cout << "Data as integer after setting float: " << data.i << endl;
	
	/*
	7. Null pointer
		a. nullptr: A pointer that doesn't point to 
		any object or function
	*/
	int* ptr1 = nullptr;

	if (ptr1 == nullptr) {
		cout << "Pointer is null." << endl;
	}
	else {
		cout << "Pointer value: " << ptr1 << endl;
	}

	return 0;
}