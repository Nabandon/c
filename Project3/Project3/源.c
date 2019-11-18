#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, a = 0, num = 0;
	scanf("%d", &num);
	for (i = 2; i < num; i++)
	{
		if (num%i == 0)
		{
			a++;
		}
	}
	if (a == 0)
	{
		printf("ÊÇ");
	}
	else
	{ 
		printf("·ñ");
	}
	system("pause");
	return 0;
	
}