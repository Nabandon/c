#include <stdio.h>
#include<stdlib.h>
void swap1(int a, int b)
{
	int t;
	t = a;
	a = b;
	b = t;
}void swap2(int *pa, int *pb)
{
	int *p;
	p = pa;
	pa = pb;
	pb = p;
}void swap3(int *p1, int *p2)
{
	int p;
	p = *p1;
	*p1 = *p2;
	*p2 = p;
}void main()
{
	int x, y, *pt1, *pt2;
	x = 3; y = 5;
	pt1 = &x;
	pt2 = &y;
	swap1(*pt1, *pt2);
	printf("num1=%d,num2=%d\n", *pt1, *pt2);
	swap2(pt1, pt2);
	printf("num3=%d,num4=%d\n", *pt1, *pt2);
	swap3(pt1, pt2);
	printf("num5=%d,num6=%d\n", *pt1, *pt2);
	system("pause");
	
}
