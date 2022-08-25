#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

int main(void)
{
	int i,j,n;
	char word[45];
	printf("Enter a word:");
	scanf("%s", word);
	for (i = strlen(word), n = i - 1, j = 1; j <= i; j++, n--)
		printf("%c", word[n]);
	return 0;
}