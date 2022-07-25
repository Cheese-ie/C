#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float a;
	printf("Enter a floating-point value:");
	scanf("%f", &a);
	printf("fixed-point notation:%f\n",a);
	printf("exponential notation:%e\n",a);
	printf("p notation:%a",a);
	return 0;
}