#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int feibo(int n)
{
	int ret;
	int i= 0;
	int n1 = 1, n2 = 1;
	if (n == 1 || n == 2)
	{
		return 1;
	}
	for (i = 2; i < n; i++)
	{
	    ret = n1 + n2;
		n1 = n2;
		n2 = ret;
	}
	return ret;
}int main()
{
	int n;
	printf("ÊäÈë:");
	scanf("%d", &n);
	printf("%d\n", feibo(n));
	system("pause");
	return 0;
}