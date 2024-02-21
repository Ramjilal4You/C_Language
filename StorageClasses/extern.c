#include <stdio.h> 

//Example - 1 : This program compiles successfully. var is defined (and declared implicitly) globally.
//int var;
//int main(void)
//{
//	var = 10;
//	printf("\nvar is %d\n", var);
//	return 0;
//}


//Example - 2 : This program compiles successfully. Here var is declared only. Notice var is never used so no problems arise.
//extern int var;
//int main(void)
//{
//	printf("\nAll Good.\n");
//	return 0;
//}


//Example - 3 :	This program throws an error during the linking phase because var is declared but not defined anywhere.
//extern int var;
//int main(void)
//{
//	var = 10;	//error LNK2001: unresolved external symbol var
//	return 0;
//}


////Example - 4 : No error as var is declared & defined. 
// When extern variable is initialized, then memory for this is allocated and it will be considered defined
//extern int var = 0;
//int main(void)
//{
//	var = 10;
//	printf("\nvar is %d\n", var);
//	return 0;
//}



//Example - 5 : Defined in some other file, directly using the value
//global variable is bydefault accessible in all files

//int main()
//{
//	extern int x;		//defined in other file
//	x = 10;				//directly asigning the value
//
//	printf("\nx is %d\n", x);
//
//	return 0;
//}
