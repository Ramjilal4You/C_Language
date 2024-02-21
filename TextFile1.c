// C code to illustrate Internal Linkage
#include <stdio.h>

static int ammount = 200;

int main()
{
	printf("\n TestFile1.c : %d\n", ammount);

	return 0;
}
