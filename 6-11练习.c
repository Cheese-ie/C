#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i,j,n[8];
	printf("Enter eight integers:");
	for (i = 0; i < 8; i++)
		scanf("%d", &n[i]);
	for (j = 7; j >= 0; j--)
		printf("%5d", n[j]);
	return 0;
}