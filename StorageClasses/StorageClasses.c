// A C program to demonstrate different storage classes 
#include <stdio.h> 

int x;	// declaring the variable which is to be made extern an initial value can also be initialized to x 

void autoStorageClass(){
	printf("Demonstrating auto class\n");

	auto int a = 32;	// declaring an auto variable (simply writing "int a=32;" works as well) 

	printf("Value of the variable 'a' declared as auto: %d\n", a);	// printing the auto variable 'a' 
	printf("--------------------------------\n");
}

void registerStorageClass(){
	printf("\nDemonstrating register class\n");

	register char b = 'G';	// declaring a register variable 

	//char* str = &b;	//Error	C2103 : '&' on register variable StorageClasses

	printf("Value of the variable 'b' declared as register: %d\n",b);	// printing the register variable 'b' 
	printf("--------------------------------\n");
}

void externStorageClass(){
	printf("\nDemonstrating extern class\n");

	// telling the compiler that the variable x is an extern variable and has been defined elsewhere (above the main function) 
	extern int x;

	printf("Value of the variable 'x' declared as extern: %d\n",x);	// printing the extern variables 'x' 

	x = 2;	// value of extern variable x modified 

	printf("Modified value of the variable 'x' declared as extern: %d\n",x);	// printing the modified values of extern variables 'x' 
	printf("--------------------------------\n");
}

void staticStorageClass(){
	int i = 0;
	printf("\nDemonstrating static class\n");

	// using a static variable 'y' 
	printf("Declaring 'y' as static inside the loop.But this declaration will occur only"
		" once as 'y' is static.\nIf not, then every time the value of 'y' "
		"will be the declared value 5 as in the case of variable 'p'\n");
	
	printf("\nLoop started:\n");
	for (i = 1; i < 5; i++) { 
		static int y = 5;	// Declaring the static variable 'y'

		int p = 10;	// Declare a non-static variable 'p' 

		y++;	// Incrementing the value of y and p by 1 
		p++;

		printf("\nThe value of 'y', declared as static, in %d iteration is %d\n",i, y);	// printing value of y at each iteration 

		printf("The value of non-static variable 'p', in %d iteration is %d\n",i, p);	// printing value of p at each iteration 
	}

	printf("\nLoop ended:\n");
	printf("--------------------------------\n");
}

//int main(){
// 
//	autoStorageClass();	// To demonstrate auto Storage Class
//
//	registerStorageClass();	// To demonstrate register Storage Class
//
//	externStorageClass();	// To demonstrate extern Storage Class
//
//	staticStorageClass();	// To demonstrate static Storage Class
//
//	return 0;
//}
