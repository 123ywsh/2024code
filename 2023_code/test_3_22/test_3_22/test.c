#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//////����Ĭ�϶�����Ϊ4
//#pragma pack(4)
//struct S
//{
//	char c1;//1
//	//7
//	double d;//8
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����

//////����Ĭ�϶�����Ϊ1
//#pragma pack(1)
//struct S
//{
//	char c1;//1
//	//3
//	double d;//8
//};
//#pragma pack()
////ȡ�����õ�Ĭ�϶�����
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));
//
//	return 0;
//}

//#include <stddef.h>
//struct S
//{
//	char c;
//	int i;
//	double d;
//};
//
//int main()
//{
//	offsetof();
//	printf("%d\n", offsetof(struct S, c));
//	printf("%d\n", offsetof(struct S, i));
//	printf("%d\n", offsetof(struct S, d));
//	return 0;
//}

//struct S
//{
//	int a;
//	char c;
//	double d;
//};
//
//void Init(struct S* ps)
//{
//	ps-> a= 100;
//	ps->c = 'w';
//	ps->d = 3.14;
//}
////��ֵ
//void Print1(struct S tmp)
//{
//	printf("%d %c %lf\n", tmp.a, tmp.c, tmp.d);
//}
////��ַ
//void Print2(const struct S* ps)
//{
//	printf("%d %c %lf\n", ps->a, ps->c, ps->d);
//}
//
//int main()
//{
//	struct S s;
//	Init(&s);
//	Print1(s);
//	Print2(&s);//��ַ���ã����ܽṹ����ֻ��4���ֽ�
//	//s.a = 100;
//	//s.c = 'w';
//	//s.d = 3.14;
//
//	//printf("%d\n", s.a);
//	return 0;
//}

//
//λ�� - ������λ
//Ϊ�˽�ʡ�ռ������
//struct S
//{
//	int a : 2;
//	int b : 5;
//	int c : 10;
//	int d : 30;
//};
////47bit - 6���ֽ�*8 = 48bit
//
//int main()
//{
//	struct S s;
//	printf("%d\n", sizeof(s));//8���ֽ�
//	return 0;
//}

struct S
{
	char a : 3;
	char b : 4;
	char c : 5;
	char d : 4;
};

int main()
{
	struct S s = { 0 };

	s.a = 10;
	s.b = 20;
	s.c = 3;;
	s.d = 4;
	return 0;
}