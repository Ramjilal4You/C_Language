// C program to illustrate jump statements - break, continue, goto, return statements
#include <stdio.h>

// C program to illustrate to show usage of break statement
void break_findElement(){
	int arr[] = { 1, 2, 3, 4, 5, 6 };
	int size = 6;  // no of elements
	int key = 3;  // key to be searched

	// loop to traverse array and search for key
	for (int i = 0; i < size; i++) {
		if (arr[i] == key) {
			printf("Element found at position: %d\n", (i + 1));
			break;
		}
	}

}

// C program to explain the use of continue statement
void continue_example(){
	// loop from 1 to 10
	for (int i = 1; i <= 10; i++) {
		// If i is equals to 6, continue to next iteration without printing
		if (i == 6)
			continue;

		printf("%d ", i);   // otherwise print the value of i
	}
	printf("\n");
}

// C program to print numbers from 1 to 10 using goto statement
void goto_printNumbers(){
	int n = 1;
label:
	printf("%d ", n);
	n++;
	if (n <= 10)
		goto label;
}

// C code to illustrate return statement
void return_example() {
	printf("Hi return\n");
	return;
	printf("After return\n");
}

//int main(){
//	//break_findElement();  // Calling function to find the key
//
//	//continue_example();
//
//	//goto_printNumbers();
//
//	return_example();
//	printf("In Main\n");
//	return 0;
//}
