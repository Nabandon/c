#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int gcd(int n, int m)
{
	int t;
	if (m < n)
	{
		t = m;
		m = n;
		n = t;
	}while (n != 0)
	{
		t = m%n;
		m = n;
		n = t;
	}return m;
}
int lcd(int n, int m)
{
	int t;
	t = m*n / gcd(m, n);
	return t;
}
int main()
{
	int a, b;
	printf("输入两个数:\n");
	scanf("%d %d", &a, &b);
	printf("最大公约数:%d\n", gcd(a, b));
	printf("最小公倍数:%d\n", lcd(a, b));
	system("pause");
	return 0;
}
