#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#define MAX 100
int main()
{
	int m, n, i = 0, j, beg, end;
	int flag = 0;
	int a[MAX], b[MAX];
	printf("输入m,n:");
	scanf("%d %d", &m, &n);
	b[i] = m;
	a[i++] = m * 10 / n;
	while (i < MAX)
	{
		b[i] = b[i - 1] * 10 % n;
		if (b[i] == 0)
		{
			beg = 0; end = i; flag = 1; break;
		}a[i] = b[i] * 10 / n;
		for (j = i - 1; j >= 0;j--)
		if (b[j] == b[i])
		{
			beg = j; end = i; break;
		}if (j >= 0)
			break;
		i++;
	}if (flag)
	{
		printf("结果为有限位小数0.");
		for (j = beg; j < end; j++)
			printf("%d", a[j]);
	}
	else{
		printf("结果为无限位小数0.");
		for (j = 0; j < end; j++)
			printf("%d", a[j]);
		printf("...\n");
		printf("循环节是从第%d位开始,循环节是: ", beg + 1);
		for (j = beg; j < end; j++)
			printf("%d", a[j]);
	}system("pause");
}