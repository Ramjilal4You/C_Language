// C Program to access array elements using pointer
#include <stdio.h>
#include <stdlib.h>

void pointerTypes() {
	//Integer Pointers
	int val_int = 10;
	int* ptr_int = &val_int;

	//Array Pointer
	int arr[] = { 1,2,3,4,5 };
	char* ptr_arr = arr; //arr, &arr, &arr[0]; gives same base address of an array

	//NULL Pointer
	int* null_ptr = NULL;

	//Void Pointer(generic pointers)
	void* ptr_void;

	//Wild Pointers
	int* ptr_wild;  //un initialized ptr

	//Pointers with constants
	//Constant Pointers  
	int val1 = 10;
	int val2 = 20;
	int * const const_ptr = &val1;
	//const_ptr = &val2;   //this will give an error

	//Pointer to Constant
	const int* ptr_to_const = &val1;
	//*ptr_to_const = 15;	 //this will give an error

	//Dangling Pointers 
	int* ptr_dang = (int*)malloc(sizeof(int));
	free(ptr_dang);
	//now ptr is dangling pointer
}
void fun1()
{
	// Declare an array
	int val[3] = { 5, 10, 15 };

	// Declare pointer variable
	int* ptr;

	// Assign address of val[0] to ptr.
	// We can use ptr=&val[0];(both are same)
	ptr = val;

	printf("Elements of the array are: ");

	printf("%d, %d, %d\n", ptr[0], ptr[1], ptr[2]);

	return;
}
void fun2()
{

	// defining array
	int arr[] = { 1, 2, 3, 4, 5 };

	/*printf("%u\n", arr);
	printf("%u\n", &arr);
	printf("%u\n\n", &arr[0]);*/

	// defining the pointer to array
	int* ptr_arr = arr;

	int len = *(&arr + 1) - arr;   //Not same as arr+1
	printf("Length of Array : %d\n", len);  

	// traversing array using pointer arithmetic
	for (int i = 0; i < len; i++) {
		printf("%d ", *ptr_arr++);
	}
	return;
}


//int main()
//{
//	pointerTypes();
// 
//	//fun1();
//
//	//fun2();
//
//	return 0;
//}
