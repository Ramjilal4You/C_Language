#define _CRT_SECURE_NO_WARNINGS	//to disable the crt secure related warning/errors

// C Program to illustrate file opening
#include <stdio.h>
#include <stdlib.h>


void fopen_readmode()
{
	FILE* fptr;	// file pointer variable to store the value returned by fopen

	fptr = fopen("test1.txt", "r");	// opening the file in read mode

	// checking if the file is opened successfully
	if (fptr == NULL) {
		printf("The test.txt file is not opened. The program will now exit.\n");
		exit(0);
	}
	else {
		printf("The test.txt file is opened. The program will continue.\n");
	}
}

// C Program to create a file
void fopen_writemode()
{
	FILE* fptr;	// file pointer

	fptr = fopen("test1.txt", "w");	// creating file using fopen() access mode "w"

	// checking if the file is created
	if (fptr == NULL) {
		printf("The test.txt file is not opened. The program will exit now.\n");
		exit(0);
	}
	else {
		printf("The test.txt file is created/opened Successfully.\n");
	}

}

//for reading the complete file
void fileRead()
{
	FILE* fptr = fopen("test.txt", "r");
	if (fptr == NULL){
		printf("Cannot open file \n");
		exit(0);
	}

	// Read contents from file 
	char c = fgetc(fptr);
	while (c != EOF)
	{
		printf("%c", c);
		c = fgetc(fptr);
	}

	fclose(fptr);
}

// C program that demonstrates the use of remove() function
void deleteFile()
{
	if (remove("test1.txt") == 0)
		printf("Deleted successfully\n");
	else
		printf("Unable to delete the file\n");
}


//int main() {
//
//	//fopen_readmode();	//open file in read mode
//
//	//fopen_writemode();	//open/create file in write mode
//
//	//fileRead();	//reading the complete file
//
//	deleteFile();
//
//	return 0;
//}
