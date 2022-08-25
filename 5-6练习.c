#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int count = 0, sum = 0, days;
	printf("You've been working for  ___ days.\b\b\b\b\b\b\b\b\b");
	scanf("%d", &days);
	while (count++ < days)
		sum = sum + count * count;
	printf("\nYou get %d dollars.\n", sum);
	return 0;
}
