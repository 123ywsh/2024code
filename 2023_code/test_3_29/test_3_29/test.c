#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define MAX 100
//#define STR "hehe"
//#define reg register
//#define do_forever for(;;)
//
//int main()
//{
//	do_forever;
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	int ret = SQUARE(5);//宏
//	//int ret=5*5;
//	printf("ret=%d\n", ret);
//	return 0;
//}

//#define SQUARE(X) X*X
//
//int main()
//{
//	//int ret = SQUARE(5);//宏
//	//int ret=5*5;
//	/*printf("ret=%d\n", ret);*/
//
//	int ret = SQUARE(5 + 1);//宏会整体替换，不会运算参数的值
//	printf("%d\n", ret);//宏是完成替换的，而不是传参的
//	return 0;
//}

//#define DOUBLE(x) ((x)+(x))
//
//int main()
//{
//	int a = 5;
//	int ret = 10 * DOUBLE(a);//写宏的时候不要吝啬括号
//	//int ret=10*((a)+(a));
//	//
//	printf("%d\n", ret);
//	return 0;
//}

//void print(int a)
//{
//	printf("the value of a is %d\n", a);
//}
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	//printf("the value of a is %d\n",a);
//	print(a);
//	print(b);
//	return 0;
//}

//#define PRINT(X) printf("the value of "#X"is %d\n",X)
//
//int main()
//{
//	printf("hello world\n");
//	printf("hello " "world\n");
//	printf("hel""lo ""world\n");
//
//	int a = 10;
//	int b = 20;
//	PRINT(a);
//	//printf("the value of""a""is %d\n",a);
//	PRINT(b);
//	//printf("the value of""b""is %d\n",a);
//	return 0;
//}

#define CAT(X,Y) X##Y

int main()
{
	int Class84 = 2024;
	//printf("%d\n",Class84)
	printf("%d\n", CAT(Class, 84));
	//printf("%d\n", Class##84);
	//printf("%d\n", Class84);
	return 0;
}