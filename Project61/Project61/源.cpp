#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct fenshu
{
	int fz; int fm;
};
int gcd(int m, int n)
{
	int t, r;
	if (n > m)
	{
		t = n; n = m; m = t;
	}
	while ((r = m%n) != 0){
		m = n;
		n = r;
	}return n;
}
fenshu add(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x, y;
	x = f1.fm*f2.fm;
	y = f1.fz*f2.fm + f1.fm*f2.fz;
	f.fm = x / gcd(x, abs(y));
	f.fz = y / gcd(x, abs(y));
	return f;

}
fenshu mus(struct fenshu f1, struct fenshu f2)
{
	struct fenshu f;
	int x, y;
	x = f1.fm*f2.fm;
	y = f1.fz*f2.fm - f1.fm*f2.fz;
	f.fm = x / gcd(x, abs(y));
	f.fz = y / gcd(x, abs(y));
	return f;
}
void main()
{
	struct fenshu f1, f2, fadd, fmus;
	printf("请输入f1的分子和分母:");
	scanf("%d %d", &f1.fz, &f1.fm);
	printf("请输入f2的分子和分母:");
	scanf("%d %d", &f2.fz, &f2.fm);
	fadd = add(f1, f2);
	fmus = mus(f1, f2);
	printf("和为%d/%d\n", fadd.fz, fadd.fm);
	printf("差为%d/%d\n", fmus.fz, fmus.fm);
	system("pause");
}