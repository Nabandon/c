#include <stdio.h>
#include <stdlib.h>
int mian()
{
	int i, j, k,num;
	for (i = 1; i < 10; i++)
	
		for (j = 0; j < 10; j++)
		
			for (k = 0; k < 10; k++)

				num = 100 * i + 10 * j + k;
		if (num = i ^ 3 + j ^ 3 + k ^ 3)
			printf("%d", num);
	system("pause");
	return 0;
}