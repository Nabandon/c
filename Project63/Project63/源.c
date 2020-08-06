#include <stdio.h>
int main()
{
	int arr[] = { 1, 2, 3, 4, 5, 6, 7, 8, 9, 10 };
	//在这里完成代码
	int* p = &arr;	
	int i;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", *(p + i));
	}system("pause");
	return 0;
}