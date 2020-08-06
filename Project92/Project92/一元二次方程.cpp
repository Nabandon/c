#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main()
{
	float a, b, c, derta,x1,x2;
	printf("依次输入各项系数:");
	scanf("%f %f %f", &a, &b, &c);
	derta = b*b - 4 * a*c;
	if (derta < 0)
	{
		printf("无解!");
	}
	else if (derta == 0)
	{
		x1 =( -b) / (2*a);
		printf("方程有一解:x1=x2=%f", x1);
	}
	else{
		x1 = ((-b) + sqrt(derta)) / (2 * a);
		x2 = ((-b )- sqrt(derta)) / (2 * a);
		printf("方程有两解:x1=%f,x2=%f", x1, x2);
	}system("pause");
	return 0;
}