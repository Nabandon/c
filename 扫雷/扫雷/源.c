#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define ROW 9
#define COL 9
#define minecount 10
int Menu()
{
	printf("1.开始游戏 ");
	printf("0.退出游戏 \n");
	printf("输入您的选择\n");
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
		printf("输入翻开坐标");
		scanf("%d %d", row, col);
		if (*row < 0 || *row >= ROW || *col < 0 || *col >= COL){
			printf("您的输入有误");
			continue;
		}
		if (showmap[*row][*col] != '*'){
			printf("此位置已翻\n");
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

	}//把count转化为ASCII码
	showmap[row][col] = count + '0';
}
void game(){
	//创建地图
	char showmap[ROW][COL];
	char minemap[ROW][COL];
	init(showmap, minemap);
	int notminecount = 0;
	while (1){

		//打印地图
		print(showmap);
		//翻开位置(坐标)
		int row = 0; 
		int col = 0;
		input(showmap,&row, &col);
		//校验坐标
		//是否踩雷
		if (minemap[row][col] == '1'){
			print(minemap);
			printf("失败\n");
			break;
		}
		//翻开最后一个,游戏胜利
		notminecount++;
		if (notminecount == ROW*COL - minecount)
		{
			print(minemap);
			printf("游戏胜利\n");
			break;
		}
		//继续翻,翻开的显示数字
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
			printf("输入有误\n");
		}

	}
	system("pause");
	return 0;
}