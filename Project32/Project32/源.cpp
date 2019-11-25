#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a, b, c, d, e;
	for (a = 0; a < 2;a++)
	for (b = 0; b < 2;b++)
	for (c = 0; c < 2;c++)
	for (d = 0; d < 2;d++)
	for (e = 0; e < 2; e++)
	{
		if ((a&&b || !a) && (d + e == 1) && (b + c == 1) && (c&&d || !c&&!d) && (e&&a&&d || !e))
		{
			if (a)printf("ȥA\n");
			if (b)printf("ȥB\n");
			if (c)printf("ȥC\n");
			if (d)printf("ȥD\n");
			if (e)printf("ȥE\n");
		}
	}system("pause");
}