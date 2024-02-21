/*
%d - for printing integers
%f - for printing floating-point numbers
%c - for printing characters
%s - for printing strings
%p - for printing memory addresses
%x - for printing hexadecimal values
*/
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void output_example() {
	int num1 = 99;
	printf("The value of num is %d\n\n", num1);

	float pi = 3.14159;
	printf("The value of pi is approximately %f\n\n", pi);

	char letter = 'a';
	printf("The letter is %c\n\n", letter);

	int a = 10;
	int* ptr = &a;
	printf("Address of variable 'a' is %p\n", &a);
	printf("value at ptr(&a) is %d\n\n", *ptr);

	unsigned int num = 255;
	printf("The value of num in hexadecimal is: %x\n\n", num);

	//printf() : It returns total number of Characters Printed, Or negative value if any error
	long int n = 123456789;
	printf("\nThe value returned by printf() is : %d\n\n", printf("%ld", n));

}


void input_example() {

	//scanf() : It returns total number of Inputs Scanned successfully, or EOF if input failure occurs.
	int a, b;
	char str[100];

	printf("\nEnter string: ");
	scanf("%s", &str);
	printf("Entered string value : %s", str);

	// scanf() with one input
	printf("\n\nEnter 1 number: ");
	printf("First scanf() returns : %d\n", scanf("%d", &a));
	printf("Entered integer value : %d\n\n", a);

	// scanf() with two inputs
	printf("\nEnter 2 number: ");
	printf("Second scanf() returns : %d\n", scanf("%d%d", &a, &b));
	printf("Entered integer values : %d, %d\n\n", a, b);

}

//int main(){
//	//output_example();
//
//	input_example();
//
//	return 0;
//}

