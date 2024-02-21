// C program to show use of call by value and call by Reference, How to pass arguments?
#include <stdio.h>

// C program to show use of call by value
void swap_call_by_value(int var1, int var2)
{
	int temp = var1;
	var1 = var2;
	var2 = temp;
}


// C program to show use of call by Reference
void swap_call_by_Reference(int* var1, int* var2)
{
	int temp = *var1;
	*var1 = *var2;
	*var2 = temp;
}

// //Driver code
//int main()
//{
//	int var1 = 3, var2 = 2;
//	/*printf("Before swap Value of var1 and var2 is: %d, %d\n", var1, var2);
//	swap_call_by_value(var1, var2);
//	printf("After swap Value of var1 and var2 is: %d, %d\n\n", var1, var2);*/
//
//	printf("Before swap Value of var1 and var2 is: %d, %d\n", var1, var2);
//	swap_call_by_Reference(&var1, &var2);
//	printf("After swap Value of var1 and var2 is: %d, %d\n\n", var1, var2);
//
//	return 0;
//}
