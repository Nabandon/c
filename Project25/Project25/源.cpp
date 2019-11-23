#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a, b;
	int  i;
	printf("输入收入:\n");
	scanf("%f", &a);
	if (a >= 5000)
		i = 5;
	else
		i = a / 1000;
	switch (i)
	{
	case 0:
	case 1:b = 0; break;
	case 2:b = 0.05*(a - 2000); break;
	case 3:b = 50 + 0.1*(a - 3000); break;
	case 4:b = 150 + 0.15*(a - 4000); break;
	case 5:b = 300 + 0.2*(a - 5000); break;
	}
	printf("应缴税:%.3f\n", b);
	system("pause");
}