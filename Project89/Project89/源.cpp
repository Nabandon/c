//ì³²¨ÄÇÆõÊı
#include<stdio.h>
#include <stdlib.h>

int feib(int n){
	
	
	if (n <= 2)
		return 1;
	return feib(n - 1) + feib(n - 2);
}void main(){
	feib(8);
	printf("%d", feib(8));
}
