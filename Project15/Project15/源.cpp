#include <stdio.h>
#include <stdlib.h>
void swap(int *i, int *j)
{
	int tmp = 0;
	tmp = *i;
	*i = *j;
	*j = tmp;
}int main()
{
	int a = 1;
	int b= 2;
	 swap( &a ,&b);
	printf("a=%d\nb=%d\n", a, b);
	system("pause");
	return 0;
}