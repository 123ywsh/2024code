#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//����һ���ṹ������-struct Stu
//struct Stu
//{
//	//��Ա����
//	char name[20];
//	int age;
//	char id[20];
//};
//
//int main()
//{
//	int a = 10;
//	//ʹ��struct Stu������ʹ�����һ��ѧ������s1,����ʼ��
//	struct Stu s1 = { "����",20,"2019010305" };
//	struct Stu* ps = &s1;
//
//	printf("%s\n", ps->name);
//	printf("%d\n", ps->age);
//	//�ṹ��ָ��->��Ա��
//	/*printf("% s\n", (*ps).name);
//	printf("%d\n", (*ps).age);*/
//
//	/*printf("%s\n", s1.name);
//	printf("%d\n", s1.age);
//	printf("%s\n", s1.id);*/
//	//�ṹ�����.��Ա��
//	return 0;
//}

//int main()
//{
//	char a = 3;
//	//00000000000000000000000000000011
//	//00000011 - a
//	//
//	char b = 127;
//	//00000000000000000000000001111111
//	//01111111 - b
//	//a��b������
//	//00000000000000000000000000000011
//	//00000000000000000000000001111111
//	//00000000000000000000000010000010
//	//
//	char c = a + b;
//	//10000010-c
//	//11111111111111111111111110000010 - ����
//	//11111111111111111111111110000001 - ����
//	//10000000000000000000000001111110 - ԭ��
//	//-126
//	printf("%c\n", c);
//	return 0;
//}

//int main()
//{
//	int i = 1;
//	int a = (++i) + (++i) + (++i);
//	printf("a=%d\n", a);
//	return 0;
//}

//int main()
//{
//	int arr[10] = { 0 };
//	//int* p = arr;//������-��Ԫ�صĵ�ַ
//	char* pc = arr;
//	int i = 0;
//	for (i = 0; i < 10; i++)
//	{
//		*(pc + i) = 1;
//	}
//	return 0;
//}

int* test()
{
	int a = 10;
	return &a;
}
int main()
{
	int* p = test();
	*p = 20;
	return 0;
}