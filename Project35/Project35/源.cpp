#include<stdio.h>
#include <stdlib.h>
#include <math.h>
int  prime(int a)
{
	int i;
	for (i = 2; i < a - 1; i++)
	{
		if (a%i == 0)
			return 0;
	}
		return 1;
}
void  main()
{
	int a=2, n=0;
	while (n < 15)

	{
		if (prime(a) && prime(a + 2))
		{
			n++;
			printf("%d,%d\n", a, a + 2);
		}
		a++;
	}system("pause");
}
