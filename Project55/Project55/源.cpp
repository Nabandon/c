#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
int  jc(int n)
{
	if (n <= 1)
	{
		return 1;
	}
	else {
		return n*jc(n - 1);
	}
}int main()
{
	int n=0,ret=0;
	printf("输入要算的数:");
	scanf("%d", &n);
	ret=jc(n);
	printf("%d\n", ret);
	system("pause");
	return 0;
}