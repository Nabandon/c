#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j,p=0;
	for (i = 2; i <= 1000; i++)
	{
		p = 0;
		for (j = 1; j < i ; j++)
		{
			if (i%j == 0) 
				p++;
			
		}
		if (p == 1)
			
			printf("%d ", i);
		
	}system("pause");
}