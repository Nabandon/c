#include <stdio.h>
#include <stdlib.h>
void main()
{
	int i, j;
	float x, y;
	i = j = 1;
	x = y = 1.1f;
	printf("i=%d j=%d\n", i, j);
	x = i + j;
	y += 1;
	printf("x=%4.2f y=%4.2f\n", x, y);
	i = i++ + j;
	x = 2 * x + y;
	printf("i=%d x=%4.2f\n", i, x);
	system("pause");

}