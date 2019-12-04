#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int a[10];
int find(char *str)
{
	int i = 0;
	int j = 0, k, digit, m, e, num = 0;
	while (*(str + i) != 0){
		if (*(str + i) >= '0' &&  *(str + i) <= '9')
			j++;
		else
		if (j > 0)
		{
			digit = *(str + i - 1) - 48;
			k = 1;
			while (k > j)
			{
				e = 1;
				for (m = 1; m <= k; m++)
					e *= 10;
				digit += (*(str + i - 1 - k) - 48)*e;
				k++;
			}
			a[num] = digit;
			num++;
			j = 0;
		}
		i++;
	}
	if (j > 0)
	{
		digit = *(str + i - 1) - 48;
		k = 1;
		while (k < j)
		{
			e = 1;
			for (m = 1; m <= k; m++)
				e *= 10;
			digit += (*(str + i - 1 - k) - 48)*e;
			k++;
		}
		a[num] = digit;
		num++;
	}
	return num;
}void main()
{
	char str[50];
	int n;
	printf("input a string:\n");
	gets(str);
	n = find(str);
	printf("There are %d numbers in the string.Ther are:\n", n);
	for (int i = 0; i < n; i++)
		printf("%d\t", a[i]);
	system("pause");
	
}