#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include "add.h"

int main()
{
	int a = 10;
	int b = 20;
	int sum = 0;
	sum = Add(a, b);
	printf("%d\n", sum);
	return 0;
}

//#include <stdio.h>
//
//int binary_search(int arr[], int k,int sz)
//{
//	int left = 0;
//	int right = sz - 1;
//	while (left <= right)
//	{
//		int mid = (left + right) / 2;
//		if (arr[mid] > k)
//			right = mid - 1;
//		else if (arr[mid] < k)
//			left = mid + 1;
//		else
//		{
//			return mid;
//		}
//	}
//		return -1;
//}
//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int k = 7;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	int ret = binary_search(arr, k,sz);//ʵ�������ﲻ�ǰ��������鶼����ȥ���������˷ѿռ䣬�������������׸�Ԫ�صĵ�ַ��ȥ
//	if (ret == -1)
//	{
//		printf("�Ҳ���ָ��������\n");
//	}
//	else
//	{
//		printf("�ҵ��ˣ��±���:%d\n", ret);
//	}
//	return 0;
//}

//int is_leap_year(int n)
//{
//	if (n % 4 == 0 && n % 100 != 0|| n % 400 == 0)
//		return 1;
//}
//int main()
//{
//	int year = 0;
//	printf("���������:>");
//	scanf("%d", &year);
//	if (is_leap_year(year) == 1)
//		printf("������");
//	else
//		printf("��������");
//	return 0;
//}