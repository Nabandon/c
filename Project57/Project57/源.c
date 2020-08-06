#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n = 10;
	char *pc = (char*)&n;
	int  *pi = &n;
	printf("%p\n", &n);
	printf("%p\n", pc);
	printf("%p\n", pc+1);
	printf("%p\n", pi);
	printf("%p\n", pi+1);
	system("pause");
	return 0;
}