#include <stdio.h>

// error (global scope)		--> depends on compiler, you may get warning or error
//int x = 10;	//warning C4042: 'x': has bad storage class
//int main()
//{
//	// works (inside a block)
//	register int i = 10;
//	printf("%d\n", i);
//	printf("%d", x);
//	return 0;
//}


// C program that demonstrates register can not be used with static
//int main()
//{
//	// Declaring an integer variable 'i' and initializing it
//	// with 10
//	int i = 10;
//	// ERROR: Attempting to use both register and static storage classes for 'a'
//	register static int* a = &i;	//Error(active)	E0081	more than one storage class may not be specified
//	printf("%d", *a);
//	getchar();
//	return 0;
//}

// C program that demonstrates accessing the address of a register is invalid
//int main()
//{
//	register int i = 10;	// Declaring a register variable 'i' and initializing it with 10
//	
//	
//	int* a = &i;	//Error	C2103	'&' on register variable
//	printf("\n%d\n", *a);
//
//	return 0;
//}


// C program that demonstrates register keyword can be used with pointer variables
//int main()
//{
//	int i = 10;	// Declaring an integer variable 'i' and initializing it with 10
//	
//	register int* a = &i;	// Declaring a register pointer variable 'a' and assigning the address of 'i' to it
//	printf("\n%d\n", *a);
//
//	return 0;
//}

