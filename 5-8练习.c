#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int a, b;
	printf("This program computes moduli.\n");
	printf("Enter an integer to serve as the second operand:");
	scanf("%d", &b);
	printf("Now enter the first operand:");
	scanf("%d", &a);
	while ( a && b > 0)
	{
		printf("%d %% %d is %d", a, b,a%b);
		printf("\nEnter next numbers for first operand (<= 0 to quit):");
		scanf("%d", &a);

	}
	printf("\nDone!");
	return 0;
}