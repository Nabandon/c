#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include <stdlib.h>
void main()
{
	float f,p, w, s, d;
	int i=0;
	printf("路程:\n");
	scanf("%.3f", &s);
	if (s >= 3000)
		i = 12;
	else if (s<3000)
		i = s / 250;
	switch (i)
	{
	case 0:f = p*w*s; break;
	case 1:f = p*w*s*0.98; break;
	case 2:f=  p*w*s*0.95; break;
	case 3:f = p*w*s*0.95; break;
	case 4:f = p*w*s*0.92; break;
	case 5:f = p*w*s*0.92; break;
	case 6:f = p*w*s*0.92; break;
	case 7:f = p*w*s*0.92; break;
	case 8:f = p*w*s*0.9; break;
	case 9:f = p*w*s*0.9; break;
	case 10:f = p*w*s*0.9; break;
	case 11:f = p*w*s*0.9; break;
	case 12:f = p*w*s*0.85; break;
	}printf("运费:%.3f\n", f);
	system("pause");
}