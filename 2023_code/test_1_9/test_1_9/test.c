#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int i = 0;
	int j = 0;
	for (i = 100; i <= 200; i++)
	{
		for (j = 2; j < i; j++)
		{
			if (i % j == 0)
				break;
		}
		if (j == i)
			printf("%d ", i);
	}
	return 0;
}

//int main()
//{
//	int year = 0;
//	int count = 0;
//	for (year = 1000; year <= 2000; year++)
//	{
//		if ((year % 4 == 0) && (year % 100 != 0) || (year % 400 == 0))
//		{
//			printf("%d ", year);
//			count++;
//		}
//	}
		/*if (year % 4 == 0 && year % 100 != 0)
		{
			printf("%d ", year);
			count++;
		}
		else if (year % 400 == 0)
		{
			printf("%d ", year);
			count++;
		}
	}*/
//	printf("\ncount = % d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	int b = 0;
//	scanf("%d%d", &a, &b);
//	/*if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}*///这里无需大数除以小数，因为列如16%24=16在赋值给b,b的值24赋值给a,依然可以得出结果
//	while (i=a%b)
//	{
//		a = b;
//		b = i;
//	}
//	printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	for (i = 1; i < 101; i++)
//	{
//		if (i % 3 == 0)
//			printf("%d ",i);
//	}
//	return 0;
//}

//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	scanf("%d%d%d", &a, &b, &c);
//	if (a < b)
//	{
//		int tmp = a;
//		a = b;
//		b = tmp;
//	}
//	if (a < c)
//	{
//		int tmp = a;
//		a = c;
//		c = tmp;
//	}
//	if (b < c)
//	{
//		int tmp = b;
//		b = c;
//		c = tmp;
//	}
//	printf("%d %d %d\n", a, b, c);
//	return 0;
//}//写代码将三个数按从大到小输出