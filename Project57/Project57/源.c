#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <Windows.h>
int i, j;
void showlove(){
	{
		for (i = 0; i < 7; i++)
		printf("* * * * * * * *\n");
		Sleep(1000);
		system("cls");
		{
			printf("  * * * * * *  \n");
			printf("* * * * * * * *\n"); 
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("  * * * * * *  \n");
			Sleep(1000);
			system("cls");

		}
		{
			printf("  * * * * * *  \n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("  * * * * * *  \n");
			printf("    * * * *    \n");
			Sleep(1000);
			system("cls");
		}i = 0;
		while (i++ < 5)
		{
			printf("  * *     * *  \n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf("* * * * * * * *\n");
			printf(" * * * * * * * \n");
			printf("   * * * * *   \n");
			printf("      * *      \n");
			printf("       *       \n");
			Sleep(1000);
			system("cls");
		}
	}
}int main()
{
	while (1){
		char orign1[] = "I LOVE Y";
		char orign2[] = "        ";
		int left = 0, right = strlen(orign2) - 1;
		while (left <= right){
			orign2[left] = orign1[left];
			orign2[right] = orign1[right];
			left++;
			right--;
			printf("%s\n", orign2);
			Sleep(1000);
			system("cls");
		}
		showlove();
	}
}