#include <stdio.h>
#include <ctype.h>
int main(void)
{
	char ch;
	int lower = 0, upper = 0;
	while ((ch = getchar()) != EOF)
	{
		if (isupper(ch))
			upper++;
		if (islower(ch))
			lower++;
	}
	printf("upper:%d	lower:%d", upper, lower);
	return 0;
}