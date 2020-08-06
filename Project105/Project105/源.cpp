#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, sum1 = 0, sum2 = 0, a[10];
	printf("input a[0]~a[9]\n");
	for (i = 0; i < 10; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 10;i++)
	if (a[i] % 2 == 0)
		sum1 += a[i];
	else sum2 += a[i];
	printf("sum1=%d,sum2=%d", sum1, sum2);
	system("pause");
}