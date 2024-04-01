#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>

// 用宏去写OFFSETOF，就是结构体成员的偏移量
//struct S
//{
//	char c1;
//	int a;
//	char c2;
//};
//
//#define OFFSETOF(struct_name,member_name) (int)&(((struct_name*)0)->member_name)
//
//int main()
//{
//	//struct S s;
//	printf("%d\n", OFFSETOF(struct S, c1));
//	printf("%d\n", OFFSETOF(struct S, a));
//	printf("%d\n", OFFSETOF(struct S, c2));
//
//	return 0;
//}

//int main()
//{
//	union
//	{
//		short k;
//		char i[2];
//	}*s,a;
//	s = &a;
//	s->i[0] = 0x39;
//	s->i[1] = 0x38;
//	printf("%x\n", a.k);
//	return 0;
//}

//int main()
//{
//	int* p = (int*)malloc(0);
//
//	return 0;
//}

//找单身狗
//void Find(int arr[], int sz)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < sz; i++)
//	{
//		for (j = 0; j < sz; j++)
//		{
//			if ((i!=j)&&((arr[i] ^ arr[j]) == 0))
//				arr[i] = 0;
//		}
//	}
//}
//
//int main()
//{
//	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	Find(arr,sz);
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//	
//	return 0;
//}//不对，不会写,但知道了运算符优先级的问题

//int main()
//{
//	int a = 1;
//	int b = 2;
//	printf("%d\n", a ^ b);
//	if((a^b)==1)
//		printf("%d\n", b);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	int b = 2;
//	if ()
//	{
//		printf("hehe");
//	}
//	return 0;
//}

//看完解说之后的解法，重点！异或11,22,33,5，所有数，最后得到5，两个单身狗异或必有1，以此分组疑惑消掉有两个的就可以返回单身狗

int* Find_singal_dog(int arr[], int sz, int* pd1, int* pd2)
{
	int i = 0;
	int ret = 0;
	for (i = 0; i < sz; i++)
	{
		ret ^= arr[i];
	}
	int pos = 0;
	for (pos = 0; pos < 32; pos++)
	{
		if ((ret >> pos) & 1 == 1)
			break;
	}
	for (i = 0; i < sz; i++)
	{
		if ((arr[i] >> pos) & 1 == 1)
			*pd1 ^= arr[i];
		else
			*pd2 ^= arr[i];
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,1,2,3,4,6 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	int dog1 = 0;
	int dog2 = 0;
	Find_singal_dog(arr, sz, &dog1, &dog2);
	printf("dog1=%d dog2=%d\n", dog1, dog2);
	return 0;
}