#include <stdio.h>

int main(void)
{
	int i,x;
	char j;
	for (i=1; i <=6; i++)
	{
		for (j = 'F',x=1; x<=i; j--,x++)
			printf("%c", j);
		printf("\n");
	}
	return 0;
}
