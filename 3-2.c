#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	int ASCII;
	printf("������һ��ASCII��ֵ[0-127]��___\b\b\b");
	scanf("%d", &ASCII);
	printf("\n��Ӧ�ַ�Ϊ��%c\n", ASCII);
	
	return 0;
}