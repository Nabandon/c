#include <stdio.h>
#include <stdlib.h>
flag(int a[], int n)
{
	for (int k = 1; k < n;k++)
	if (a[0] != a[k])
		return 1;
	return 0;
}void pri(int k, int n, int b[])
{
	printf("%d", k);
	for (int i = 0; i < n; i++)
		printf("%4d", b[i]);
	printf("\n");
}
void main()
{
	int s[] = { 10, 2, 8, 22, 16, 4, 10, 6, 14, 20 };
	int k, t[10], n = 0;
	printf("round 1 2 3 4 5 6 7 8 9 10\n");
	printf("--------------\n");
	pri(n, 10, s);
	while (flag(s, 10))
	{
		for (k = 0; k < 10;k++)
		if (s[k] % 2 == 0)
			t[k] = s[k] / 2;
		else
			t[k] = (s[k] + 1) / 2;
		for (k = 0; k < 9; k++)
			s[k + 1] = t[k + 1] + t[k];
		s[0] = t[0] + t[9];
		n++;
		pri(n, 10, s);
	}system("pause");
}