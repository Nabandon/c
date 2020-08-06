#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j, k,num;
	for (i = 1; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
	      for (k = 0; k < 10; k++)
	{
		num = 100 * i + 10 * j + k;
		if (num == (i*i*i + j*j*j + k*k*k))

			printf("%d, ", num);
	}
	}system("pause");
	return 0;
}