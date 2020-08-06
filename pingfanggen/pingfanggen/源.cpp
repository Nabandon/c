#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num, a1, a2;
	printf("输入一个num: ");
	scanf("%f", &num);
	if (num < 0)
		printf("输入错误!!!");
	else
	
		a2 = 1;
	do{
		a1 = a2;
		a2 = (a1 + num / a1) / 2;
		printf("%f\n",  a2);

	}while (a1 != a2);
		
			printf("%f的平方根为:%f", num, a2);

	
	system("pause");
	return 0;
}