#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
void main()
{
	int score, num;
	char grade;
	printf("����score:");
	scanf("%d", &score);
	if (score >= 0 && score <= 100){
		num = score / 10;
		switch (num){
		case 10:
		case 9:grade = 'A'; break;
		case 8:grade = 'B'; break;
		case 7:grade = 'C'; break;
		case 6:grade = 'D'; break;
		default:grade = 'E';
		}
		printf("%d�ĵȼ�%c\n", score, grade);
	}
else 
	printf("error\n");
	system("pause");
}