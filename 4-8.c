#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>


int main(void)
{
	float jL, yL;
	printf("���������еĺ����������أ���");
	scanf("%f", &jL);
	printf("\n���������е���̣�Ӣ���");
	scanf("%f", &yL);
	printf("\n����ÿ����������ʻ��Ӣ������%.1f", yL / jL);
	const double L = 3.785 * jL, km100 = 1.609 * yL/100;
	printf("\n����%.1f��/100����", L / km100);
	
	return 0;
}