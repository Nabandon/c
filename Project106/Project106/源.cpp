#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	float a, b;
	char c;
	printf("输入:a+(-,*,/)b\n");
	scanf("%f%c%f", &a, &c, &b);
	switch(c)
	{
	case '+':printf("a+b=%f", a + b); break;
	case '-':printf("a-b=%f", a - b); break;
	case '*':printf("a*b=%f", a * b); break;
	case '/':if (b != 0)
		printf("a/b=%f", a / b);
			 else
				 printf("除数不能为零!"); break;
	}system("pause");
}