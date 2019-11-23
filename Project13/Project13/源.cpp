#include <stdio.h>
#include <stdlib.h>
int small(char word)
{
	return word >= 'A'&&word <= 'Z';
}
int big(char word)
{
	return word >= 'a'&&word <= 'z';
}
int main()
{
	char word;
	printf("ÇëÊäÈë:\n");
	while (1){
		word = getchar();
		if (small(word)){
			putchar(word + 32); 
			printf("\n");
		}
		else if (big(word)){
			putchar(word - 32);
			printf("\n");
		}
		else if (0 <= word <= 9){
			;
		}
	}system("pause");
	return 0;
}