
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int x, y, k, n;
	int i, u = 0, v = 0;
	printf("输入两个素数:");
	scanf("%d %d", &x, &y);
	n = x + y;
	k = (x < y) ? x : y;
	i = 1;
	while (i <= k){
		u = 0;
		do{
			u += x;
			v = n - u;
			if (v < y){
				i = 0; break;
			}
		} while (v%y != 0);
			n++;
			i++;
	}printf("%d\n", n - k);
	system("pause");
	return 0;
}