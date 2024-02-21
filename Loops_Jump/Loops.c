// C program to demonstrate for loop
#include <stdio.h>

void for_loop() {
	// 'i' <= 5 is the check/test expression
	// The loop will function if and only if 'gfg' is less than 5
	//'i++' will increments it's value by this so that the loop can iterate for further evaluation
	for (int i = 1; i <= 5; i++)
	{
		printf("Hello For Loop \n");  // statement will be printed
	}
}

// C program to demonstrate while loop
void while_example()
{
	// Initialization of loop variable
	int i = 0;

	// setting test expression as (i < 5), means the loop will execute till i is less than 5
	while (i < 5) {

		// loop statements
		printf("Hello While Loop\n");

		// updating the loop variable
		i++;
	}
}

// C Program to demonstrate the do...while loop behaviour
// when the condition is false from the start
void do_while_example(){
	int i = 0;

	do {
		printf("This is do while loop body.\n");

		i++;  //increment i;

	} while (i<5); // false condition
}


//int main()
//{
//	//for_loop();
//
//	//while_example();
//	
//	do_while_example();
//
//	return 0;  // Return statement to tell that everything executed safely
//}
