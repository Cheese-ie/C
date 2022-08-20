#define _CRT_SECURE_NO_WARNINGS 
#define PRE_H 60
#include <stdio.h>

int main(void)
{
	int mins1,mins2,hour;
	printf("请输入分钟数：");
	scanf("%d", &mins1);
	while (mins1 > 0)
	{
		mins2 = mins1 % PRE_H;
		hour = mins1 / PRE_H;
		printf("\n对应时间为%d小时%d分钟", hour, mins2);
		printf("\n请输入分钟数(输入小于或等于0的值结束)：");
		scanf("%d", &mins1);
	}
	return 0;
}