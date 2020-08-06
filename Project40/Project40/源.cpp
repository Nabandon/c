#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j,a[4];
	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4;j++)
		if (j == i)
			a[j] = 1;
		else
			a[j] = 0;
		if (a[1] + a[3] == 1 && a[1] + a[2] == 1 && a[0] + a[1] == 1)
			printf("ะกอตสว:%c.\n", i + 'A');
	}
	system("pause");
}