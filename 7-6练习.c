#include <stdio.h>
int main(void)
{
	int i = 0;
	char x, y='.';
	while ((x = getchar()) != '#')
	{
		if (y == 'e' && x == 'i')
			i++;
		y = x;
	}
	printf("time:%d", i);
	return 0;
}