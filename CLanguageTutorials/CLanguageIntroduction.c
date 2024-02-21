// C program to demonstrate the
// declaration, definition and initialization

#include <stdio.h>


// Global variable
int global_var;

int main()
{
	//undefined reference to `declared_var'
	int declared_var = 10;  //define it here
	//declared_var = 10;
	printf("Declared_var: %d\n", declared_var);  //not defined 

	// Global variable
	printf("global_var: %d\n", global_var);


	// declaration + definition + initialization
	int ini_var = 25;
	printf("Value of ini_var: %d\n", ini_var);

	fun();

	return 0;
}

void fun() {
	printf("Value of last_g: %d\n", last_g);
}