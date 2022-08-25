#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int  max, min,answer,m,n;
	printf("Enter lower and upper integer limits:");
	while(scanf("%d%d", &min, &max),max!=min)
	{
		m = min * min;
		for (answer=0; min <= max; min++)
			answer += min * min;
		printf("The sums of the squares from %d to %d is %d", m, max*max, answer);
		printf("\nEnter next set of limits:");
	}

	return 0;
}