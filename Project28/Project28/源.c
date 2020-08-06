#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
	if (n <= 1)
		return 1;
	else return n*factorial(n - 1);

}int main()
{
	int n=5;
	int ret=factorial(n);
	printf("%d", ret);
	system("pause");
	return 0;
}