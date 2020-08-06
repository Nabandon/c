#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0;
	int num = 0;
	int sum = 0;
	int ret =1 ;
	scanf("%d", &num);
	for (i = 1; i <=num; i++)
	{
		ret = 1;
		int j =0;
		for (j = 1; j <= i; j++)
		{
			ret *= j;
		}
		sum += ret;
	}
	printf("%d", sum);
	system("pause");
	return 0;
}