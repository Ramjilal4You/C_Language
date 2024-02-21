#include <stdio.h>
// pointer increment and decrement
//pointers are incremented and decremented by the size of the data type they point to
void increment_and_decrement()
{
	int a = 22;
	int* p = &a;
	printf("p = %u\n", p); // p = 6422288  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u
	p++;
	printf("p++ = %u\n", p); //p++ = 6422292 +4 // 4 bytes
	p--;
	printf("p-- = %u\n\n", p); //p-- = 6422288	 -4 // restored to original value

	double b = 22.22;
	double* q = &b;
	printf("q = %u\n", q); //q = 6422284
	q++;
	printf("q++ = %u\n", q); //q++ = 6422288	 +4 // 4 bytes
	q--;
	printf("q-- = %u\n\n", q); //q-- = 6422284	 -4 // restored to original value

	char c = 'a';
	char* r = &c;
	printf("r = %u\n", r); //r = 6422283
	r++;
	printf("r++ = %u\n", r); //r++ = 6422284	 +1 // 1 byte
	r--;
	printf("r-- = %u\n\n", r); //r-- = 6422283	 -1 // restored to original value
}

// C program to illustrate pointer Addition
void pointer_Addition()
{
	// Pointer to an integer, Pointer stores the address of N
	int N = 4;
	int* ptr1 = &N;

	printf("Pointer ptr1 before Addition: ");
	printf("%u \n", ptr1);  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u

	ptr1 += 3;  //ptr1 = ptr1 + 3;
	printf("Pointer ptr1 after Addition: ");
	printf("%u \n\n", ptr1);

	double D = 5.0;
	double* ptr2 = &D;

	printf("Pointer ptr2 before Addition: ");
	printf("%u \n", ptr2);

	// Addition of 3 to ptr2
	ptr2 = ptr2 + 3;
	printf("Pointer ptr2 after Addition: ");
	printf("%u \n\n", ptr2);
}

// C program to illustrate Subtraction of two pointers
void Subtraction_of_two_pointers()
{
	int x = 6; // Integer variable declaration
	int N = 4;

	
	int* ptr1 = &x; // stores address of x
	int* ptr2 = &N; // stores address of N

	printf(" ptr1 = %u, ptr2 = %u\n", ptr1, ptr2);  // %p gives an hexa-decimal value, convert it into an unsigned int value by using %u
	
	x = ptr2 - ptr1;  // Subtraction of ptr2 and ptr1 //ptr2 - ptr1 = 32, 32/4 = 8

	printf("Subtraction of ptr1 & ptr2 is %d\n\n", x);  // Print x to get the Increment between ptr1 and ptr2
}

// C Program to illustrare pointer comparision
void pointer_comparision()
{
	int arr[5]; // declaring array

	int* ptr1 = &arr;	// declaring pointer to array name
	
	int* ptr2 = &arr[0];	// declaring pointer to first element

	if (ptr1 == ptr2) {
		printf("Pointer to Array Name and First Element are Equal.\n\n");
	}
	else {
		printf("Pointer to Array Name and First Element are not Equal.\n\n");
	}

}

void pointer_arithmetic_example(){

	int Arr[] = { 1, 2, 3, 4, 5, 6 };
	
	// variable to store the size of Arr
	int length = *(&Arr + 1) - Arr;  //Not same as Arr+1

	printf("Number of elements in Arr[] is: %d\n", length);
}

//int main() {
//	//increment_and_decrement();
//
//	//pointer_Addition();  //same concept applies for Subtraction  
//
//	//Subtraction_of_two_pointers();
//
//	//pointer_comparision();
//
//	pointer_arithmetic_example();
//
//	return 0;
//}
