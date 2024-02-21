#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void example1() {
	// A simple scanset example
	char str1[128];
	printf("Enter a string [A-Z]: ");
	scanf("%[A-Z]s", str1);
	printf("You entered: %s\n\n", str1);
}

void example2() {
	/* Another scanset example with ^ */
	char str2[128];
	printf("Enter a string with j: ");
	scanf("%[^j]s", str2);
	printf("You entered: %s\n\n", str2);
}

//int main() {
//	//example1();
//
//	example2();
//
//	return 0;
//}

