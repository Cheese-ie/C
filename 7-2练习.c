#include <stdio.h>
int main(void)
{
	char ch;
	int i = 0;
	while ((ch = getchar()) != '#')
	{
		if (i++ % 8 == 0)
			printf("\n");
		if (ch == '\n')
			printf("\\n-%3d ", ch);
		else if (ch == '\t')
			printf("\\t-%3d ", ch);
		else
			printf("%c -%3d ", ch, ch);
	}
	return 0;
}
