#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int sumy(int n)
{
	int i, j, s;
	s = 1; i = 2;
	do{
		j = n / i;
		if (n%i==0)
		if (i == j)
			s += i; else
			s += i + j;
		i++;
	} while (i < j);
		return s;
}
void main()
{
	int x, i, n;
	printf("ÊäÈënµÄÖµ:");
	scanf("%d", &n);
	for (i = 4; i < n; i++)
	{
		x = sumy(i);
		if (x>i&&x<=n)
		if (i == sumy(x))
			printf("(%d,%d)\n", i, x);
	}system("pause");
}