#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i, j,n;
	while (scanf("%d", &i) == 1 && i > 0)
	{
		if (i == 1)
		{
			printf("None!");
			continue;
		}
		for (; i > 1; i--)
		{
			for (j = 2,n=0; j < i; j++)
			{
				if (i % j == 0)
				{
					n = 1;
					break;
				}			
			}
			if (n == 0)
				printf("%3d", i);
		}
	}
	return 0;
}