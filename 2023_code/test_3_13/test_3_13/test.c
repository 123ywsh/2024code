#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

////1.计数器的方法
////2.递归
////3.指针-指针
//
//int my_strlen(const char* str)
//{
//	assert(str != NULL);
//	int count = 0;
//	while (*str)
//	{
//		str++;
//		count++;
//	}
//	return count;
//}
//
//int main()
//{
//	int len = my_strlen("abcdef");
//	//错误示范
//	//char arr[]={'a','b','c','d','e','f'};
//	//int len=my_strlen(arr);
//	// 
//	//printf("%d\n", len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}//最后输出的是hehe因为库函数类型size_t=unsigned int(被重命名了)所以不可能出现小于0的数，库函数这样是因为认为strlen不可能小于0
//	else
//	{
//		printf("haha\n");
//	}
//	return 0;
//}

//char* my_strcpy(char* dest, const char* src)
//{
//	assert(dest != NULL && src != NULL);
//	char* ret = dest;
//	//拷贝src指向的字符串到dest指向的空间，包含'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//返回目的地的起始地址
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr1="abcdef";常量字符串不能被修改
//	//char arr2[]={'b','i','t'};
//	//arr1的大小要大于arr2
//
//	my_strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//
//	return 0;
//}

//char* my_strcat(char* dest, const char* src)
//{
//	char* ret = dest;
//	assert(dest != NULL && src != NULL);
//
//	//1.找到目的字符串的'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.追加
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	return ret;
//}
//
//int main()
//{
//	char arr1[30] = "hello";
//	/*char arr1[30] = "hello\0xxxxxxxx";*/
//	//由此可见src是从dest\0位置开始追加字符串
//	char arr2[] = "world";
//	my_strcat(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	int arr[10][12] = { 0 };
//	int i = 0;
//	arr[1][1] = 1;
//	for (i = 2; i < 10; i++)
//	{
//		int j = 0;
//		for (j = 1; j < i; j++)
//		{
//			arr[i][j] = arr[i - 1][j-1] + arr[i - 1][j ];
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	
//	return 0;
//}//自己写的打印杨辉三角,有问题

int main()
{
	int arr[10][10] = { 0 };
	int i = 0;
	int j = 0;
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (j == 0)
			{
				arr[i][j] = 1;
			}
			if (i == j)
			{
				arr[i][j] = 1;
			}
			if (i >= 2 && j >= 1)
			{
				arr[i][j] = arr[i - 1][j] + arr[i - 1][j - 1];
			}
		}
	}
	//打印
	for (i = 0; i < 10; i++)
	{
		for (j = 0; j <=i; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}