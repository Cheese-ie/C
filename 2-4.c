#include <stdio.h>

void jolly(void);
void deny(void);
void jolly(void)
{
	printf("For he's a jolly good fellow!\n");
}
void deny(void)
{
	printf("Which nobody can deny!\n");
}
int main(void)
{
	jolly();
	jolly();
	jolly();
	deny();
	return 0;
}