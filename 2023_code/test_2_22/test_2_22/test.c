#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int b = 0;
//	int a = 10;
//	int* pa = &a;//��ʼ��
//	int* p = NULL;//NULL-������ʼ��ָ��ģ���ָ�븳ֵ
//	return 0;
//}

//int my_strlen(char* str)
//{
//	char* start = str;
//	char* end = str;
//	while (*end != '\0')
//	{
//		end++;
//	}
//	return end - start;
//}
//
//int main()
//{
//	//strlen - ���ַ����ĳ���
//	//�ݹ� - ģ��ʵ����strlen - �������ķ�ʽ1���ݹ�ķ�ʽ2
//	//
//	char arr[] = "bit";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	printf("%p\n", arr);//��ַ - ��Ԫ�صĵ�ַ
//	printf("%p\n", arr+1);
//
//	printf("%p\n", &arr[0]);
//	printf("%p\n", &arr[0]+1);
//
//	printf("%p\n", &arr);
//	printf("%p\n", &arr+1);
//
//	//1.&arr - &������ - ������������Ԫ�صĵ�ַ - ��������ʾ�������� - &������ȡ��������������ĵ�ַ
//	//2.sizeof(arr) - sizeof(������) - ��������ʾ������������ - sizeof(������)���������������Ĵ�С
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	int* p = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(p + i) = i;
//	}
//	for (i = 0; i < 10; i++)
//	{
//		printf("%d\n", *(p+i));
//	}
//	return 0;
//}

//int main()
//{
//	int a = 10;
//	int* pa = &a;
//	int** ppa = &pa;//ppa���Ƕ���ָ��
//	**ppa = 20;
//	printf("%d\n", **ppa);
//	printf("%d\n", a);
//
//	//int** *pppa=&ppa;
//
//	return 0;
//}

int main()
{
	int a= 10;
	int b = 20;
	int c = 30;
	//int* pa = &a;
	//int* pb = &b;
	//int* pc = &c;
	//�������� - �������
	//�ַ����� - ����ַ�
	//ָ������ - ���ָ�� 
	/*int arr[10];*/
	int* arr2[3] = { &a,&b,&c };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%d ", *(arr2[i]));
	}
	return 0;
}