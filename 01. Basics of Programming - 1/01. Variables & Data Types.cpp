// What are Variables?
// Variables are used to store data in a computer program
// A variable is a name given to a memory location
// A variable is defined by a unique name, a data type, and an optional initial value
// A variable name in C++ can contain letters, digits, and underscores
// A variable name must begin with a letter or an underscore
// A variable name cannot begin with a digit
// A variable name is case-sensitive
// A variable name cannot be a keyword
// A variable name cannot contain spaces

// What are Data Types?
// Data types are used to define a variable before using it
// Data types specify the type of data that a variable can store
// Data types in C++ are divided into three categories:
// 1. Built-in Data Types
// 2. Derived Data Types
// 3. User-defined Data Types

// Built-in Data Types
// Built-in data types are the data types that are predefined in C++
// There are 3 types of built-in data types in C++:
// 1. Primitive Data Types
// 2. Derived Data Types
// 3. User-defined Data Types

// I. Primitive Data Types
// Primitive data types are the data types that are built into the C++ language
// There are 3 types of primitive data types in C++:
// 1. Integer Data Types - char, short int, int, long int, long long int
// 2. Floating-point Data Types - float, double, long double
// 3. Void Data Types - void

// II. Derived Data Types
// Derived data types are the data types that are derived from the primitive data types
// There are 3 types of derived data types in C++:
// 1. Array Data Type
// 2. Pointer Data Type
// 3. Reference Data Type

// III. User-defined Data Types
// User-defined data types are the data types that are defined by the user
// There are 4 types of user-defined data types in C++:
// 1. Structure Data Type
// 2. Union Data Type
// 3. Enumeration Data Type
// 4. Class Data Type

#include <iostream>
using namespace std;

int main() {
	// Bool has only two values: true or false
	// which can be represented as 1 or 0 in 1 bit
	// Q: Why does bool take 1 byte of memory, when it can store its values in 1 bit?
	// A: Because the smallest addressable unit of memory is 1 byte
	// So, even if we store a value of 1 bit, it will take 1 byte of memory
	// Q: Why smallest addressable unit of memory is 1 byte?
	// A: Because the memory is divided into bytes, and the smallest addressable unit of memory is 1 byte
	bool b = true; // Size: 1 byte, Range: true or false
	cout << "Size of bool: " << sizeof(b) << ", Value: " << b << endl;

	char c = 'A'; // Size: 1 byte, Range: -128 to 127 or 0 to 255
	cout << "Size of char: " << sizeof(c) << ", Value: " << c << endl;

	// If we try to store a value greater than 127, it will overflow and wrap around
	// why did char c1 = 128; give -128 as output?
	// char is a signed data type, so it can store values from -128 to 127
	// 128 is out of range, so it will wrap around and give -128 as output
	// what does wrap around mean?
	// Wrap around means that the value will start from the minimum value of the data type
	// For example, if we add 1 to 127, it will wrap around to -128
	// If we subtract 1 from -128, it will wrap around to 127
	char c1 = 128; // Result: -128
	cout << (int)c1 << endl;

	short int si = 10; // Size: 2 bytes, Range: -32,768 to 32,767
	cout << "Size of short int: " << sizeof(si) << ", Value: " << si << endl;

	int i = 10; // Size: 4 bytes, Range: -2,147,483,648 to 2,147,483,647
	cout << "Size of int: " << sizeof(i) << ", Value: " << i << endl;
	// Unsigned int Size: 4 bytes, Range: 0 to 4,294,967,295 (0 to 2^32 - 1)
	// Signed int Size: 4 bytes, Range: -2,147,483,648 to 2,147,483,647 (-2^31 to 2^31 - 1)

	long int li = 10; // Size: 4 bytes, Range: -2,147,483,648 to 2,147,483,647
	cout << "Size of long int: " << sizeof(li) << ", Value: " << li << endl;

	long long int lli = 10; // Size: 8 bytes, Range: -9,223,372,036,854,775,808 to 9,223,372,036,854,775,807
	cout << "Size of long long int: " << sizeof(lli) << ", Value: " << lli << endl;

	float f = 10.5; // Size: 4 bytes, Range: 3.4e-38 to 3.4e+38, 6 decimal places
	cout << "Size of float: " << sizeof(f) << ", Value: " << f << endl;

	double d = 10.5; // Size: 8 bytes, Range: 1.7e-308 to 1.7e+308, 15 decimal places
	cout << "Size of double: " << sizeof(d) << ", Value: " << d << endl;

	long double ld = 10.5; // Size: 12 bytes, Range: 1.7e-308 to 1.7e+308, 15 decimal places
	cout << "Size of long double: " << sizeof(ld) << ", Value: " << ld << endl;

	// wchar_t is used to store wide characters
	// Wide characters are used to store characters from different languages
	// It is used to store characters from the extended ASCII character set
	// It is not a built-in data type in C++, but it is a built-in data type in C
	wchar_t wc = L'Ω'; // Size: 2 or 4 bytes, Range: 0 to 65,535 or 0 to 4,294,967,295
	cout << "Size of wchar_t: " << sizeof(wc) << ", Value: " << wc << endl;

	// NOTE: The size of the data types may vary from compiler to compiler
	// NOTE: Result of mathematical operations on 2 or more different data types will be of the larger data type
	// For example, if we add an int and a float, the result will be a float

	return 0;
}