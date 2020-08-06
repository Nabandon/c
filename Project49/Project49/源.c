#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void  sort(char *p[], int n)
{
	int i, j, k;
	char tmp[10];
	for (i = 0; i < n - 1; i++)
	{
		k = i;
		for (j = i + 1; j < n; j++)
		if (strcmp(p[j], p[k] < 0))
			k = j;
		if (k != i)
		{
			strcpy(tmp, p[i]);
			strcpy(p[i], p[k]);
			strcpy(p[k], tmp);
		}
	}
}
void main()
{
	int i;
	char *p[10], str[10][10];
	printf("input 10 strings:\n");
	for (i = 0; i < 10; i++)
	{
		scanf("%s", str[i])
			;

	}
	sort(p, 10);
	printf("now,the squence is:\n");
	for (i = 0; i < 10; i++)
		printf("%n\n", p[i]);
	system("pause");
}