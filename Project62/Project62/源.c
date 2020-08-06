
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
int  main(){
	int x, i = 0,count=0,sum=0;
	
	
	scanf("%d ", &x);
	i = 0;
	for (i = 0; i <= x; i++)
	if (i==x)	
		sum += i;
	count++;
	printf("Æ½¾ùÊý:%d ", sum/count);
	system("pause");
	return 0;
}