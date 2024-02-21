// C program to illustrate Pointers
#include <stdio.h>

void pointer_fun()
{
	int var = 10;

	int* ptr;	// declare pointer variable

	ptr = &var;	// note that data type of ptr and var must be same assign the address of a variable to a pointer

	printf("Value at ptr = %p \n", ptr);
	printf("Value at var = %d \n", var);
	printf("Value at *ptr = %d \n", *ptr);
}


// dummy structure
struct myStruct {
	int a;
};

// dummy function
void func(int a, int b) {};

// C Program to find the size of different pointers types
void sizeof_pointer()
{
	// dummy variables definitions
	int a = 10;
	char c = 'G';
	struct myStruct x;

	// pointer definitions of different types
	int* ptr_int = &a;
	char* ptr_char = &c;
	struct myStruct* ptr_str = &x;
	void (*ptr_func)(int, int) = &func;
	void* ptr_void = NULL;

	// printing sizes
	printf("Size of Integer Pointer \t:\t%ld bytes\n",sizeof(ptr_int));

	printf("Size of Character Pointer\t:\t%ld bytes\n",sizeof(ptr_char));

	printf("Size of Structure Pointer\t:\t%ld bytes\n",sizeof(ptr_str));

	printf("Size of Function Pointer\t:\t%ld bytes\n",sizeof(ptr_func));

	printf("Size of NULL Void Pointer\t:\t%ld bytes",sizeof(ptr_void));

}


//int main()
//{
//	//pointer_fun();
//
//	sizeof_pointer();
//
//
//	return 0;
//}
