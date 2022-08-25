#define _CRT_SECURE_NO_WARNINGS
#define START 100.0
#define RATE 0.08
#define TAKE 10.0
#include <stdio.h>

int main(void)
{
	int years;
	double money=START;
	for (years = 0; money > 0; years++)
	{
		money += money * RATE;
		money -= TAKE;
	}
	printf("After %d years,Chuckie will withdraw the money", years);
	return 0;
}