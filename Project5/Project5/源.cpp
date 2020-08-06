#include<stdio.h>
#include<stdlib.h>
int main(){
	int i, j, k;
	for (i = 0; i <= 7; i++){
		for (j = 0; j <= 6 - i; j++){
			printf("");
		}
		for (k = 6 - i; k < i + 7; k++){
			printf("*");
		}
		printf("\n");
	}
	for (i = 7; i <= 13; i++){
		for (j = 0; j < i - 6; j++){
			printf("");
		}
		for (k = i - 7; k < 18 - i; k++){
			printf("*");
		}
		printf("\n");
	}
	system("pause");
	return 0;
}