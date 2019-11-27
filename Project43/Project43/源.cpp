#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

#include <stdlib.h>
#define N 4
#define M 5
#define K 3
void main()
{
	int a[N][M], b[M][K], c[N][K];
	int i, j, l, s;
	for (i = 0; i < N; i++)
	{
		printf("input matrix A's %d row:\n", i);
		for (j = 0; j < M; j++)
			scanf("%d", &a[i][j]);
	}
	for (i = 0; i < M; i++)
	{
		printf("input matrix B's %d row:\n", i);
		for (j = 0; j < K; j++)
			scanf("%d", &b[i][j]);

	}
	for (i = 0; i < N;i++)
	for (j = 0; j < K; j++)
	{
		s = 0;
		for (l = 0; l < M; l++)
			s += a[i][l] * b[l][j];
		c[i][j] = s;
	}
	printf("the matrix c:\n");
	for (i = 0; i < N; i++)
	{
		for (j = 0; j < K; j++)
			printf("%4d", c[i][j]);
		printf("\n");
	}system("pause");
}