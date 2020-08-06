#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0, c = 0;
	do{
		--c;
		a = a - 1;
	} while (a > 0);
	printf("%d", c);
	system("pause");
}