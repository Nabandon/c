#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a[20], i, j,t;
	printf("input 20 num:\n");
	for (i = 0; i < 20; i++)
		scanf("%d", &a[i]);
	for (i = 0; i < 19;i++)
	for (j = 0; j < 19 - i;j++)
	if (a[j] < a[j + 1])
	{
		t = a[j];
		a[j] = a[j + 1];
		a[j + 1] = t;
	}
	printf("the sorted num:\n");
	for (i = 0; i < 20; i++)
	{
		printf("%d ", a[i]);

	}system("pause");
}