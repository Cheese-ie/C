#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int age;
	printf("请输入年龄:___\b\b\b");
	scanf("%d", &age);
	printf("\n对应秒数为：%f", age * 3.156e7);
	return 0;
}