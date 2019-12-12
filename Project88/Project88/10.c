//共用体
#include <stdio.h>
#include <stdlib.h>
union aa
{
	unsigned short a[2];
	unsigned long b;
};
void fen(unsigned long k)
{
	union aa c, *p;
	p = &c;
	c.b = k;
	printf("长整数=%ld\n", k);
	printf("low=%u,high=%u\n", p->a[0], p->a[1]);
}
void main()
{
	unsigned long w;
	w = 12345678;
	fen(w);
	system("pause");

}
