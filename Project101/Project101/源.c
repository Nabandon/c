#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
 main()
{
	float sal;
	int isal;
	int x1, x2, x3, x4, x5, x6, x7, x8, x9;
	scanf("%f", &sal);
	isal = (int)sal;
	x1 = isal / 100;
	x2 = (isal % 100) / 50;
	x3 = (isal % 100 % 50) / 10;
	x4 = (isal % 10) / 5;
	x5 = (isal % 10 % 5) / 2;
	x6 = (isal % 10 % 5 % 2);
	x7 = (sal - isal) * 10 / 5;
	x8 = ((sal - isal) * 10 - x7 * 5) / 2;
	x9 = (sal - isal) * 10 - x7 * 5 - x8 * 2;
	printf("%d %d %d %d %d %d %d %d %d", x1, x2,  x3, x4, x5, x6, x7, x8, x9);
	system("pause");
	
}