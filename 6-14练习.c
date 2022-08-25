#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{
	int i;
	double a[8], b[8];
	printf("Enter eight numbers into the first array:");
	for (i = 0; i < 8; i++)
		scanf("%lf", &a[i]);
	printf("The first  array:");
	for (i = 0; i < 8; i++)
		printf("%10.2lf", a[i]);
	for (i = 1, b[0] = a[0]; i < 8; i++)
		b[i] = a[i]+b[i-1];
	printf("\nThe second array:");
	for (i = 0; i < 8; i++)
		printf("%10.2lf", b[i]);

	return 0;
}