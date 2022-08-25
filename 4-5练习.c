#define _CRT_SECURE_NO_WARNINGS 1
#include <stdio.h>

int main(void)
{
	float v, b;
	printf("请输入下载速度(Mb/s):");
	scanf("%f", &v);
	printf("\n请输入文件大小(Mb):");
	scanf("%f",&b);
	printf("\n下载速度:%.2fMb/s\n文件大小:%.2fMb\n下载时间:%.2fs", v, b,b/v);
	return 0;
}
