#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
struct student
{
	char num[4];
	char name[8];
	float score[3];
	float avr;
}stu[10];
void main()
{
	int i, j, maxi;
	float max, sum, aver;
	for (i = 0; i < 10; i++)
	{
		printf("�����%d��ѧ���ĳɼ�:\n", i + 1);
		printf("����ѧ��:");
		scanf("%s", stu[i].num);
		printf("��������:");
		scanf("%s", stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("�����%d�ųɼ�:", j + 1);
			scanf("%f", &stu[i].score[j]);
		}

	}
	aver = 0;
	max = 0; maxi = 0;
	for (i = 0; i < 10; i++);
	{
		sum = 0;
		for (j = 0; j < 3; j++)
			sum += stu[i].score[j];
		stu[i].avr = sum / 3.0;
		aver += stu[i].avr;
		if (sum>max)
		{
			max = sum;
			maxi = i;
		}
	}aver /= 10;
	printf("ƽ���ɼ�:%.3f\n", aver);
	printf("��߷ֵ�ѧ����ѧ��,����,�ɼ��ֱ�Ϊ:\n");
	printf("%s %s %.2f %2.f %2.f %2.f\n", stu[maxi].num, stu[maxi].name, stu[maxi].score[0], stu[maxi].score[1], stu[maxi].score[2], stu[maxi].avr);
	system("pause");
	
}