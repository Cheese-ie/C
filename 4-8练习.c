#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main(void)
{
	float jL, yL;
	printf("请输入旅行的耗油量（加仑）：");
	scanf("%f", &jL);
	printf("\n请输入旅行的里程（英里）：");
	scanf("%f", &yL);
	printf("\n消耗每加仑汽油行驶的英里数：%.1f", yL / jL);
	const double L = 3.785 * jL, km100 = 1.609 * yL/100;
	printf("\n即：%.1f升/100公里", L / km100);
	
	return 0;
}
