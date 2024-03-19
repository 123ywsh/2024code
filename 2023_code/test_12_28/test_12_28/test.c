#define  _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

void test()
{
	static int a = 1;
	a++;
	printf("a=%d\n", a);
}
int main()
{
	int i = 0;
	while (i < 5)
	{
		test();
		i++;
	}
	//int a = 0;
	//int b = 5;
	//int c = a && b;//&&逻辑与；||逻辑或就是只要有一个为真结果就是1
	//printf("%d\n", c);
	/*
	int a = 10;
	int b = a++;
	printf("a=%d b=%d\n", a, b);*/
	//int a = 0;
	//int b = ~a;
	//printf("%d\n", b);
	return 0;
}
	/*
	return 0;
}
	int a = 10;
	int arr[] = { 1,2,3,4,5,6 };
	printf("%d\n", sizeof(a));
	printf("%d\n", sizeof(int));
	printf("%d\n", sizeof a);
	printf("%d\n", sizeof(arr));
	printf("%d\n", sizeof(arr) / sizeof(arr[0]));*/