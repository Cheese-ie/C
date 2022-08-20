#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void pf(double n);
int main(void)
{
	double enter;
	printf("Enter a number of type double:");
	scanf("%lf", &enter);
	pf(enter);
	return 0;
}

void pf(double n)
{
	double p;
	p = n * n;
	printf("\n%lf", p);
}