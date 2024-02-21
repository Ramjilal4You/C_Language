#define _CRT_SECURE_NO_WARNINGS
// C program to Open a File, Read from it, And Close the File
#include <stdio.h>
#include <string.h>

void OpenReadClose(){
	FILE* filePointer;	// Declare the file pointer

	char dataToBeRead[50];	// Declare the variable for the data to be read from file

	// Open the existing file test.txt using fopen() in read mode using "r" attribute
	filePointer = fopen("test.txt", "r");

	// Check if this filePointer is null which maybe if the file does not exist
	if (filePointer == NULL) {
		printf("test.txt file failed to open.");
	}
	else {

		printf("The file is now opened.\n\n");

		// Read the dataToBeRead from the file using fgets() method
		while (fgets(dataToBeRead, 50, filePointer) != NULL) 
		{
			printf("%s", dataToBeRead);	// Print the dataToBeRead
		}

		// Closing the file using fclose()
		fclose(filePointer);

		printf( "\nData successfully read from file test.txt & closed\n");
	}
}

// C Program to Read from a binary file using fread()
struct threeNum {
	int n1, n2, n3;
};
void BinaryOpenReadClose()
{
	int n;
	struct threeNum num;
	FILE* fptr = fopen("test.bin", "rb");
	
	if (fptr == NULL)
	{
		printf("Error! opening file");
	}
	else 
	{
		for (n = 1; n < 5; ++n) {
			//size_t fread(void *ptr, size_t size, size_t nmemb, FILE *stream) 
			fread(&num, sizeof(struct threeNum), 1, fptr);	
			printf("n1: %d\t\tn2: %d\t\tn3: %d\n", num.n1, num.n2, num.n3);
		}
		fclose(fptr);
	}
}
//
//int main() {
//
//	//OpenReadClose();
//
//	BinaryOpenReadClose();
//
//	return 0;
//}
