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
		p++;//��������������һ���ַ���ʼ��
	}
	while (*p != '\0')
	{
		if (*p == ' ')
		{
			if (flag == 0)//flag=0��˵�����ַ�֮��Ϊ��ĸ��Ӧ�ý���Щ��ĸ����pt��
			{
				t = (p + 1);//�Ӻ���һ���ǿո���ĸ��ʼ����'\0'�����������Ǹ��Ƶ�pt�С�
				while (*t != '\0')
				{
					*pt = *t;
					t++;
					pt++;
				}
			}
			*(pt++) = ' ';//��pt������һ���ո�
			flag++;//p�������ո���+1
			*p = '\0';//���ÿո���Ϊ'\0'���Ա���Ϊ��һ�ν���ĸ���Ƶ�pt��ʱ�Ľ�β����
		}
		else
		{
			flag = 0;//�����Ϊ�ո���flag���㡣
		}
		p--;//p������ǰ�ߡ�
	}
	//��ʱpָ��p��ĵ�һ����λ��������'\0'��
	t = p + 1;//�����1������ǰ��û�пո�Ļ�����Ͳ��Ὣ����ĸд��pt��������Ϊ�˽���д��pt��
	//�����һ������ǰ���пո�����һ�����Ḵ���κζ�����pt����Ϊ*t=��\0����
	while (*t != '\0')
	{
		*pt = *t;
		t++;
		pt++;
	}
	*pt = '\0';//������ϣ���pt�����һ���ַ�����Ϊ'\0'��

	while (*ht != '\0')//��pt�е��������¸��Ƶ�p�С�htָ��pt����׵�ַ��hָ��p����׵�ַ��
	{
		*h = *ht;
		h++;
		ht++;
	}
	*h = '\0';//��p���������Ͻ�������

	delete hht;//ɾ��pt�顣
	cout << hh << ' ';//���p���е����ݡ�
	system("pause ");
}

