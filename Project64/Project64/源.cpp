#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a = 0x11223344;
	char *pc = (char*)&a;
	*pc = 0;
	printf("%x\n", a);
	system("pause");
	return 0;
}