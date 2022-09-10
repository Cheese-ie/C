#include <stdio.h>
int main(void)
{
	char ch;
	int i=0;
	while (i++,(ch = getchar()) != EOF)
	{
		if (ch >= ' ')
			printf("\'%c\' -%03d ", ch, ch);
		else if (ch == '\n')
			printf("\'\\n\'-%03d ", ch);
		else if (ch == '\t')
			printf("\'\\t\'-%03d ", ch);
		else
			printf("\'^%c\'-%03d ", ch + 64, ch);
		if (i == 10)
		{
			i = 0;
			printf("\n");
		}
	}
	return 0;
}