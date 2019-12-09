#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int jc(int n)
{

	if (n == 1)
		return 1;
		return n*jc(n - 1);
	
}
int main()
{
	int a=1;
	scanf("%d", &a);
	jc(a);
	
	printf("%d\n", jc(a));
	system("pause");
	return 0;
}