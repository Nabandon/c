#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int cf(int n, int k)
{
	k--;
	if (k == 0)
		return n;
	return n*cf(n, k);
}int main()
{
	int n, k;
	scanf("%d %d", &n, &k);
	printf("%d", cf(n, k));
	system("pause");
	return 0;
}