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
	}         //�����ǽ��ϴ������ֵ��m
	while (n > 0){
		tmp = m%n;
		m = n;
		n = tmp;
	}        //��n=0ʱ,m��ֵ�������Լ��.
	{
		printf("���Լ��%d,��С������%d",m, a*b / m);
	}
	system("pause");
	return 0;
}