#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	char ch = 'w';
//	char* p = &ch;
//	const char* p2 = "abcdef";//�����ַ�����const����*p2ʹָ������ݲ��ܱ��޸ģ������a�ĵ�ַ
//	return 0;
//}

//void test1(int arr[])
//{}
//void test2(int*arr)//int(*pa)[5]��Ϊ��ά������Ԫ�ص�ַ��һά����
//{}
//int main()
//{
//	int arr[10] = { 0 };
//	test1(arr);
//	test2(arr);
//	return 0;
//}

////����ָ�� - ��ָ�������ָ��
////����ָ�� - ��ָ������ָ�� - ��ź�����ַ��һ��ָ��
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

	////&�������ͺ��������Ǻ����ĵ�ַ
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