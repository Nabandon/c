#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int k, a[10];
	printf("input a:\n");
	for (k = 0; k < 10; k++)
		scanf("%d", &a[k]);
	printf("ԭ����Ϊ:\n");
	for (k = 0; k < 10; k++)
		printf("%4d", a[k]);
	printf("\n");
	for (k = 0; k < 10; k++)
		a[k] = a[k] & 0xfffe;
	printf("ת���������:\n");
	
	for (k = 0; k < 10; k++)
		printf("%4d", a[k]);
	printf("\n");
		system("pause");
}