#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int  main()
{
	char a[] = "acehjlm";
	char b[] = "bcdfmnoprt";
	char c[80], *p;
	int i = 0, j = 0, k = 0;
	while (a[i] != '\0'&&b[j] != '\0')
	{
		if (a[i] < b[j])
			c[k] = a[i++];
		else
			c[k] = b[j++];
		k++;
	}c[k] = '\0';
	if (a[i] == '\0')
		p = b + j;
	else
		p = a + i;
	strcat(c, p);
	puts(c);
	system("pause");
}