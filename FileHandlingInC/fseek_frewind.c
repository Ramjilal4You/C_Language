#define _CRT_SECURE_NO_WARNINGS
// C Program to demonstrate the use of fseek() in C
#include <stdio.h>

void fseek_rewind_ftell()
{
	FILE* fp  = fopen("test.txt", "r");

	// Printing position of pointer
	printf("Initial Position : %ld\n", ftell(fp));
	/*
	* int fseek(FILE *stream, long offset, int origin);
	* SEEK_SET: Beginning of the file.
	* SEEK_CUR: Current position of the file pointer.
	* SEEK_END: End of the file.
	*/
	// Moving pointer to end
	fseek(fp, 0, SEEK_END);

	// Printing position of pointer
	printf("After fseek() Position : %ld\n", ftell(fp));

	// using rewind()
	//rewind(fp);	//void rewind(FILE *stream);
	fseek(fp, 0, SEEK_SET);

	// Printing position of pointer
	printf("After rewind() Position : %ld\n", ftell(fp));

}


//int main()
//{
//	fseek_rewind_ftell();
//
//	return 0;
//}