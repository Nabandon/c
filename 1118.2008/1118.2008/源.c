#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int y = 0, ;
	scanf("%d", &y);
	if (y % 100 != 0)
	{
		if (y % 4 == 0)
		{
			printf("shi");
		}printf("fou");
	}
	else
	{
		if (y % 400 == 0)
			printf("shi");
	}
	system("pause");
	return 0;
}