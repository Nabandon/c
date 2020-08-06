#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void init(int arr[], int len)
{
	printf("初始化数组:");
	for (int i = 0; i < len; i++)
	{
		scanf("%d", &arr[i]);
	}
}
void empty(int arr[], int len)
{
	printf("清空数组\n");
	for (int i = 0; i <= len; i++)
	{
		arr[i] = 0;
		printf("%d", arr[i]);

	}
}
void reverse(int arr[], int len)
{
	printf("数组的逆置:\n");
	for (int i = len - 1; i >= 0; i--)
		printf("%d", arr[i]);
}
int main()
{
	int brr[3];
	int len = 0;
	len = sizeof(brr) / sizeof(brr[0]);
	init(brr, len);
	printf("\n");
	reverse(brr, len);
	printf("\n");
	empty(brr, len);
	system("pause");
	return 0;
}