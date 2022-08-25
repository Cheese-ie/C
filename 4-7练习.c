#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <float.h>

int main(void)
{
	double d = 1.0 / 3.0;
	float f = 1.0 / 3.0;
	printf("double:%.6f\t%.12f\t%.16f\n", d, d, d);
	printf("float :%.6f\t%.12f\t%.16f\n", f, f, f);
	printf("FLT_DIG:%d\tDBL_DIG:%d", FLT_DIG, DBL_DIG);

	return 0;
}
