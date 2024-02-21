// C program to demonstrate implicit and explicit type casting
#include <stdio.h>

//Example for imlicit type conversion
void implicitConversion1() {
	int x = 10; // integer x
	char y = 'a'; // character c

	// y implicitly converted to int. ASCII value of 'a' is 97
	x = x + y;

	// x is implicitly converted to float
	float z = x + 1.0;

	printf("x = %d, z = %f\n\n", x, z);
}

//Examples for explicit type conversion
void explicitConversion1() {
	float a = 1.5;
	int b = (int)a;

	printf("a = %f\n", a);
	printf("b = %d\n\n", b);
}

void explicitConversion2() {
	char var_char = 'A';
	int var_int = (int)var_char;

	printf("var_char = %c\n", var_char);
	printf("var_int = %d\n\n", var_int);
}

void explicitConversion3() {
	double x = 1.2;

	// Explicit conversion from double to int
	int sum = (int)x;

	printf("sum = %d\n\n", sum);
}
//int main()
//{
//	//implicitConversion1();
//
//	explicitConversion1();
//	explicitConversion2();
//	explicitConversion3();
//	return 0;
//}
