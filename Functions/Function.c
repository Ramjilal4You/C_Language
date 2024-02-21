// C program to show User-defined & Library function and function declaration, definition and call
#include <stdio.h>
#include <math.h>

//function definition 
// Function that takes two parameters a and b as inputs and returns their sum
int sum(int a, int b)
{
	printf("In sum\n");
	return a + b;
}

//int main()
//{
//	//function call 
//	// Calling sum function and storing its value in add variable
//	int add = sum(10, 30);
//
//	printf("Sum is: %d\n\n", add);
//
//	//C library function
//	// Computing the square root with the help of predefined C library function
//	//double Number = 49;
//	//double squareRoot = sqrt(Number);  //double sqrt(double x);
//	//printf("The Square root of %.2lf = %.2lf \n", Number, squareRoot);
// //
// //   printf("Value 8.0 ^ 3 = %lf\n", pow(8, 3));  //double pow(double x, double y);
//
//	return 0;
//}

