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
	printf("我已生成了一个数字，来猜猜吧\n");
	printf("请输入你猜的数字：\n");
	
	do
	{
		scanf("%d", &b);
		count++;
		if (b > a) {
			printf("太大了哦\n");
		}
		else if (b < a) {
			printf("太小了哦\n");
		}
	
	
	} while (a != b);
	printf("猜对啦，你用了%d次", count);



	return 0;
}