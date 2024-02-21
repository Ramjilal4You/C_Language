//// C Program to illustrate the macro
//#include <stdio.h>
//
//#define LIMIT 5	// macro definition
//#define AREA(l, b) (l * b)	// macro with parameter or function like macros
//
// //Macro definition
// #define YOUTUBE FOLLOWERS
// #define FOLLOWERS 150
//
//// Multi-line Macro definition
//#define ELE 1, \
//			2, \
//			3
//
//// print a variable name in C 
//// Stringizing Operator : Basically # directive converts its argument in a string.
//#define getName(var) #var 
//
//// C program to illustrate (##) operator 
//// Macro definition using the Token-pasting operator 
//#define fun(a, b) a##b 
//
//int main()
//{
//	for (int i = 1; i <= LIMIT; i++) {
//		printf("%d ", i);
//	}
//	printf("\n");
//
//
//	//Example - macro with parameter or function like macros
//	int area = AREA(10, 5);
//	printf("\nArea of rectangle is: %d\n", area);
//
//
//    printf("\nRamjilal4you have %dK followers on Youtube\n", YOUTUBE);
//
//
//	int arr[] = { ELE };	// Array arr[] with elements defined in macros
//	printf("\nElements of Array are: ");
//	for (int i = 0; i < 3; i++) {
//		printf("%d ", arr[i]);
//	}
//
//	// print a variable name in C 
//	// Stringizing Operator : Basically # directive converts its argument in a string.
//	int myVar;
//	printf("\n\nVariable name : %s\n", getName(myVar));
//
//	
//
//	// Printing the concatenated value of x and y 
//	int xy = 30;
//	printf("\nconcat xy : %d\n", fun(x, y)); // concat(x, y) replaced by x##y --> xy
//
//	
//	// Pre defined macros
//	printf("\nCurrent File :%s\n", __FILE__);
//	printf("Current Date :%s\n", __DATE__);
//	printf("Current Time :%s\n", __TIME__);
//	printf("Line Number :%d\n", __LINE__);
//
//	printf("\n");
// 
//	return 0;
//}
//
