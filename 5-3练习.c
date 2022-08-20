#define _CRT_SECURE_NO_WARNINGS
#define W 7
#include <stdio.h>

int main(void)
{
	int days1, weeks, days2;
	printf("Enter the number of days:");
	scanf("%d", &days1);
	while (days1 > 0)
	{
		weeks = days1 / W;
		days2 = days1 % W;
		printf("\n%d days are %d weeks, %d days.", days1, weeks, days2);
		printf("\nEnter the number of days(enter a number less than or equal to zero to stop):");
		scanf("%d", &days1);
	}
	printf("bye!");
	return 0;
}