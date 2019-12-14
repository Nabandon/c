#include <stdlib.h>
#include <stdio.h>
int main()
{
	int a, b, i;
	for (i = 2; i <= 1000; i++)
	{
		b = 1;
		for (a = 2; a < i; a++)
		
		if (i%a == 0)
		b += a;
		if (i == b)
			printf("%d\n", i);
	}system("pause");
	return 0;
}