#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,m;
	scanf("%d", &m);
	int result = 1;
	for (i = 1; i <= m; i++)
	{
		result *= i;
	}
	printf("%d\n", result);
	system("pause");
	return 0;

}