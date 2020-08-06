#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, sum, differ;
	printf("输入三边长度:");
	scanf("%f %f %f", &a, &b, &c);
	if (a + b <= c || a + c <= b || c + b <= a 
		|| a - b >= c || a - c >= b || c - b >= a 
		|| b - c >= a || c - a >= b || b - a >= c)
	{
		printf("无法构成三角形");
	}
	else if (a == b&&b == c)
	{
		printf("等边三角形");
	}
	else if (a == b || b == c || a == c)
	{
		printf("等腰三角形");
	}
	else {
		printf("不等边三角形");
	}system("pause");
	return 0;
}