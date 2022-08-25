#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>

int main(void)
{

	char name[20];
	printf("ÇëĘäČëÄăľÄĂű×ÖŁş");
	scanf("%s", name);
	printf("\"%s\"\n", name);
	printf("\"%20s\"\n",name);
	printf("\"%-20s\"\n",name);
	printf("\"%*s\"",strlen(name)+3, name);


	return 0;
}
