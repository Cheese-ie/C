#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float t;
	printf("请输入身高(/英寸):");
	scanf("%f", &t);
	printf("\n即 %f 厘米", t * 2.54);
	return 0;
}