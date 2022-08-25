#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	char name1[20], name2[20];
	printf("请输入名和姓(以空格隔开)：");
	scanf("%s%s", name1, name2);
	printf("%s,%s", name1, name2);
	return 0;
}
