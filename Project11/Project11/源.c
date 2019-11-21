#include <stdio.h>
#include <stdlib.h>
int main()
{
	int letter = 0;
	printf("ÊäÈëÒ»¸ö×Ö·û:\n");
		letter = getchar();
		if (letter >= 'a'&&letter <= 'z')
		{
			putchar(letter - 32);
		}
		else if (letter >= 'A'&&letter <= 'Z')
		{
			putchar(letter + 32);
		}
		if (0 <= letter <= 9)
		printf("\n");
		system("pause");
		return 0;
}
