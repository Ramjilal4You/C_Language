//#include <stdio.h>
//#include <stdlib.h>
//
//int main()
//{
//	// This pointer will hold the base address of the block created
//	int* ptr;
//	int n, i;
//
//	// Get the number of elements for the array
//	printf("Enter number of elements:");
//	scanf_s("%d", &n);
//
//	ptr = (int*)malloc(n * sizeof(int));	// Dynamically allocate memory using malloc()
//
//	// Check if the memory has been successfully allocated by malloc or not
//	if (ptr == NULL) {
//		printf("Memory not allocated.\n");
//		exit(0);
//	}
//	else {
//		// Memory has been successfully allocated
//		printf("\n%zu Bytes of Memory successfully allocated using malloc.\n", n * sizeof(int));
//
//		// Get the elements of the array
//		for (i = 0; i < n; ++i) {
//			ptr[i] = i + 1;
//		}
//
//		// Print the elements of the array
//		printf("\nThe elements of the array are: ");
//		for (i = 0; i < n; ++i) {
//			printf("%d, ", ptr[i]);
//		}
//	}
//	printf("\n");
//	return 0;
//}
