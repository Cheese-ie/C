#define _CRT_SECURE_NO_WARNINGS 
#define PRE_H 60
#include <stdio.h>

int main(void)
{
	int mins1,mins2,hour;
	printf("�������������");
	scanf("%d", &mins1);
	while (mins1 > 0)
	{
		mins2 = mins1 % PRE_H;
		hour = mins1 / PRE_H;
		printf("\n��Ӧʱ��Ϊ%dСʱ%d����", hour, mins2);
		printf("\n�����������(����С�ڻ����0��ֵ����)��");
		scanf("%d", &mins1);
	}
	return 0;
}