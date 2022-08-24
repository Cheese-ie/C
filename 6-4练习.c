#include <stdio.h>

int main(void)
{
	int i,j;
	char x='A';
	for (i = 1; i <= 6; i++)
	{
		for (j = 0; j < i; x++,j++)
			printf("%c", x);
		printf("\n");
	}

	return 0;
}
