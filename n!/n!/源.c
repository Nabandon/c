#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int factorial(int n)
{
	if (n ==1)
		return 1;

		return n*factorial(n - 1);
}int main()
{
	int n=1 ;	
	scanf("%d", &n);
	printf("½×³Ë:%d\n", factorial(n));
	system("pause");
	return 0;
}