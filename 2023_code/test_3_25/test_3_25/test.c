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
//	struct S arr[n];//50��struct S ���͵�����
//
//	//30 - �˷�
//	//60 - ����
//	//
//
//	return 0;
//}

//C�����ǿ��Դ����䳤���� - C99��������

#include <stdlib.h>
#include <string.h>
#include <errno.h>
//
//int main()
//{
//	//���ڴ�����10�����εĿռ�
//	int* p = (int*)malloc(40);
//	if (p == NULL)
//	{
//		//��ӡ����ԭ���һ����ʽ
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		//����ʹ�ÿռ�
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
//	//����̬�ڴ�Ŀռ䲻��ʹ�õ�ʱ��
//	//��Ӧ�û�������ϵͳ
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
//	//�ͷſռ�
//	//free�����������ͷŶ�̬���ٵĿռ��
//	free(p);
//	p = NULL;
//	return 0;
//}

//realloc
//������̬�����ڴ�ռ�Ĵ�С

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
//	//������ʹ��molloc���ٵ�20���ֽڿռ�
//	//�������20���ֽڲ����������ǵ�ʹ����
//	//ϣ�������ܹ���40���ֽڵĿռ�
//	//����Ϳ���ʹ��realloc��������̬���ٵ��ڴ�
//	//
//	//realloc����ʹ�õ�ע������
//	//1.���pָ��Ŀռ�֮�����㹻���ڴ�ռ����׷�ӣ���ֱ��׷�ӣ��󷵻�p
//	//2.���pָ��Ŀռ�֮��û���㹻���ڴ�ռ����׷�ӣ���realloc������������һ���µ��ڴ�����
//	//  ����һ����������Ŀռ䣬Ȼ���ԭ���ڴ��е����ݿ����������ͷžɵĿռ�
//	//  ��󷵻��¿��ٵ��ڴ�ռ��ַ
//	//3.����һ���µı���������realloc�����ķ���ֵ
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
//	//�ͷ��ڴ�
//	free(p);
//	p = NULL;
//
//
//	return 0;
//}

//int main()
//{
//	//1.�Կ�ָ����н����ò���
//	//int* p = (int*)malloc(40);
//	////��һmallocʧ���ˣ�p�ͱ���ֵΪNULL
//	//*p = 0;//err
//
//	//int i = 0;
//	//for (i = 0; i < 10; i++)
//	//{
//	//	*(p + i) = i;//err
//	//}
//	//free(p);
//	//p = NULL;
//	//2.�Զ�̬���ٵ��ڴ��Խ�����
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
//	//3.�ԷǶ�̬�����ڴ��free
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
	////ʹ��
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
//	//1.��NULLָ������ò���
//	//int* p = malloc(40);
//	////p������ص��ж�
//	//*p = 10;//malloc���ٿռ�ʧ��-��NULLָ�������
//
//	//2.�Զ�̬�����ڴ��Խ�����
//	//int* p = (int*)malloc(40);//10��int 0-9
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	//int i = 0;
//	////Խ��
//	//for (i = 0; i <= 10; i++)
//	//{
//	//	*(p + i) = i;
//	//}
//
//	//free(p);
//	//p = NULL;
//
//	//3.�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//int a = 10;
//	//int* p = &a;
//	////...
//	////�ԷǶ�̬�����ڴ�ʹ��free�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//4.ʹ��free�ͷŶ�̬�����ڴ��һ����
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
//	////���տռ�
//	////ʹ��free�ͷŶ�̬�����ڴ��һ����
//	//free(p);
//	//p = NULL;
//
//	//5.��ͬһ�鶯̬�ڴ�Ķ���ͷ�
//	//int* p = (int*)malloc(40);
//	//if (p == NULL)
//	//{
//	//	return 0;
//	//}
//	////ʹ��
//	////�ͷ�
//	//free(p);
//	//p = NULL;
//
//	//free(p);
//
//	//6.��̬�����ڴ������ͷţ��ڴ�й©��
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

//����1
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

//����2
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

//����ջ�ռ��ַ������
//char* GetMemory(void)//�ⴴ�����Ǿֲ���������ջ�ϴ�������ȥ�������ˣ�����str��Ȼ��ס��p�ĵ�ַ��������Ķ����Ѿ��������ˣ�����������ռ䱻����ʹ�ã�Ҳ������˷Ƿ������ڴ�
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
//	static int a = 10;//��static����֮��ͷŵ���̬����
//	int a = 10;//ջ��
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
//	int* ptr = malloc(100);//����
//	return ptr;
//}
//
//int main()
//{
//	int* p = test();
//
//	return 0;
//}