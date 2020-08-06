#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int prime(int num)
{
	int i = 0;
	int a = 0;
	for (i = 2; i < num; i++)
	{
		if (num%i != 0)
		{
			return 1;
		}
		else	
		return 0;
		break;
	}
}	int main()
{
	int num=0;
	scanf("%d", &num);
   
	if (prime(num))
	{
		printf("%d是素数", num);
	}
	else 
	{ 
		printf("%d不是素数", num); 
	}
	system("pause");
	return 0;
}
