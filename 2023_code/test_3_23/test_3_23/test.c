#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>


////ö������
//enum Sex
//{
//	//ö�ٵĿ���ȡֵ - ����
//	MALE,
//	FEMLE=9,
//	SECRET
//};
//
////enum Color
////{
////	RED,//0
////	GREEN,//1
////	BLUE//2
////};
//
//#define RED 0
//#define GREEN 1
//#define BLUE 2
//
//int main()
//{
//	//enum Sex s = MALE;
//	//enum Color c = 2;//int
//	
//	int color = RED;
//
//	//printf("%d %d %d\n", RED, GREEN, BLUE);
//	//printf("%d %d %d\n",MALE,FEMLE,SECRET);
//	return 0;
//}

////����-������-������
//
//union Un
//{
//	char c;//1
//	int i;//4
//};
////5���ֽ�
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));//
//
//	printf("%p\n", &u);
//
//	printf("%p\n", &(u.c));
//	printf("%p\n", &(u.i));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//};
//
//int main()
//{
//	struct S s;
//	printf("%p\n", &s);
//	printf("%p\n", &(s.a));
//	printf("%p\n", &(s.c));
//
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	//����1����ʾС��
//	//����0����ʾ���
//	return *(char*)&a;
//}

//int check_sys()
//{
//	union 
//	{
//		char c;
//		int i;
//	}u;
//	u.i = 1;//
//	//����1����ʾС��
//	//����0����ʾ���
//	return u.c;
//}
//
//int main()
//{
//	int a = 1;
//	int ret = check_sys();
//
//	if (1 == ret)
//	{
//		printf("С��\n");
//	}
//	else
//	{
//		printf("���\n");
//	}
//	return 0;
//}

//enum Sex
//{
//	MALE,
//	FEMALE,
//	SECRET
//};
//
//int main()
//{
//	enum Sex s = MALE;
//	printf("%d\n", sizeof(s));
//	return 0;
//}

//union Un
//{
//	int a;//4 8 4
//	char arr[5];//5 1 8 1
//};
//
//int main()
//{
//	union Un u;
//	printf("%d\n", sizeof(u));
//}