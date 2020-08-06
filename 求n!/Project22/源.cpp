#include <stdio.h>
#include <stdlib.h>
int factorial(int n)
{
	int result = 1;
	while (n > 1)
	{
		result *= n;
		n -= 1;
	}return result;
}int main()
	{
	int n = 4;
	 int result= factorial( n);
	printf("%d", result);
system("pause");
return 0;
}