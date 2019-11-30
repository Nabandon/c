#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>
main()
{
	char str[3][100];
	int up = 0, low = 0, space = 0, num = 0, other = 0, i, j;
	for (i = 0; i < 3; i++)
	{
		printf("input the%dth string:", i + 1);
		gets(str[i]);
	}for (i = 0; i < 3;i++)
	for (j = 0; j < strlen(str[i]); j++)
	{
		if (str[i][j] >= 'A'&& str[i][j] <= 'Z')
			up++;
		else if (str[i][j] >= 'a'&&str[i][j] <= 'z')
			low++;
		else if (str[i][j] >= '0'&&str[i][j] <= '9')
			num++;
		else if (str[i][j] == ' ')
			space++;
		else
			other++;
	}
	printf("´óÐ´×ÖÄ¸,Ð¡Ð´×ÖÄ¸,Êý×Ö,¿Õ¸ñ,ÆäËû×Ö·û:\n");
	printf("%d  %d  %d  %d  %d \n", up, low, num, space, other);
	system("pause");
	return 0;
}