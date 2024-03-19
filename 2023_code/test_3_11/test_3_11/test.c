#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

//void Print(char* arr, int sz)
//{
//	assert(arr);
//	int left = 0;
//	int right = sz - 1;
//	while (left<right)
//	{
//		int tmp = arr[right];
//		arr[right] = arr[left];
//		arr[left] = tmp;
//		left++;
//		right--;
//	}
//	printf("%s ", arr);
//}
//
//int main()
//{
//	char arr[256] = {0};
//	//scanf("%s", arr);//%s遇到空格就不再读取了
//	gets(arr);
//	int sz=strlen(arr);
//	Print(arr,sz);
//	return 0;
//}


////自己写的求自幂数个数，做的不错
//int main()
//{
//	int i = 0;
//	int count = 0;
//	for (i = 0; i <= 100000; i++)
//	{
//		int sum = 0;
//		int n = 0;
//		int j = i;
//		while (j != 0)
//		{
//			j /= 10;
//			n++;
//		}
//		j = i;
//		while (j != 0)
//		{
//			sum += pow(j%10, n);
//			j = j / 10;
//		}
//		if (sum == i)
//		{
//			count++;
//			printf("%d ", sum);
//		}
//	}
//	printf("%d\n", count);
//	return 0;
//}//可优化，不用创建那么多的变量

int main()
{
	int line = 0;
	scanf("%d", &line);
	//打印上半部分
	int i = 0;
	for (i = 0; i < line; i++)
	{
		//打印空格，记住*后面的空格不用打印
		int j = 0;
		for (j = 0; j < line - 1 - i; j++)
		{
			printf(" ");
		}
		//打印*
		for (j = 0; j < 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	//打印下半部分
	for (i = 0; i < line - 1; i++)
	{
		int j = 0;
		for (j = 0; j <= i; j++)
		{
			printf(" ");
		}
		for (j = 0; j < 2 * (line - 1 - i) - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	return 0;
}