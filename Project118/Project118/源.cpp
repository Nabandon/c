#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>

void main()
{
	int a, b, m, n,s;
	printf("input number:\n");
	scanf("%d %d", &a, &b);
	if (a > b)
	{
		m = a; n = b;
	}
	else {
		m = b; n = a; }
	s = m%n;
	while (s != 0){
		m = n;
		n = s;
		s = m%n;
	}printf("%d��%d�����Լ��Ϊ%d\n��С������%d\n", a, b, n,a*b/n);
	system("pause");

}