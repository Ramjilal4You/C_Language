//#include <stdio.h>
//#include <stdlib.h>
//
//void MemAlloc2DArray_1(){
//	int r = 3, c = 4;
//
//	int* ptr = malloc((r * c) * sizeof(int));
//
//	/* Putting 1 to 12 in the 1D array in a sequence */
//	for (int i = 0; i < r * c; i++)
//		ptr[i] = i + 1;
//
//	/* Accessing the array values as if it was a 2D array */
//	for (int i = 0; i < r; i++) {
//		for (int j = 0; j < c; j++)
//			printf("%d ", ptr[i * c + j]);
//		printf("\n");
//	}
//
//	free(ptr);
//}
//
//void MemAlloc2DArray_2()
//{
//	int r = 3, c = 4;
//	int i, j, count;
//
//	int* arr[3];
//	for (i = 0; i < r; i++)
//		arr[i] = (int*)malloc(c * sizeof(int));
//
//	// Note that arr[i][j] is same as *(*(arr+i)+j)
//	count = 0;
//	for (i = 0; i < r; i++)
//		for (j = 0; j < c; j++)
//			arr[i][j] = ++count; // Or *(*(arr+i)+j) = ++count
//
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//
//	/* Code for further processing and free the dynamically allocated memory */
//	for (int i = 0; i < r; i++)
//		free(arr[i]);
//}
//
//void MemAlloc2DArray_3()
//{
//	int r = 3, c = 4, i, j, count;
//
//	int** arr = (int**)malloc(r * sizeof(int*));
//	for (i = 0; i < r; i++)
//		arr[i] = (int*)malloc(c * sizeof(int));
//
//	// Note that arr[i][j] is same as *(*(arr+i)+j)
//	count = 0;
//	for (i = 0; i < r; i++)
//		for (j = 0; j < c; j++)
//			arr[i][j] = ++count; // OR *(*(arr+i)+j) = ++count
//
//	for (i = 0; i < r; i++) {
//		for (j = 0; j < c; j++)
//			printf("%d ", arr[i][j]);
//		printf("\n");
//	}
//
//	/* Code for further processing and free the dynamically allocated memory */
//
//	for (int i = 0; i < r; i++)
//		free(arr[i]);
//
//	free(arr);
//}
//
//int main() {
//
//	//MemAlloc2DArray_1();	//Using a single pointer and a 1D array with pointer arithmetic 
//
//	MemAlloc2DArray_2();	//Using an array of pointers 
//	printf("\n\n");
//	MemAlloc2DArray_3();	//Using pointer to a pointer  
//
//	return 0;
//}
