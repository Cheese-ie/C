#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

int main(void)
{	
	char x,y,z;
	printf("Enter a capital letter:");
	for (scanf("%c", &x),z='A'; x >= 'A'; x--, z++)
	{
		for (y = 'A'; y <= x; y++)
			printf(" ");
		for (y = 'A'; y < z; y++)
			printf("%c", y);
		for (y=z; y>='A'; y--)
			printf("%c", y);
		printf("\n");
		
	}
	return 0;
}
