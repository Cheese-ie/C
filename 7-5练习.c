#include <stdio.h>
int main(void)
{
	int i = 0;
	char ch;
	while ((ch = getchar()) != '#')
	{
		switch (ch) 
		{
			case '!':
				i++;
				printf("!!");
				break;
			case '.':
				i++;
				putchar('!');
				break;
			default:
				putchar(ch);
		}
	}
	printf("time:%d", i);
	return 0;
}