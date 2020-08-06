#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int  main()
{
	int i,a,b;
	for (a = 5; a <= 1000; a++)
	{
		b = 0;
		for (i = 2; i < a; i++)
		if (a%i == 0)
			b += i;
	
	if (a == b+1)
	
		printf("%d ", a);
	}
		system("pause");
		return 0;
}