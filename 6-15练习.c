#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i=0;
	char n[255];
	printf("Enter a string:");
	//for (i = 0; i < 255 && n[i-1] != '\n'; i++)
	//	scanf("%c", &n[i]);
	do
		scanf("%c", &n[i]);
	while (i < 255 && n[i++] != '\n');
	
	while (i >= 0)
		printf("%c", n[i--]);

	return 0;
}