#define _CRT_SECURE_NO_WARNINGS
// C program to Open/create a File, Write in it, And Close the File
#include <stdio.h>
#include <string.h>

void createWriteClose(){
	FILE* filePointer;	// Declare the file pointer

	// Get the data to be written in file
	char dataToBeWritten[50] = "Ramjilal4You- A Programming Channel for you";

	// Open the existing file file.c using fopen() in write mode using "w" attribute
	filePointer = fopen("test.txt", "w");

	// Check if this filePointer is null which maybe if the file does not exist
	if (filePointer == NULL) {
		printf("test.txt file failed to open.");
	}
	else {

		printf("The file is now opened/created.\n");

		// Write the dataToBeWritten into the file
		if (strlen(dataToBeWritten) > 0) {

			// writing in the file using fputs()
			fputs(dataToBeWritten, filePointer);
			fputs("\n", filePointer);
		}

		// Closing the file using fclose()
		fclose(filePointer);

		printf("Data successfully written in file test.txt & closed\n");
	}
}

// C program to write to a Binary file using fwrite()
struct threeNum {
	int n1, n2, n3;
};
void BinaryOpenWriteClose()
{
	int n;
	struct threeNum num;	// Structure variable declared here.
	FILE* fptr = fopen("test.bin", "wb");
	if (fptr == NULL) 
	{
		printf("Error! opening file");
		exit(1);	// If file pointer will return NULL Program will exit.
	}

	int flag = 0;
	for (n = 1; n < 5; ++n) {
		num.n1 = n;				//1, 2, 3, 4
		num.n2 = 2 * n;			//2, 4, 6, 8
		num.n3 = 2 * n + 1;		//3, 5, 7, 9
		// size_t fwrite(const void *ptr, size_t size, size_t nmemb, FILE *stream)
		flag = fwrite(&num, sizeof(struct threeNum), 1, fptr);
	}

	// checking if the data is written
	if (!flag) {
		printf("Write Operation Failure");
	}
	else {
		printf("Write Operation Successful");
	}

	fclose(fptr);

	return 0;
}


//int main() {
//
//	//createWriteClose();
//
//	BinaryOpenWriteClose();
//
//	return 0;
//}
