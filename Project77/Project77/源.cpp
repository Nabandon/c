#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int m,n,a,b,tmp;
	scanf("%d %d", &a, &b);
	if (b > a)
	{
		m = b;
		n = a;
	}
	else{
		m = a;
		n = b;  
	}         //以上是将较大的数赋值给m
	while (n > 0){
		tmp = m%n;
		m = n;
		n = tmp;
	}        //当n=0时,m的值就是最大公约数.
	{
		printf("最大公约数%d,最小公倍数%d",m, a*b / m);
	}
	system("pause");
	return 0;
}