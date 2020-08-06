#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
	char ch;
	char EFO;
	printf("ÇëÊäÈëÒ»¸ö×Ö·û:\n");
	while ((ch = getchar()) != EFO)
	{
		if ('a' <= ch&&ch <= 'z')
		{
			putchar(ch - 32);
		}
		if ('A' <= ch&&ch <= 'Z')
		{
			putchar(ch + 32);
		}
		else
		{}
	}system("pause");
	return 0;

}