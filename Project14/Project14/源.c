#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	int i = 0;
	int j = 0;
	int k = 0;
	int n = 0;
	printf("请输入一个数:\n");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%d*%d\t", i, j, i*j);
		}
		printf("\n");
	}system("pause");
	return 0;
}
