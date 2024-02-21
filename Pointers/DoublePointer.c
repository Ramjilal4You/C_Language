// C program to demonstrate pointer to pointer
#include <stdio.h>

void double_pointer() {
	int var = 789;

	// pointer for var
	int* ptr = &var;	// storing address of var in ptr2

	// double pointer for ptr
	int** d_ptr = &ptr;	// Storing address of ptr2 in ptr1

	// Displaying value of var using both single and double pointers
	printf("Value of var = %d\n", var);
	printf("Value of var using single pointer = %d\n", *ptr);
	printf("Value of var using double pointer = %d\n\n", **d_ptr);

	// size of single pointer
	printf(" Size of normal Pointer: %d \n", sizeof(ptr));

	// size of double pointer
	printf(" Size of Double Pointer: %d \n\n", sizeof(d_ptr));
}

//int main()
//{
//	double_pointer();
//
//	return 0;
//}
