#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//常量字符串，const修饰*p2使指向的内容不能被修改，存的是a的地址
//	return 0;
//}

//void test1(int arr[])
//{}
//void test2(int*arr)//int(*pa)[5]因为二维数组首元素地址是一维数组
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	test1(arr);
//	test2(arr);
//	return 0;
//}

////数组指针 - 是指向数组的指针
////函数指针 - 是指向函数的指针 - 存放函数地址的一个指针
//
int Add(int x, int y)
{
	return x + y;
}

int main()
{
	int a = 10;
	int b = 20;
	int arr[10] = { 0 };
	int(*p)[10] = &arr;

	//arr;
	//printf("%d\n", Add(a, b));

	////&函数名和函数名都是函数的地址
	//printf("%p\n", &Add);
	//printf("%p\n", Add);
	int(*pa)(int, int) = Add;
	printf("%d\n", pa(2, 3));
	printf("%d\n", Add(2, 3));

	printf("%d\n", (*pa)(2, 3));//5
	return 0;
}

//void Print(char* str)
//{
//	printf("%s\n", str);
//	 
//}
//
//int main()
//{
//	void(*p)(char*) = Print;
//	(*p)("hello bit");
//	return 0;
//}