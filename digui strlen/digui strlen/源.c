#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//�ݹ�
int strlen(char*str)
{
	if (str[0] = '\0')
	{
		return 0;
	}
	return 1 + strlen(str + 1);
}
//�ǵݹ�
int strlen2(char*str)
{
	int count = 0;
	while (str[0] != 0)
	{count++;
	str++;
}
	return count;
}int main()
{
	char*str = "qwerdf";
	printf("�ݹ�:%d\n", strlen(str));
	printf("�ǵݹ�:%d\n", strlen2(str));
	system("pause");
	return 0;
}