#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void Init(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		arr[i] = 0;
//	}
//}
//void Print(int arr[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr[i]);
//	}
//}
//void Reverse(int arr[], int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left < right)
//	{
//		int tmp = arr[left];
//		arr[left] = arr[right];
//		arr[right] = tmp;
//		left++;
//		right--;
//	}
//}
//int main()
//{
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	//Init(arr,sz);//�������ʼ��Ϊ0
//	Print(arr,sz);//��ӡ
//	Reverse(arr, sz);
//	Print(arr, sz);//��ӡ
//	return 0;
//}

//void Exchange(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		int tmp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = tmp;
//	}
//}
//void Print(int arr1[], int arr2[], int sz)
//{
//	int i = 0;
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr1[i]);
//	}
//	printf("\n");
//	for (i = 0; i < sz; i++)
//	{
//		printf("%d ", arr2[i]);
//	}
//}
//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 11,12,13,14,15,16,17,18,19,20 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	Exchange(arr1, arr2, sz);
//	Print(arr1, arr2, sz);
//	return 0;
//}

//��һ������������1�ĸ���
//����3
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", & a);
//	int count = count_bit_one(a);
//	printf("count=%d", count);
//	return 0;
//}
//n=n&(n-1)
//n
//13
//1101 n
//1100 n-1
//1100 n
//1011 n-1
//1000 n
//0111 n-1
//0000 n

////����2
//int test(int a)
//{
//    int i = 0;
//    int count = 0;
//    for (i = 0; i < 32; i++)
//    {
//        if ((a>>i) & 1 == 1)
//            count++;
//    }
//    return count;
//}
//int main()
//{
//    int a = 0;
//    scanf("%d", &a);
//    int count=test(a);
//    printf("count=%d\n", count);
//    return 0;
//}
// ����1
//int count_bit_one(unsigned int n)
//{
//	int count = 0;
//	while (n)
//	{
//		if (n % 2 == 1)
//		{
//			count++;
//		}
//		n = n / 2;
//	}
//	return count;
//}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	//дһ��������a�Ķ����ƣ����룩��ʾ���м���1
//	int count = count_bit_one(a);
//	//13
//	//0000000000000000000000000000001101
//	//
//	printf("count=%d\n", count);
//	return 0;
//}
// ��������������λ��ͬ�ĸ���
//int count_bit_one(int n)
//{
//	int count = 0;
//	while (n)
//	{
//		n = n & (n - 1);
//		count++;
//	}
//	return count;
//}
//int main()
//{
//	int m = 0;
//	int n = 0;
//	scanf("%d%d", &m,&n);
//	int a = m ^ n;
//	int count = count_bit_one(a);
//	printf("count=%d\n", count);
//	return 0;
//}

//��һ��������������λż��λ�ֱ��ӡ����
//void print(int m)
//{
//	int i = 0;
//	printf("����λ:\n");
//	for (i = 30; i >= 0; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//	printf("ż��λ:\n");
//	for (i = 31; i >= 1; i -= 2)
//	{
//		printf("%d ", (m >> i) & 1);
//	}
//	printf("\n");
//}
//int main()
//{
//	int m = 0;
//	scanf("%d", &m);
//	print(m);
//	return 0;
//}

//��ʹ���±꣬��ָ���ӡ����Ԫ��
int main()
{
	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
	int* p = arr;
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		printf("%d ", *(p + i));
	}
	return 0;
}