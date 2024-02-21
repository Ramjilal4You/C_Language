// C Program to Demonstrate the working concept of
// Operators
#include <stdio.h>

void example1()
{

	int a = 10, b = 5;
	printf("The value of a is %d\n", a);
	printf("The value of b is %d\n", b);

	// Arithmetic operators
	printf("Following are the Arithmetic operators in C\n");
	printf("The value of a + b is %d\n", a + b);
	printf("The value of a - b is %d\n", a - b);

	printf("The value of a * b is %d\n", a * b);
	printf("The value of a / b is %d\n", a / b);
	printf("The value of a % b is %d\n", a % b);
	
	printf("The value of a++ is %d\n", a++);  // First print (a) and then increment it by 1
	printf("The value of a-- is %d\n", a--);  // First print (a+1) and then decrease it by 1
	printf("The value of ++a is %d\n", ++a);  // Increment (a) by (a+1) and then print
	printf("The value of --a is %d\n", --a);  // Decrement (a+1) by (a) and then print

	// Assignment Operators --> used to assign values to
	// variables int a =3, b=9; char d='d';

	// Comparison operators
	// Output of all these comparison operators will be (1) if it is true and (0) if it is false
	printf("\nFollowing are the comparison operators in C\n");
	printf("The value of a == b is %d\n", (a == b));
	printf("The value of a != b is %d\n", (a != b));
	printf("The value of a >= b is %d\n", (a >= b));
	printf("The value of a <= b is %d\n", (a <= b));
	printf("The value of a > b is %d\n", (a > b));
	printf("The value of a < b is %d\n", (a < b));

	// Logical operators
	printf("\nFollowing are the logical operators in C\n");
	printf("The value of this logical and operator ((a==b) && (a<b)) is:%d\n", ((a == b) && (a < b)));
	printf("The value of this logical or operator ((a==b) || (a<b)) is:%d\n", ((a == b) || (a < b)));
	printf("The value of this logical not operator (!(a==b)) is:%d\n", (!(a == b)));

	// Bitwise operators
	// a = 1(00000001), b = 2(00000010)
	a = 1, b = 2;
	printf("\nFollowing are the Bitwise operators in C\n");
	printf("The value of a & b is:%d\n", a & b);  // The result is 00000000
	printf("The value of a|b is:%d\n", a | b);    // The result is 00000011
	printf("The value of a^b is:%d\n", a ^ b);    // The result is 00000011
	printf("The value of a<<1 is:%d\n", a << 1);    // The result is 00000010
	printf("The value of a>>1 is:%d\n", a >> 1);    // The result is 00000000

	// Conditional operator
	printf("\nFollowing are the Conditional operators in C\n");
	printf("The value of this Conditional operator (a>b?a:b) is:%d\n", a > b ? a : b);

	printf("\nThe value of sizeof(int) operator is:%lu\n", sizeof(int));
	printf("The value of sizeof(a+b) operator is:%lu\n", sizeof(a+b));

}

// C Program to illustrate the precedence and associativity of the operators in an expression
void precedence_and_associativity() {
	int exp = 100 + 200 / 10 - 3 * 10;
	printf("\n100 + 200 / 10 - 3 * 10 = %d\n\n", exp);
}
//int main() {
//	//example1();
//
//	precedence_and_associativity();
//
//	return 0;
//}