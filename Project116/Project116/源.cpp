#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, n;
	printf("input n(<=10):");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++) printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) printf("*");
		printf("\n");
	}
	for (i = n - 1; i >= 1; i--){
		for (j = 1; j <= n-i; j++)
			printf(" ");
		for (j = 1; j <= 2 * i - 1; j++) printf("*");
		printf("\n");
	}system("pause");
}
