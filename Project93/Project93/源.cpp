#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float a, b, c, sum, differ;
	printf("�������߳���:");
	scanf("%f %f %f", &a, &b, &c);
	if (a + b <= c || a + c <= b || c + b <= a 
		|| a - b >= c || a - c >= b || c - b >= a 
		|| b - c >= a || c - a >= b || b - a >= c)
	{
		printf("�޷�����������");
	}
	else if (a == b&&b == c)
	{
		printf("�ȱ�������");
	}
	else if (a == b || b == c || a == c)
	{
		printf("����������");
	}
	else {
		printf("���ȱ�������");
	}system("pause");
	return 0;
}