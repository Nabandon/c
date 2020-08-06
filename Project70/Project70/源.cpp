#include<stdio.h>
#include<windows.h>

int main()
{
	int a = 1999;
	int b = 2299;
	int count = 0;
	int ret = a^b;
	while (ret)
	{
		ret = ret&(ret - 1);
		count++;
	}
	
	printf("count=%d\n", count);
	system("pause");
	return 0;
}
