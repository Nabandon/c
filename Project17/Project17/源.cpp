#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int leapyear(int y)
{
	int i = 0;
	if (y % 10 != 0 && y % 4 == 0 || y % 400 == 0)
	{
		return 1;
	}return 0;
}
int main()
{
	int y = 0;
	scanf("%d", &y);
	if (leapyear(y))
	{
		printf("ÊÇ");
	}else
	{ 
		printf("²»ÊÇ"); 
	}
	system("pause");
	return 0;
}