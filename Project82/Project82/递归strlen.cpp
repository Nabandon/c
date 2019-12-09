#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int strlen(int  str[])
{
		if (str[0] =='\0')
		{
			return 0;
		}
		return 1 + strlen(str+ 1);
	
}int main()
{
	char str[100];
	printf("ÊäÈë×Ö·û´®:");
	scanf("%s", &str[0]);
	
	printf("%d", strlen(str));
	system("pause");
	return 0;
}