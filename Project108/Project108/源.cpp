#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	float a, b, c, x1, x2, s;
	printf("输入方程系数a,b,c:");
	scanf("%f %f %f", &a, &b, &c);
	s = b*b - 4 * a*c;
	if (a == 0)
		printf("方程解为%f", (-c) / b);
	else {
		if (s < 0)
			printf("方程无解!\n");
		else if (s == 0)
			printf("方程有一解:%f", (-b) / (2 * a));
		else
			x1 = ((-b) + sqrt(s)) / (2 * a);
		x2 = ((-b) - sqrt(s) / (2 * a));
		printf("方程有两解x1=%f,x2=%f", x1, x2);
	}
			system("pause");
}