#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i, j,cnt=0, n=100;
	for (i = 1; i <= 100; i++)
	{
		cnt = 0;
		for (j = 1; j <= i; j++)
		{
			if (i%j == 0)
			{

				cnt++;
			}

		}
		if (cnt == 2)
		{
			printf("%d\n", i);
		}
	}
	system("pause");
	return 0;

}
