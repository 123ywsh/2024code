#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <windows.h>

//struct S
//{
//	char name[20];
//	int age;
//};
//
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	struct S arr[n];//50个struct S 类型的数据
//
//	//30 - 浪费
//	//60 - 不够
//	//
//
//	return 0;
//}

//C语言是可以创建变长数组 - C99中增加了

#include <stdlib.h>
#include <string.h>
#include <errno.h>
//
//int main()
//{
//	//向内存申请10个整形的空间
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//打印错误原因的一个方式
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//正常使用空间
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//当动态内存的空间不再使用的时候
//	//就应该还给操作系统
//	free(p);
//	p = NULL;//
//	return 0;
//}

//int main()
//{
//	//malloc(10*sizeof(int))
//	int* p = (int*)calloc(10, sizeof(int));
//	if (p == NULL)
//	{
//		printf("%s\n", streroor(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//	//释放空间
//	//free函数是用来释放动态开辟的空间的
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//调整动态开辟内存空间的大小

//int main()
//{
//	int* p = (int*)malloc(20);
//	if (p == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		int i = 0;
//		for (i = 0; i < 5; i++)
//		{
//			*(p + i) = i;
//		}
//	}
//	//就是在使用molloc开辟的20个字节空间
//	//假设这里，20个字节不能满足我们的使用了
//	//希望我们能够有40个字节的空间
//	//这里就可以使用realloc来调整动态开辟的内存
//	//
//	//realloc函数使用的注意事项
//	//1.如果p指向的空间之后有足够的内存空间可以追加，则直接追加，后返回p
//	//2.如果p指向的空间之后没有足够的内存空间可以追加，则realloc函数会重新找一个新的内存区域
//	//  开辟一块满足需求的空间，然后把原来内存中的数据拷贝过来，释放旧的空间
//	//  最后返回新开辟的内存空间地址
//	//3.得用一个新的变量来接受realloc函数的返回值
//	//
//	int ptr= realloc(p, 40);
//	
//	if (ptr != NULL)
//	{
//		p = ptr;
//		int i = 0;
//		for (i = 5; i < 10; i++)
//		{
//			*(p + i) = i;
//		}
//
//		for (i = 0; i < 10; i++)
//		{
//			printf("%d ", *(p + i));
//		}
//	}
//
//	//释放内存
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}

//int main()
//{
//	//1.对空指针进行解引用操作
//	//int* p = (int*)malloc(40);
//	////万一malloc失败了，p就被赋值为NULL
//	//*p = 0;//err
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//	//2.对动态开辟的内存的越界访问
//	//int* p = (int*)malloc(5 * sizeof(int));
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//else
//	//{
//	//	int i = 0;
//	//	for (i = 0; i < 10; i++)
//	//	{
//	//		*(p + i) = i;
//	//	}
//	//}
//	////
//	//free(p);
//	//p = NULL;
//
//	int a = 10;
//	int* p = &a;
//	*p = 20;
//	//3.对非动态开辟内存的free
//	free(p);
//	p = NULL;
//	return 0;
//}

//int main()
//{
	//int* p = (int*)malloc(40);
	//if (p == NULL)
	//{
	//	return 0;
	//}
	////使用
	//int* p2 = realloc(p, 80);
	//if (p2 != NULL)
	//{
	//	p = p2;
	//}
	//

	//int* p = realloc(NULL, 40);//malloc(40)
//	return 0;
//}

//int main()
//{
//	//1.对NULL指针解引用操作
//	//int* p = malloc(40);
//	////p进行相关的判断
//	//*p = 10;//malloc开辟空间失败-对NULL指针解引用
//
//	//2.对动态开辟内存的越界访问
//	//int* p = (int*)malloc(40);//10个int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////越界
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3.对非动态开辟内存使用free释放
//	//int a = 10;
//	//int* p = &a;
//	////...
//	////对非动态开辟内存使用free释放
//	//free(p);
//	//p = NULL;
//
//	//4.使用free释放动态开辟内存的一部分
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	//for (i = 0; i < 5; i++)
//	//{
//	//	*p++ = i;
//	//}
//	////回收空间
//	////使用free释放动态开辟内存的一部分
//	//free(p);
//	//p = NULL;
//
//	//5.对同一块动态内存的多次释放
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////使用
//	////释放
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.动态开辟内存忘记释放（内存泄漏）
//	//while (1)
//	//{
//	//	malloc(1);
//	//}
//
//	return 0;
//}

//void GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改正1
//void GetMemory(char** p)
//{
//	*p = (char*)malloc(100);
//}
//void Test(void)
//{
//	char* str = NULL;
//	GetMemory(&str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//改正2
//char* GetMemory(char* p)
//{
//	p = (char*)malloc(100);
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str=GetMemory(str);
//	strcpy(str, "hello world");
//	printf(str);
//	free(str);
//	str = NULL;
//}
//int main()
//{
//	Test();
//	return 0;
//}

//返回栈空间地址的问题
//char* GetMemory(void)//这创建的是局部变量，在栈上创建，出去就销毁了，所以str虽然记住了p的地址，但里面的东西已经被销毁了，这是如果这块空间被别人使用，也就造成了非法访问内存
//{
//	char p[] = "hello world";
//	return p;
//}
//void Test(void)
//{
//	char* str = NULL;
//	str = GetMemory();
//	printf(str);
//}
//
//int main()
//{
//	Test();
//	return 0;
//}

//int* test()
//{
//	static int a = 10;//被static修饰之后就放到静态区了
//	int a = 10;//栈区
//	return &a;
//}
//
//int main()
//{
//	int* p = test();
//	*p = 20;//
//	return 0;
//}

//int* test()
//{
//	int* ptr = malloc(100);//堆区
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}