#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int str(char*string)
{
	int len = strlen(string) - 1;
	char tmp;
	if (len > 0)
	{
		tmp = *string;
		*string = *(string + len);
		*(string + len) = '\0';
		str(string + 1);
		*(string + len) = tmp;

	}return string;
}int main()
{
	char arr[1024];
	scanf("%s", &arr);
	str(arr);
	printf("%s",arr);
	system("pause");
	return 0;
}