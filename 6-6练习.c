#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int max, min;
	printf("Enter the lower and upper limits in sequence:");
	for (scanf("%d%d", &min, &max); min <= max; min++)
		printf("%5d  %5d  %5d\n", min, min * min, min * min * min);
	return 0;
}