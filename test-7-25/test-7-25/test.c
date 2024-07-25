#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	/*int a = 10;
	int b = 20;
	if (a > b)
		printf("较大值为：%d\n", a);
	else
		printf("较大值为：%d\n", b);
		*/

	int a =100;
	int b = 20;
	int max = 0;
	max=Max(a, b);
	printf("max=%d\n", max);
	return 0;
}