#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	float num, a1, a2;
	printf("����һ��num: ");
	scanf("%f", &num);
	if (num < 0)
		printf("�������!!!");
	else
	
		a2 = 1;
	do{
		a1 = a2;
		a2 = (a1 + num / a1) / 2;
		printf("%f\n",  a2);

	}while (a1 != a2);
		
			printf("%f��ƽ����Ϊ:%f", num, a2);

	
	system("pause");
	return 0;
}