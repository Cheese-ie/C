#include <ctype.h>
#include <stdio.h>
int main(void)
{
	_Bool word=1;
	double words = 0.0, i = 0.0;
	char ch;
	while ((ch = getchar()) != EOF)
	{		
		if (!word && isalpha(ch))
		{
			word = 1;
			i++;
		}
		else if (word && (isspace(ch) || ispunct(ch)))
		{
			word = 0;
			words++;
		}
		else if (word)
			i++;
	}
	printf("average:%.2lf", i / words);
}