//�����ַ��� ��һ�仰�ĵ��ʽ��е��ã���㲻���á����� I like beijing. �����������Ϊ��beijing. like I 
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
void str(char* left, char* right)
{
	assert(left&&right);
	while (left < right)
	{
		char ret = *left;
		*left = *right;
		*right = ret;
		left++;
		right--;
	}
}
void reverse(char* arr, int len)
{
	str(arr, arr + len - 1);
	while (*arr)
	{
		char* begin = arr;
		while (*arr && (*arr != ' '))
		{
			arr++;
		}str(begin, arr - 1);
		if (*begin == ' ')
		{
			arr++;
		}
	}
}
int  main()
{
	char arr[100];
	gets(arr);
	int len = strlen(arr);
	reverse(arr, len);
	printf("%s\n", arr);
	system("pause");
	return 0;
}