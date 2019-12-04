#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j, sum=1;
	printf(" ‰»Îº∆À„ ˝:");
	scanf("%d", &j);
	for (i = 1; i <= j; i++)
		sum *= i;
	printf("%d", sum);
	system("pause");
	return 0;
}
