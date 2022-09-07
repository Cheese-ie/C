#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
int main(void)
{
	int i,o=0,j=0;
	double sumo = 0.0, sumj = 0.0;
	while (scanf("%d", &i)==1 && i != 0)
	{
		if (i % 2 == 0 && i != 1)
		{
			o++;
			sumo += i;
		}
		else
		{
			j++;
			sumj += i;
		}
	}
	if(o==0&&j!=0)
		printf("偶数个数:%d	偶数平均数:/		奇数个数:%d	奇数平均数:%.2lf",o,j,sumj/j);
	else if(o!=0&&j==0)
		printf("偶数个数:%d	偶数平均数:%.2lf		奇数个数:%d	奇数平均数:/", o,sumo/o, j);
	else if(o==0&&j==0)
		printf("偶数个数:%d	偶数平均数:/		奇数个数:%d	奇数平均数:/f", o, j);
	else
		printf("偶数个数:%d	偶数平均数:%.2lf		奇数个数:%d	奇数平均数:%.2lf", o,sumo/o, j,sumj/j);

	return 0;
}