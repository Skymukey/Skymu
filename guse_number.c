#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

int a = 0;
int b = 0;
int count = 0;
int main()
{
	srand(time(0));
	a = rand();
	printf("����������һ�����֣����²°�\n");
	printf("��������µ����֣�\n");
	
	do
	{
		scanf("%d", &b);
		count++;
		if (b > a) {
			printf("̫����Ŷ\n");
		}
		else if (b < a) {
			printf("̫С��Ŷ\n");
		}
	
	
	} while (a != b);
	printf("�¶�����������%d��", count);



	return 0;
}