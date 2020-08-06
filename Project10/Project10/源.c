#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char arr[10] = { 0 };
	int i = 0;
	int *p = "111";
	for (i = 0; i < 3; i++)
	{
		printf("ÇëÊäÈëÃÜÂë:\n");
		scanf("%s", &arr);
		if (strcmp(arr, p) == 0)
		{
			printf("µÇÂ¼³É¹¦\n");
			break;
		}
else
{
	printf("ÃÜÂë´íÎó\n");
}
	}if (i == 3)
	{
		printf("Èý´Î´íÎó,×Ô¶¯ÍË³ö\n");
	}
	system("pause");
	return 0;
}