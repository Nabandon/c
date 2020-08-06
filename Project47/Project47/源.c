#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <assert.h>
char reverse_string(char * string)
{
	assert(string);
	int len = strlen(string) - 1;
	char tmp;
	if (len > 0)
	{
		tmp = *string;
		*string = *(string + len);
		*(string + len) = '\0';
		reverse_string(string + 1);
		*(string + len) = tmp;
	}return string;
}int main()
{
	char arr[] = { 0 };
	scanf("%s", arr);
	reverse_string(arr);
	printf("%s", arr);
	system("pause");
	return 0;
}
