#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  DigitSum(int n)
{
	int static sum = 0;
	if (n != 0)
	{
		sum += n % 10;
	    DigitSum(n / 10);
	}return sum;
}int main()
{
	int n=0;
	printf("输入一个非负整数:\n");
	scanf("%d", &n);
	printf("%d\n", DigitSum(n));
	system("pause");
	return 0;
}