// C program to illustrate If statement
#include <stdio.h>

void if_example() {
	int i = 20;

	if (i > 15) {
		printf("in if block : %d is greater than 15\n", i);
	}

	printf("I am Not in if block\n");
}

// C program to illustrate If statement
void if_else_example()
{
	int i = 10;
	if (i < 15) {

		printf("in if block : %d is smaller than 15\n", i);
	}
	else {

		printf("Not in if block : %d is greater than 15\n", i);
	}
}

// C program to illustrate nested-if statement
void nested_if_example()
{
	int i = 10;

	if (i == 10) {
		// First if statement
		if (i < 15)
			printf("i is smaller than 15\n");

		// Nested - if statement Will only be executed if statement above is true
		if (i < 12)
			printf("i is smaller than 12 too\n");
		else
			printf("i is greater than 15\n");
	}
}

// C program to illustrate if else if statement
void if_else_if_example()
{
	int i = 25;

	if (i == 10)
		printf("i is 10\n");
	else if (i == 15)
		printf("i is 15\n");
	else if (i == 20)
		printf("i is 20\n");
	else
		printf("i is not present\n");
}

// C Program to illustrate the use of switch statement
void switch_example()
{
	// variable to be used in switch statement
	int var = 2;

	// declaring switch cases
	switch (var) {
	case 1:
		printf("Case 1 is executed\n");
		break;
	case 2:
		printf("Case 2 is executed\n");
		break;
	default:
		printf("Default Case is executed\n");
		break;
	}
}


//int main()
//{
//	//if_example();
//	//if_else_example();
//	//nested_if_example();
//	//if_else_if_example();
//	switch_example();
//
//	return 0;
//}
