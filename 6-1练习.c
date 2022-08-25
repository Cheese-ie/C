#include <stdio.h>

int main(void)
{
	int i;
	char a='a', b[26];
	for (i = 0; i < 26; i++, a++)
		b[i] = a;
	for (i = 0; i < 26; i++)
		printf("%c", b[i]);
		
	return 0;
}
