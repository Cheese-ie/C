#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float b;
	printf("请输入杯数：");
	scanf("%f", &b);
	printf("对应品脱数为：%f\n", b/2);
	printf("对应盎司数为：%f\n", b*8);
	printf("对应汤勺数为：%f\n", b*8*2);
	printf("对应茶勺数为：%f\n", b*8*2*3);
	return 0;
}