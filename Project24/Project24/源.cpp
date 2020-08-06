#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
void main()
{
	float a, b, c, p,x1 , x2 ,realpart,imagepart;
	printf("输入方程的系数a,b,c:\n");
	scanf("%f%f%f", &a, &b, &c);
	if (a == 0 && b == 0)
		printf("方程无解");
	else if (a == 0 && b != 0)
		printf("方程有一解:%.3f\n", -c / b);
	else {
		p = b*b - 4 * a*c;
		realpart = -b / (2 * a);
		imagepart = sqrt(fabs(p)) / (2 * a);
		if (p < 0)
		{
			printf("方程有虚数解:");
			printf("%.3f+%.3fi", realpart, imagepart);
		}
	
		else if (p >0)
		{
			x1 = realpart + imagepart;
			x2 = realpart - imagepart;
			printf("方程有两个实数解:x1=%.3f x2=%.3f\n", x1, x2);
		}
		else
		
			printf("方程有一解:%.3f\n", realpart);
	}system("pause");
}