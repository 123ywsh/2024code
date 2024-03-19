#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Max(int x, int y)
{
	if (x > y)
		return x;
	else
		return y;
}
int main()
{
	int a=5;
	int b = 6;
	int max = 0;
	max = Max(a,b);
	printf("max=%d\n", max);
	/*int a = 3;
	int b = 4;
	if (a > b)
	printf("较大值：%d\n", a);
	else
		printf("较大值：%d\n", b);*/
	return 0;
}
//int main()
//{
//	int a = 0;
//	printf("%d\n", a);
//	printf("%d\n", !a);
//	return 0;
//}