#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 11;
//
//	int max = MAX(a++, b++);
//	//int max = ((a++) > (b++) ? (a++) : (b++));
//	//��Ĳ�����ֱ���滻��������������滻
//	//С���и����õĺ�Ĳ���
//
//	printf("%d\n", max);
//	printf("%d\n", a);
//	printf("%d\n", b);
//
//	return 0;
//}

//float Max(float x,float y)
//{
//	return ((x) > (y) ? (x) : (y));
//}


//int Max(int x, int y)
//{
//	return ((x) > (y) ? (x) : (y));
//}
//
//#define MAX(X,Y) ((X)>(Y)?(X):(Y))
//
//int main()
//{
//	int a = 10;
//	int b = 20;
//	float c = 3.0f;
//	float d = 4.0f;
//	//�����ڵ��õ�ʱ��
//	//���к������úͷ��صĿ���
//	//
//	//float max = Max2(c, d);
//	//printf("max=%d\n", max);
//	//Ԥ����׶ξ�������滻
//	//û�к����ĵ��úͷ��صĿ���
//	//max = MAX(c, d);
//	//max = ((c) > (d) ? (c) : (d));
//	//printf("max=%d\n", max);
//	int max = Max(a, b);
//	printf("max=%d\n", max);
//	max = MAX(a, b);
//	printf("max=%d\n", max);
//
//	return 0;
//}

//#define MALLOC(num,type) (type*)malloc(num*sizeof(type))
//int main()
//{
//	int* p = (int*)malloc(10 * sizeof(int));
//
//	int* p = MALLOC(10, int);
//	//int* p = (int*)malloc(10 * sizeof(int));
//	return 0;
//}

//#define MAX 100
//
//int mian()
//{
//	printf("MAX=%d\n", MAX);
//#undef MAX
//	printf("MAX=%d\n", MAX);
//	return 0;
//}

//#define DEBUG
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#ifdef DEBUG
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,0 };
//	int i = 0;
//
//	for (i = 0; i < 10; i++)
//	{
//		arr[i] = 0;
//#if 1-1
//		printf("%d ", arr[i]);
//#endif
//	}
//
//	return 0;
//}

//#define DEBUG 0
//
//int main()
//{
////#if define(DEBUG)
////	printf("hehe\n");
////#endif
////
////#ifdef DEBUG
////	printf("hehe\n");
////#endif
////
////#if !define(DEBUG)
////	printf("hehe\n");
////#endif
//
//#ifndef DEBUG
//	printf("hehe\n");
//#endif
//	return 0;
//}


