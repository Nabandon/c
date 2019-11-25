#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void Wrt(int n, int m)
{
	if (n)
	{
		printf("%d ", n*m);
		Wrt(n - 1, m);
	}
}int main()
{
	int n, m;
	printf("input n,m:\n");
	scanf("%d%d", &n, &m);
	Wrt(n, m);
	system("pause");
}