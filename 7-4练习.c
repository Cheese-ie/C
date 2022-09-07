#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i=0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		if (ch == '.')
		{
			ch = '!';
			i++;
		}
		else if (ch == '!')
		{
			putchar(ch);
			i++;
		}
		putchar(ch);
	}
	printf("\ntime:%d", i);
	return 0;
}
