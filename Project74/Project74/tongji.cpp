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
		printf("输入第%d个学生的成绩:\n", i + 1);
		printf("输入学号:");
		scanf("%s", stu[i].num);
		printf("输入姓名:");
		scanf("%s", stu[i].name);
		for (j = 0; j < 3; j++)
		{
			printf("输入第%d门成绩:", j + 1);
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
	printf("平均成绩:%.3f\n", aver);
	printf("最高分的学生的学号,姓名,成绩分别为:\n");
	printf("%s %s %.2f %2.f %2.f %2.f\n", stu[maxi].num, stu[maxi].name, stu[maxi].score[0], stu[maxi].score[1], stu[maxi].score[2], stu[maxi].avr);
	system("pause");
	
}