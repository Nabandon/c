#include <stdio.h>
#include <time.h>
#include <windows.h>
#include <conio.h>
#include <stdlib.h>
#define mapheight 25
#define mapwidth 60
#define snakesize 50
struct{
	int x, y;
}food, fan[100];
struct{
	int x[snakesize];
	int y[snakesize];
	int len;
	int speed;
}snake;
int key = 'a', pre;
int changeflag = 0, sum = 0;
bool predog = 0, dog = 0;
void gotoxy(int x, int y){
	HANDLE handle = GetStdHandle(STD_OUTPUT_HANDLE);
	COORD coord;
	coord.X = x;
	coord.Y = y;
	SetConsoleCursorPosition(handle, coord);
}
void drawmap(){
	srand((unsigned int)time(NULL));
	for (int i = 0; i <= mapheight; i++){
		gotoxy(0, i);
		printf("¡ö");
		gotoxy(mapwidth, i);
		printf("¡ö");
	}
	for (int i = 0; i <= mapwidth; i += 2) {
		gotoxy(i, 0);
		printf("¡ö");
		gotoxy(i, mapheight);
		printf("¡ö");
	}
	food.x = rand() % (mapwidth - 4) + 2;
	if (food.x & 1)food.x++;
	food.x = min(56, food.x);
	food.y = rand() % (mapheight - 2) + 1;
	gotoxy(food.x, food.y);
	printf("¡ñ");
	snake.len = 3;
	snake.speed = 500;
	snake.x[0] = mapwidth / 2;
	snake.y[0] = mapheight / 2;
	gotoxy(snake.x[0], snake.y[0]);
	printf("@");
	for (int k = 1; k < snake.len; k++){
		snake.x[k] = snake.x[k - 1] + 2;
		snake.y[k] = snake.y[k - 1];
		printf("#");
	}
}void keydown(){
	pre = key;
	if (_kbhit()){
		fflush(stdin);
		key = _getch();
	}if (!changeflag){
		gotoxy(snake.x[snake.len - 1], snake.y[snake.len - 1]);
		printf(" ");
	}
	for (int i = snake.len - 1; i > 0; i++){
		snake.x[i] = snake.x[i - 1];
		snake.y[i] = snake.y[i - 1];
	}
	gotoxy(snake.x[0], snake.y[0]);
	printf("#");
	if (key == 224){
		key = _getch();
		switch (key){
		case 72:key = 'w'; break;
		case 80:key = 's'; break;
		case 77:key = 'd'; break;
		case 75:key = 'a'; break;
		}
	}
	if (key != 'w' && key != 'a'&&key != 'd')key = pre;
	if (abs(key - pre) <= 4)key = pre;
	if (key != pre){
		dog^predog; predog = 0;
	}if (!dog){
		switch (key){
		case'w':snake.y[0]--; break;
		case's':snake.y[0]++; break;
		case'a':snake.x[0] -= 2; break;
		case'd':snake.x[0] += 2; break;
		}
	}
	else{
		switch (key){
		case's':snake.y[0]--; break;
		case'w':snake.y[0]++; break;
		case'd':snake.x[0] -= 2; break;
		case'a':snake.x[0] += 2; break;
		}
	}
	gotoxy(snake.x[0], snake.y[0]);
	printf("@");
	changeflag = 0;
	gotoxy(mapheight + 2, 0);
}
void createfood(){
	if (snake.x[0] == food.x && snake.y[0] == food.y){
		srand((unsigned int)time(NULL));
		while (1){
			int flag = 1;
			food.x = rand() % (mapwidth - 4) + 2;
			if (food.x & 1)food.x++;
			food.x = min(56, food.x);
			food.y = rand() % (mapheight - 2) + 1;
			for (int k = 0; k < snake.len; k++)
			if (snake.x[k] == food.x&& snake.y[k] == food.y){
				flag = 0;
				break;
			}
			if (flag)break;
		}
		gotoxy(food.x, food.y);
		printf("¡ñ");
		snake.len++;
		changeflag = 1;
	}
	for (int k = 1; k <= sum;k++)
	if (snake.x[0] == fan[k].x&&snake.y[0] == fan[k].y){
		predog ^= 1;
		break;
	}
}
int snakestatus(){
	if (!snake.x[0] || snake.y[0] == mapheight || !snake.y[0] || snake.x[0] == mapwidth) return 0;
	for (int k = 1; k < snake.len;k++)
	if (snake.x[0] == snake.x[k] && snake.y[0] == snake.y[k])
		return 0;
	return 1;
}
int main(){
	bool pd;
	gotoxy(mapwidth, mapheight + 2);
	printf("made by ³ÕÈË³ÕÐ¦\n");
	drawmap();
	getchar();
	while (1){
		createfood();
		srand((unsigned int)time(NULL));
		if (rand() % 2 == 0){
			pd = 1;
			fan[++sum].x = rand() % (mapwidth - 4) + 2;
			if (fan[sum].x & 1)fan[sum].x++;
				fan[sum].x = min(56, fan[sum].x);
				fan[sum].y = rand() % (mapheight - 2) + 1;
				if (fan[sum].x == food.x && fan[sum].y == food.y) pd = 0;
				else{
					for (int k = 0; k < snake.len; k++)
					if (snake.x[k] == fan[sum].x && snake.y[k] == fan[sum].y){
						pd = 0;
						break;
					}
					for (int k = 1; k < sum;k++)
					if (fan[sum].x == fan[k].x&&fan[sum].y == fan[k].y){
						pd = 0;
						break;
					}
				}
				if (pd){
					gotoxy(fan[sum].x, fan[sum].y);
					printf("·´");
				}
else
				--sum;
		}
		snake.speed = 50;
		Sleep(snake.speed);
		keydown();
		if (!snakestatus()) break;
	}
	gotoxy(mapwidth / 2, mapheight / 2);
	printf("Gameover");
	system("pause");
	return 0;
}