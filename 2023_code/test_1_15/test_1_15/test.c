#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <math.h>

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 7;
	int sz = sizeof(arr) / sizeof(arr[0]);
	int left = 0;
	int right = sz - 1;

	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else
		{
			printf("�ҵ��ˣ��±���:%d\n", mid);
			break;
		}
	}
	if (left > right)
	{
		printf("�Ҳ���\n");
	}

	return 0;
}

//int main()
//{
//	int i = 0;
//	int a = 0;
//	for (i = 1; i <= 9; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			a = i * j;
//			printf("%d*%d=%-2d ",i,j,a);//dǰ�油��2�����ǲ�����λ�ÿո��룬�����Ҷ��룬-2�������
//		}
//		printf("\n");
//	}
//	return 0;
//}//(����Ļ�����9*9�˷��ھ���)

//int main()
//{
//	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int max = arr[0];/*int max = 0;*///(��һ�Ǹ����أ����Բ��ܳ�ʼ��0)
//	int i = 0;
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	for (i = 1; i < sz; i++)
//	{
//		if (arr[i]>max)
//			max = arr[i];
//	}
//	printf("max=%d\n", max);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	int flag = 1;
//	for (i = 1; i <= 100; i++)
//	{
//		sum += flag * 1.0 / i;
//		flag = -flag;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	double sum = 0.0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 2 == 1)
//			sum = sum + 1.0 / i;
//		if (i % 2 == 0)
//			sum = sum - 1.0 / i;
//	}
//	printf("sum=%lf\n", sum);
//	return 0;
//}(�Լ�д�ģ���Ȼ�õ�����ʦ�ᵽ��˫���ȸ�����)

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9)
//			count++;
//		if (i / 10 == 9)
//			count++;
//	}
//	printf("count=%d\n", count);
//	return 0;
//}

//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 1; i <= 100; i++)
//	{
//		if (i % 10 == 9 || i / 10 == 9)
//			count++;
//		if (i % 10 == 9 && i / 10 == 9)
//			count++;
//	}
//	printf("%d\n", count);
//	return 0;
//}

//int main()
//
//{
//	int i = 0;
//	int j = 0;
//	int count = 0;
//	//sqrt-��ƽ������ѧ�⺯��
//	for (i = 101; i <= 200; i+=2)
//	{
//		for (j = 2; j <= sqrt(i); j++)
//		{
//			if (i % j == 0)
//			{
//				break;
//			}
//		}
//			if (j>sqrt(i))
//			{
//				count++;
//				printf("%d ", i);
//			}
//	}
//	printf("\ncount=%d\n ", count);
//}
