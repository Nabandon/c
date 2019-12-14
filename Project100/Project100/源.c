#include <stdio.h>
#include <stdlib.h>
 main()
{
	int i, j, k, m, count;
	for (i = 4; i < 100000; i += 4)
	{count = 0;
	m = i;
	
		for (k = 0; k < 5; k++)
		{
			j = m / 4 * 5 + 1;
			m = j;
			if (j % 4 == 0)
				count++;
			else break;

		}
		if (count == 4)
		{
			printf("%d\n", j); break;
		
		}
		
			
	}
	system("pause");
}