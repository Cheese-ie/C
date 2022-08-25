#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	double i, j;
	printf("Enter two floating point numbers:");
	while (scanf("%lf%lf", &i, &j) == 2)
	{
		printf("(%lf - %lf) / (%lf * %lf) = %lf", i, j, i, j, (i - j) / (i * j));
		printf("\nEnter two floating point numbers(non-numeric to quit):");
	}
	
	return 0;
}