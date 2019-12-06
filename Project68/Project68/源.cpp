#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int main()
{
	int i = 0, j = 0;
	char arr1[16];  
	char arr2[16];
	int num = 0;
	scanf("%d", &num);
	for (i = 0; i < 32; i += 2)
	{
		arr1[j] = ((num >> i) & 1);  
		j++;
	}
	for (i = 1, j = 0; i < 32; i += 2)
	{
		arr2[j] = ((num >> i) & 1); 
		j++;
	}
	printf("奇数位为：");  
	for (i = 15; i >= 0; i--)
	{
		printf("%d", arr1[i]);
	}
	printf("\n");
	printf("偶数位为：");  
	for (i = 15; i >= 0; i--)
	{
		printf("%d", arr2[i]);
	}system("pause");
	return 0;
}
