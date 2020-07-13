#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define minecount 10
int Menu()
{
	printf("1.��ʼ��Ϸ ");
	printf("0.�˳���Ϸ \n");
	printf("��������ѡ��\n");
	int choice = 0;
	scanf("%d", &choice);
	return choice;

}
void init(char showmap[ROW][COL],char minemap[ROW][COL])
{
	for (int row = 0; row < ROW; row++)
	{

		for (int col = 0; col < COL; col++)
		{
			showmap[row][col] = '*';
		}
	}
	for (int row = 0; row < ROW; row++)
	{
		for (int col = 0; col < COL; col++)
		{
			minemap[row][col] = '0';
		}
	}
		srand((unsigned int)time(0));
		int count = minecount;
		while (count>0){
			int row = rand() % ROW;
			int col = rand() % COL;
			if (minemap[row][col] == '1'){
				continue;
			}
			minemap[row][col] = '1';
			count--;
		}
}
void print(char showmap[ROW][COL]) 
{
	for (int row = 0; row < ROW; row++){
		for (int col = 0; col < COL; col++)
		{
			printf("%c ", showmap[row][col]);
			
		}
		printf("\n");
	}
}
void input(char showmap[ROW][COL],
	int *row, int *col){
	while (1){
		printf("���뷭������");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= ROW || *col < 0 || *col >= COL){
			printf("������������");
			continue;
		}
		if (showmap[*row][*col] != '*'){
			printf("��λ���ѷ�\n");
			continue;
		}
		break;
	}
	
}
void update(char showmap[ROW][COL],
	char minemap[ROW][COL],
	int row, int col){
	int count = 0;
	for (int r = row - 1; r <= row+1; r++)
	{
		for (int c = col - 1; c <= col + 1; c++){
			if (row < 0 || row >= ROW || col < 0 || col >= COL){
				continue;
			}
			if (minemap[r][c] == '1'){
				count++;
			}
		}

	}//��countת��ΪASCII��
	showmap[row][col] = count + '0';
}
void game(){
	//������ͼ
	char showmap[ROW][COL];
	char minemap[ROW][COL];
	init(showmap, minemap);
	int notminecount = 0;
	while (1){

		//��ӡ��ͼ
		print(showmap);
		//����λ��(����)
		int row = 0; 
		int col = 0;
		input(showmap,&row, &col);
		//У������
		//�Ƿ����
		if (minemap[row][col] == '1'){
			print(minemap);
			printf("ʧ��\n");
			break;
		}
		//�������һ��,��Ϸʤ��
		notminecount++;
		if (notminecount == ROW*COL - minecount)
		{
			print(minemap);
			printf("��Ϸʤ��\n");
			break;
		}
		//������,��������ʾ����
		update(showmap, minemap, row, col);
	}
}
int main()
{
	while (1){
		int choice = Menu();
		if (choice == 1){
			game();
		}
		else if (choice == 0){
			printf("goodebye\n");
			break;
		}
		else{
			printf("��������\n");
		}

	}
	system("pause");
	return 0;
}