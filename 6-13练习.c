#include <stdio.h>
#define SIZE 8
int main(void)
{
	int i, j, a[SIZE];
	for (i = 0, j = 2; i < SIZE; i++, j *= 2)
		a[i] = j;
	i = 0;
	do
	{		
		printf("%5d", a[i++]);
	} while (i < SIZE);
	return 0;
}