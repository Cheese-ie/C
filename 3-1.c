//整数上溢，浮点数上溢，浮点数下溢
#include <stdio.h>

int main(void)
{
	int a = 2147483647;//-2147483648
	float b = 1e100;//inf
	float c = -1e100;//-inf
	printf("%d\n%f\n%f\n", a+1, b, c);
	return 0;
}