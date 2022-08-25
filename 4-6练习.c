#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(void)
{
	char first[20], second[20];
	printf("ÇëÊäÈëÃû:");
	scanf("%s", first);
	printf("\nÇëÊäÈëÐÕ:");
	scanf("%s", second);
	printf("\n%s %s", first, second);
	printf("\n%*zd %*zd", strlen(first), strlen(first), strlen(second), strlen(second));
	printf("\n%-*zd %-*zd", strlen(first), strlen(first), strlen(second), strlen(second));

	return 0;
}
