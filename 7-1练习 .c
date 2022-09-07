#include <stdio.h>
int main(void)
{
	char ch;
	int space=0, n=0, other=0;
	while ((ch = getchar()) != '#')
	{
		if (ch == ' ')
			space++;
		else if (ch == '\n')
			n++;
		else
			other++;
	}
	printf("%d %d %d", space, n, other);
	return 0;
}