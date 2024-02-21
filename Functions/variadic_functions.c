// C program to describe Variadic function

#include <stdarg.h>
#include <stdio.h>

// Variadic function to add numbers
void AddNumbers(int k, int n, ...){
	int Sum = 0;

	va_list ptr;  // Declaring pointer to the argument list

	va_start(ptr, n);  // Initializing argument to the list pointer

	//int a = -1, c = -1, d = -1;
	//char b = '-';
	//a = va_arg(ptr, int);	// va_arg(ptr, int) --> Accessing current variable and pointing to next one
	//b = va_arg(ptr, char);
	//c = va_arg(ptr, int);
	//d = va_arg(ptr, int);
	//printf("\n\nk=%d, n=%d, a= %d, b=%c, c=%d, d=%d", k, n, a, b, c, d);

	printf("\n\n%d %d", k, n);
	for (int i = 0; i < n; i++)
		printf(" %d", va_arg(ptr, int)); // Accessing current variable and pointing to next one

	va_end(ptr);  // Ending argument list traversal

	return;
}

void fun_name(int a, int b) {
	printf("%d %d ", a, b);
}

//int main()
//{
//	//fun_name(5, 6, 7);
//
//	printf("Variadic functions:");
//
//	// Variable number of arguments
//	/*AddNumbers(5, 2, 1, 'A');
//
//	AddNumbers(5, 3, 3, 4.0, 5);*/
//
//	AddNumbers(5, 6, 6, 7, 8, 9, 10, 11);
//
//	printf("\n");
//
//	return 0;
//}
