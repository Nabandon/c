#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, w[4], i, m;
	printf("输入加密的四位整数:");
	scanf("%d", &n);
	w[0] = n % 10;
	w[3] = n / 1000;
	w[1] = n % 100 / 10;
	w[2] = n / 100 % 10;
	for (i = 0; i < 4;i++)
	if (w[i] = 5)
		w[i] += 5;
	else w[i] -= 5;
	n = w[0] * 1000 + w[1] * 100 + w[2] * 10 + w[3];
	printf("加密前是:%d\n", n);
	system("pause");
}