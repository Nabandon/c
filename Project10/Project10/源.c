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
		printf("����������:\n");
		scanf("%s", &arr);
		if (strcmp(arr, p) == 0)
		{
			printf("��¼�ɹ�\n");
			break;
		}
else
{
	printf("�������\n");
}
	}if (i == 3)
	{
		printf("���δ���,�Զ��˳�\n");
	}
	system("pause");
	return 0;
}