#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int Factorials(int n)
{
	int res = 1;
	for (int i = 1; i <= n; i++)
		res *= i;
	return res;
}int main()
{
	int n, m, res;
	printf("����n��m,Ҫ��n>m:");
	scanf("%d %d", &n, &m);
	if (n <= m)
	{
		printf("�������,��������!");
	return 0;
	}	system("pause");
		
	res = Factorials(n) / (Factorials(m)*Factorials(n - m));
	printf("%d\n", res);
	system("pause");
}