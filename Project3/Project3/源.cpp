#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>


	
int  Max(int x, int y)
	{
		if (x > y)
		{
			return x;
		}
		return y;
	}
int main()
	{
		int ret = Max(20, 10);
		int ret1 = Max(300, 20);
		printf("%d %d ", ret,ret1);

		system("pause");
		return 0; 
}