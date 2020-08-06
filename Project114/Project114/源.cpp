#include <stdio.h>
#include <stdlib.h>
void main()
{
	char a, b;
	printf("input a string:\n");
	b = getchar();
	while ((a = getchar() != '\n'))
	{
		if (a == b)
		{
			printf("same character\n");
			break;
		}
		b = a;
	}
}