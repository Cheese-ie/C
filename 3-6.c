#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float k;
	printf("请输入水的夸脱数：");
	scanf("%f", &k);
	printf("\n对应水分子数量为:%f个", k*950 / 3.0e-23);
	return 0;
}