#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int Add(int n)
{
	if (n == 1)
		return 1;
	else if (n == 2)
		return 2;
	else
		return Add(n - 1) + Add(n - 2);
}
int main()
{
	int n = 0;
	int ret = 0;
	scanf("%d", &n);
	ret = Add(n);
	printf("ret=%d\n", ret);
	return 0;
}

//void hanoi(int n, char A, char B, char C)
//{
//	if (n == 1)
//	{
//		printf("%c->%c\n", A, C);
//	}
//	else
//	{
//		hanoi(n - 1, A, C, B);
//		printf("%c->%c\n", A, C);
//		hanoi(n - 1, B, A, C);
//	}
//}
//int main()
//{
//	hanoi(3, 'A', 'B', 'C');
//	return 0;
//}//汉诺塔问题

////int Fib(int n)
////{
////	if (n <= 2)
////		return 1;
////	if (n > 2)
////		return Fib(n - 1) + Fib(n - 2);
////}//用递归的办法有时候不合适
//int Fib(int n)
//{
//	int a = 1;
//	int b = 1;
//	int c = 1;
//	while (n > 2)
//	{
//		c = a + b;
//		a = b;
//		b = c;
//		n--;
//	}
//	return c;
//}//用循环的办法
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	//TDD测试驱动开发，就先先想怎么用这个函数，再去设计这个函数
//	ret = Fib(n);
//	printf("ret=%d\n", ret);
//	return 0;
//}//斐波那契数列问题

//int Fac1(int n)
//{
//	int i = 0;
//	int ret = 1;
//	for (i = 1; i <= n; i++)
//	{
//		ret *= i;
//	}
//	return ret;
//}
//int Fac2(int n)
//{
//	if (n <= 1)
//		return 1;
//	else
//		return n * Fac2(n - 1);
//}
//int main()
//{
//	int n = 0;
//	int ret = 0;
//	scanf("%d", &n);
//	ret = Fac2(n);
//	printf("%d\n", ret);
//	return 0;
//}