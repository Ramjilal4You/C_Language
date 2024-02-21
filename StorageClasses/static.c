#include<stdio.h> 
int initializer(void)
{
	return 50;
}

//int main()
//{
//	//static variables can only be initialized using constant literals
//	//static int i = 100;
//	static int i = initializer();	// Error(active)	E0059	function call is not allowed in a constant expression StorageClasses	
//	printf("\nvalue of i = %d\n", i);
//
//	return 0;
//}




// C Program to illustrate the static variable lifetime
#include <stdio.h>

//// function with static variable
//int fun()
//{
//	static int count;
//	count++;
//	return count;
//}
//
//int main()
//{
//	printf("\n%d ", fun());
//	printf("\n%d \n", fun());
//	printf("%d \n", fun());
//	return 0;
//}


//Example : static function

//defined in some other file so not allowed
//Error	LNK2005	staticStorageClass already defined in static.obj	StorageClasses	
//static void staticStorageClass() {
//	//duplicate definition
//	printf("\nI'm static function.\n");
//}
//
//int main() {
//	staticStorageClass();
//	return 0;
//}