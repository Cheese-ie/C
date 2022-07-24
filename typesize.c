#include <stdio.h>

int main(void)
{
	printf("Type int has a size of %zd bytes.\n", sizeof(int));
	printf("Type char has a size of %zd bytes.\n", sizeof(char));
	printf("Type float has a size of %zd bytes.\n", sizeof(float));
	printf("Type double has a size of %zd bytes.\n", sizeof(double));//8
	printf("Type short has a size of %zd bytes.\n", sizeof(short));
	printf("Type long has a size of %zd bytes.\n", sizeof(long));
	printf("Type long long has a size of %zd bytes.\n", sizeof(long long));
	printf("Type long double has a size of %zd bytes.\n", sizeof(long double));//8
	//百度:double是8字节，long double C标准没有详细规定，只说了sizeof(long double)>=sizeof(double)
	return 0;
}