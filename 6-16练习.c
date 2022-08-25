#define _CRT_SECURE_NO_WARNINGS
#define RATE_DA 0.10
#define RATE_DE 0.05
#define START 100.0
#include <stdio.h>

int main(void)
{
	int years;
	double Daphne, Deirdre;
	for(years=0,Daphne=Deirdre=START;Deirdre<=Daphne;years++)
	{
		Daphne += RATE_DA * START;
		Deirdre += RATE_DE * Deirdre;
	}
	printf("Investment values after %d years:\n", years);
	printf("Daphne: $%.2f\n", Daphne);
	printf("Deirdre: $%.2f\n", Deirdre);

	return 0;

}