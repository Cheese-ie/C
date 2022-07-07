#define  _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>
#include <string.h>
int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a', 'b', 'c' };
	char arr3[] = { 'a', 'b', 'c','\0'};
	printf("%zd\n", strlen(arr1));//3
	printf("%zd\n", strlen(arr2));//Ëæ»úÊý
	printf("%zd\n", strlen(arr3));//3
	printf("%s\n", "\\");//\//
    printf("%s\n", "\\\\");//\\//
	printf("%s\n", "c:\test");//c:	est
	printf("%s\n", "c:\\test");//c:\test
	printf("%zd\n", strlen("c:\test\328\test"));//12
	return 0;
}