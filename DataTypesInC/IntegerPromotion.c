#include <stdio.h>

void Example1() {
	char a = 30, b = 40, c = 10;
	char d = (a * b) / c;
	printf("%d\n\n", d);
}

void Example2() {
	char a = 0xfb;
	unsigned char b = 0xfb;
	
	printf("a = %c", a);
	printf("\nb = %c", b);
	
	if (a == b)
		printf("\nSame");
	else
		printf("\nNot Same");
	printf("\n\n");
}

void Example3() {
	char ch1 = 125, ch2 = 10;
	ch1 = ch1 + ch2;
	printf("%d\n", ch1);
	printf("%c\n\n", ch1 - ch2 - 4);
}

//int main(){
//	Example1();
//	Example2();
//	Example3();
//
//	return 0;
//}
