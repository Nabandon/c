#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i,n;
	int result=1;
	printf("����:");
	scanf("%d", &n);
	for (i = 1; i <= n; i++)
		result *= i;
	
	printf("%d", result);
	system("pause");
	return 0;
}