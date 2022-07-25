#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int ASCII;
	printf("请输入一个ASCII码值[0-127]：___\b\b\b");
	scanf("%d", &ASCII);
	printf("\n对应字符为：%c\n", ASCII);
	
	return 0;
}