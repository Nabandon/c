#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void mult(int n)
{
	int i, j;
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)

			printf("%d*%d=%d \t", i, j, i*j);
		printf("\n");
	}
}int main()
{
	int n = 0;
	printf("ÊäÈë:\n");
	scanf("%d", &n);
	mult(n);
	system("pause");
	return 0;
}