#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int n,m;
	scanf("%d", &n);
	m = n + 10;
	while (n <= m)
		printf("\t%d", n++);
	return 0;
}