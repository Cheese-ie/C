#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
//1.0+1.0/2.0+1.0/3.0+1.0/4.0......
//1.0-1.0/2.0+1.0/3.0+1.0/4.0......
//计算这两个无限序列的总和
int main(void)
{
	int t;
	double i,j,n,a1,a2,a3;
	printf("Enter a number(<=0 to end): ");
	while (scanf("%d", &t) == 1 && t > 0)//输入计算次数
	{
		for (i = 1.0, a1 = 0.0; i <= t; i++)//计算第一条式子
			a1 += 1.0 / i;
		while (t % 2 != 0 && t > 0)//计算第二条式子（计算奇数次时）
		{
			for (a2 = 0.0, a3 = 0.0, i = 1.0, j = -2.0, n = 1.0
				; i <= t / 2
				; j -= 2, n += 2, i++)
			{
				//a2偶数项之和，a3奇数项之和
				a2 += 1.0 / j;
				a3 += 1.0 / n;
			}//a2+a3为除去最后一项之和
			a3 += 1.0 / t;//最后一项	
			t = -1;//停止此循环，防止进入计算偶数次时的while循环
		}
		while (t % 2 == 0)//计算第二条式子（计算偶数次时）
		{
			for (a2 = 0.0, a3 = 0.0, i = 1.0, j = -2.0, n = 1.0; i <= t / 2; j -= 2, n += 2, i++)
			{
				a2 += 1.0 / j;
				a3 += 1.0 / n;
				//a2偶数项之和，a3奇数项之和
			}
			t++;//停止循环
		}
		printf("1.0+1.0/2.0+1.0/3.0+1.0/4.0+...=%lf\n", a1);
		printf("1.0-1.0/2.0+1.0/3.0-1.0/4.0+...=%lf\n", a2+a3);
		printf("The sum is %lf\n", a1 + a2 + a3);
		printf("Enter another number(<=0 to end): ");

	}
	printf("Done!");
	return 0;
}