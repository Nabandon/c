#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define n 1024
int main()
{
	char a[n];
	int i;
	scanf("%s", a[n]);
	for (i = 0; a[i] != '\0'; i++);
	{
		if (a[i] >= 'A' && a[i] <= 'Z')
		{
			printf("%s", a[i] + 32);
		}
		else printf("%s", a[i]);
	}system("pause");
}