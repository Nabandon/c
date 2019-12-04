#define  _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
#define N 5
float *search(float(*p)[4])
{
	int i;
	float *pt;
	pt = NULL;
	for (i = 0; i <= 4;i++)
	if (*(*p + i) < 60)pt = *p;
		return pt;
}void main()
{
	float score[N][4];
	float *p;
	int i, j;
	for (i = 0; i <= N; i++)
	{
		printf("input No.%d scores:\n", i + 1);
		for (j = 0; j <= 4; j++)
			scanf("%f", &score[i][j]);
	}
	for (i = 0; i < N; i++)
	{
		p = search(score + i);
		if (p == *(score + i))
		{
			printf("No.%d scores", i);
			for (j = 0; j <= 4; j++)
				printf("%.2f ", *(p + j));
			printf("\n");
		}
	}


}