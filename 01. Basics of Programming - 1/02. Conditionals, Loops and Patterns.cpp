// What are Conditionals?
// Conditionals are used to perform different computations or actions depending on whether a programmer-specified boolean condition evaluates to true or false
// There are 3 types of conditionals in C++:
// 1. If
// 2. If-else
// 3. Nested If-else

// What are Loops?
// Loops are used to execute a block of code multiple times
// There are 3 types of loops in C++:
// 1. For loop
// 2. While loop
// 3. Do-while loop

// What are Patterns?
// Patterns are used to print a specific pattern of characters or numbers

#include <iostream>
using namespace std;

int main() {
	// If else for voting eligibility if age > 18
	int age;
	cout << "Enter your age: ";
	cin >> age;
	if (age >= 18) {
		cout << "You are eligible to vote" << endl;
	} else {
		cout << "You are not eligible to vote" << endl;
	}
	cout << endl;

	// If else for finding the greatest of 3 numbers
	int a, b, c;
	cout << "Enter 3 numbers: ";
	cin >> a >> b >> c;
	if (a > b && a > c) {
		cout << a << " is the greatest number" << endl;
	} else if (b > a && b > c) {
		cout << b << " is the greatest number" << endl;
	} else {
		cout << c << " is the greatest number" << endl;
	}
	cout << endl;

	// Nested if else for finding the greatest of 3 numbers
	int x, y, z;
	cout << "Enter 3 numbers: ";
	cin >> x >> y >> z;
	if (x > y) {
		if (x > z) {
			cout << x << " is the greatest number" << endl;
		} else {
			cout << z << " is the greatest number" << endl;
		}
	} else {
		if (y > z) {
			cout << y << " is the greatest number" << endl;
		} else {
			cout << z << " is the greatest number" << endl;
		}
	}
	cout << endl;

	// Loops
	// For loop to print numbers from 1 to 10
	cout << endl
		 << "Numbers from 1 to 10 using for loop: ";
	for (int i = 1; i <= 10; i++) {
		cout << i << " ";
	}
	cout << endl;

	// While loop to print numbers from 1 to 10
	cout << endl
		 << "Numbers from 1 to 10 using while loop: ";
	int i = 1;
	while (i <= 10) {
		cout << i << " ";
		i++;
	}
	cout << endl;

	// Do-while loop to print numbers from 1 to 10
	cout << endl
		 << "Numbers from 1 to 10 using do-while loop: ";
	i = 1;
	do {
		cout << i << " ";
		i++;
	} while (i <= 10);
	cout << endl
		 << endl;

	// Q: Difference between while and do-while loop
	// A: In while loop, the condition is checked first, and then the block of code is executed
	// In do-while loop, the block of code is executed first, and then the condition is checked, so the block of code is executed at least once

	// NOTE: while loop and for loop are entry controlled loops, and do-while loop is exit controlled loop

	// Patterns
	// Pattern 1 - Half pyramid using *
	for (int i = 1; i <= 5; i++) {
		for (int j = 1; j <= i; j++) {
			cout << "* ";
		}
		cout << endl;
	}

		return 0;
}