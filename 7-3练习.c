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
		printf("ż������:%d	ż��ƽ����:/		��������:%d	����ƽ����:%.2lf",o,j,sumj/j);
	else if(o!=0&&j==0)
		printf("ż������:%d	ż��ƽ����:%.2lf		��������:%d	����ƽ����:/", o,sumo/o, j);
	else if(o==0&&j==0)
		printf("ż������:%d	ż��ƽ����:/		��������:%d	����ƽ����:/f", o, j);
	else
		printf("ż������:%d	ż��ƽ����:%.2lf		��������:%d	����ƽ����:%.2lf", o,sumo/o, j,sumj/j);

	return 0;
}