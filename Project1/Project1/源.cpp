#include<stdio.h>
#include<stdlib.h>
int main()
{
	int arr[10] = { 10, 20, 21, 30, 32, 41, 42, 55, 51, 0, };
	int max = arr[0];
	int i = 0;
	for (i = 1; i < 10; i++)
	{
		if (max >arr[i])
		{
			continue;
		}
		else

		{
			max = arr[i];
		}
	}printf("max=%d\n", max);
	system("pause");
	return 0;
}