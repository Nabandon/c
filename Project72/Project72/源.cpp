#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 1;
	int *p = &a;
	printf("%p\n%d\n", p, *p);
	system("pause");
	return 0;
}