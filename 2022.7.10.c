#include <stdio.h>
int a = 1;

void test1()
{
	a++;
	printf("a=%d\n", a);
}

void test2()
{
	static int b = 1;
	b++;
	printf("b=%d\n", b);
}
void test3()
{
	int c = 1;
	c++;
	printf("c=%d\n", c);
}


int main()
{
	int i = 0;
	while (i <= 10)
	{
		test1();
		test2();
		test3();
		i++;
	}
	return 0;
}


