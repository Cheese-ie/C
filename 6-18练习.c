#define Dunbar 150
#include <stdio.h>

int main(void)
{
	int week=0, friends=5;
	while (friends <= Dunbar)
	{
		week++;
		friends = (friends - week) * 2;
		printf("After %d weeks,there will be %d friends left.\n", week, friends);

	}

	return 0;
}