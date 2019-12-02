#include <stdio.h>
#include <stdlib.h>
#define N 4
void main()
{
	int a[N][N], (*P)[N];
	int i, j, t, s = 0;
	printf("input a:\n");
	for (i = 0; i < N; i++)
	{
		printf("input the %dth row:\n", i + 1);
		for (j = 0; j < N; j++)
			scanf("%d", &a[i][j]);
	}
	int p = a;
	for (i = 0; i < N; i++)
	{
		s += *(*(p + i) + i);
		for (j = i + 1; j < N; j++)
		{
			t = *(*(p + i) + j);
			*(*(p + i) + j) = *(*(p + j) + i);
			*(*(p + j) + i) = t;

		}
	}for (i = 0; i < N; i++)
	{
		for (j = 0; j < N; j++)
			printf("%4d", *(*(p + i) + j));
		printf("\n");

	}printf("s=%d\n", s);
}