#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a[5] = { 2, 5, 6, 5, 8 };
	int b[5] = { 3, 5, 8, 4, 7 };
	int i;
	int tmp;
	for (i = 0; i < 5; i++)
	{
		tmp = a[i];
		a[i] = b[i];
		b[i] = tmp;
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d", a[i]);
	}
	putchar('\n');
	for (i = 0; i < 5; i++)
	{
		printf("%d", b[i]);
	}
	putchar('\n');

	system("pause");
	return 0;
}