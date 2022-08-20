#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
void Temperatures(double h);

int main(void)
{
	double hua;
	printf("Enter a temperture in Fahrenheit:");
	while (scanf("%lf",&hua) == 1)
	{
		Temperatures(hua);
		printf("\nEnter a temperture in Fahrenheit(Q or some other non-number to quit):");

	}
	printf("\nDone!");
	return 0;
}

void Temperatures(double h)
{
	const double s = 5.0 / 9.0 * (h - 32.0);
	const double k = s + 273.16;
	printf("\n%.2lf ¨H = %.2lf ¡æ = %.2lf K", h, s, k);
	
}