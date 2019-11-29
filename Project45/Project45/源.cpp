#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int power(int n, int k)
{
	k--;
	if (k == 0)
		return n;
	else
		return n*power(n, k);
}
int main()
{
	int n=0, k=0;
	printf(" ‰»În,k:\n");
	scanf("%d%d", &n, &k);
	printf("%d\n", power(n, k));
	system("pause");
	return 0;
}