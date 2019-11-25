#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j;
	for (i = 1; i <= 7; i++)
	{
		for (j = 1; j <7-i; j++)
			printf("  ");
		{
			if (j == 7-i)
				printf("*");
		}printf("\n");
	}system("pause");
}