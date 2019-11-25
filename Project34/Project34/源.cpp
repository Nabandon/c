#include <stdio.h>
#include <stdlib.h>
int main()
{
	int n, f, k, x, a, b, c, d, e;
	n = 11;
	f = 1;
	while (f)
	{
		x = n; f = 0;
		for (k = 1; k <= 4;k++)
		if ((n + 1) % (k + 1) == 0)
			n -= (n + 1) / (k + 1);
		else
			f = 1;
		if (f == 0 && n != 11)
			f = 1;
		n = x + 1;
	}printf("Æ»¹û×ÜÊý:%d\n", x);
	a = (x + 1) / 2;
	b = (x - a + 1) / 3;
	c = (x - a - b + 1) / 4;
	d = (x - a - b - c + 1) / 5;
	e = 11;
	printf("A=%d\n", a);
	printf("B=%d\n",b);
	printf("C=%d\n",c);
	printf("D=%d\n", d);
	printf("E=%d\n", e);
	system("pause");
}