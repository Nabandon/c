#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a, b, c, derta,x1,x2;
	printf("�����������ϵ��:");
	scanf("%f %f %f", &a, &b, &c);
	derta = b*b - 4 * a*c;
	if (derta < 0)
	{
		printf("�޽�!");
	}
	else if (derta == 0)
	{
		x1 =( -b) / (2*a);
		printf("������һ��:x1=x2=%f", x1);
	}
	else{
		x1 = ((-b) + sqrt(derta)) / (2 * a);
		x2 = ((-b )- sqrt(derta)) / (2 * a);
		printf("����������:x1=%f,x2=%f", x1, x2);
	}system("pause");
	return 0;
}