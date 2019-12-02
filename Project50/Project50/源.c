#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <string.h>
void main()
{
	char ch[10];
	int i;
	double(*f)(double);
	while (1)
	
	printf("input sin cos or tan:\n");
	scanf("%s", ch);
	
	{
		if (!strcmp(ch, "sin"))
		f = sin;
	else if (!strcmp(ch, "cos"))
		f = cos;
	else if (!strcmp(ch, "tan"))
		f = tan;
	else{
		printf("input error!!!\n");
		system("pause");

		return 1;
	    }
	}for (i = 0; i < 5; i++)
		printf("%d度的值为%.4f\n", (i + 1) * 10, (*f)(3.1415*(i + 1) / 18));
	system("pause");
}