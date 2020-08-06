#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#define N 1024
#define _CRT_SECURE_NO_WARNINGS
int main()
{
	int a[N], n, i, k, j, l, t, flag;
	printf("元素个数:");
	scanf("%d", &n);
	printf("输入元素:\n");
	for (i = 0; i < n; i++)
	
		scanf("%d", &a[i]);
		i = 1; k = 1;
		while (i < n)
		{
			flag = 0;
			for (j = 0; j < k; j++)
			{
				if (a[i] == a[j])
				{
					flag = 1; break;
				}
				if (a[i] < a[j])
				{
					t = a[i];
					for (l = k - 1; l >= j; l--)
						a[l + 1] = a[l];
					a[j] = t;
					k++;
					flag = 1;
					break;
				}
			}
			if (flag == 0)
			{
				a[k] = a[i];
				k++;
			}i++;
		}
		printf("%d个有序数组:\n", k);
		for (i = 0; i < k; i++)
			printf("%d ", a[i]);
		printf("\n");
		system("pause");
	}
