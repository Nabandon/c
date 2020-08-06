#include <stdio.h>
#include <stdlib.h>
int main()

{
	int a = 1, b = 2;
	a = a^b;
	b = a^b;
	a = a^b;
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}