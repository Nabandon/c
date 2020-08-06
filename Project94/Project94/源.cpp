#include <stdio.h>
#include <stdlib.h>
void main()
{
	int b[3][3] = { 0, 1, 2, 0, 1, 2, 0, 1, 2 }, i, j, t = 1;
	for (i = 0; i < 3;i++)
	for (j = i; j <= i; j++)
		t += b[i]b[[j][i]];
	printf("%d\n", t);
	system("pause");
}