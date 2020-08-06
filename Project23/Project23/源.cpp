#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int a = 0;
	int b = 0;
	int c = 0;
	int i = 0;

	{
		a = rand() % 100;
		b = rand() % 100;
		printf("%d+%d=\n", a, b);
		scanf("%d", &c);
		if (a + b == c)
			printf("right");
		else{ printf("worng"); }
		printf("%d+%d=%d", a, b, a + b);
		system("pause"); }
	
}