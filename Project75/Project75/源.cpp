#define _CRT_SECURE_NO_WARNINGS
#include<string>
#include<iostream>
#include<stdio.h>
#include <stdlib.h>
using namespace std;
int main()
{
	char *p = new char[50];
	char *pt = new char[50];
	char *h, *ht, *t, *hh, *hht;
	h = p; ht = pt; hh = p; hht = pt;
	*(p++) = '\0';
	int flag = 0;

	gets(p);
	while (*(p + 1) != '\0')
	{
		p++;//倒序遍历，从最后一个字符开始。
	}
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			if (flag == 0)//flag=0，说明该字符之后为字母，应该将这些字母放入pt。
			{
				t = (p + 1);//从后面一个非空格字母开始，到'\0'结束。将它们复制到pt中。
				while (*t != '\0')
				{
					*pt = *t;
					t++;
					pt++;
				}
			}
			*(pt++) = ' ';//在pt中增加一个空格。
			flag++;//p中连续空格数+1
			*p = '\0';//将该空格置为'\0'，以便作为下一次将字母复制到pt中时的结尾符。
		}
		else
		{
			flag = 0;//如果不为空格，则将flag清零。
		}
		p--;//p继续往前走。
	}
	//此时p指向p块的第一个单位，里面是'\0'。
	t = p + 1;//如果第1个单词前面没有空格的话，则就不会将该字母写入pt。这里是为了将其写入pt。
	//如果第一个单词前面有空格，则这一步不会复制任何东西到pt。因为*t=‘\0’。
	while (*t != '\0')
	{
		*pt = *t;
		t++;
		pt++;
	}
	*pt = '\0';//复制完毕，将pt的最后一个字符设置为'\0'。

	while (*ht != '\0')//将pt中的内容重新复制到p中。ht指向pt块的首地址，h指向p块的首地址。
	{
		*h = *ht;
		h++;
		ht++;
	}
	*h = '\0';//在p的最后添加上结束符。

	delete hht;//删除pt块。
	cout << hh << ' ';//输出p块中的内容。
	system("pause ");
}

