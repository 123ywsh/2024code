#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

////暴力求解法
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//左旋转一个字
//		//1
//		char tmp = *arr;
//		//2
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr + j) = *(arr + j + 1);
//		}
//		//3
//		arr[len - 1] = tmp;
//	}
//}

//2.三部翻转法
//abcdef
//bafedc
//cdefab

//逆序字符串的函数

//void reverse(char* left, char* right)
//{
//	assert(left != NULL);
//	assert(right != NULL);
//	while (left < right)
//	{
//		char tmp = *left;
//		*left = *right;
//		*right = tmp;
//		left++;
//		right--;
//	}
//}
//
//void left_move(char* arr, int k)
//{
//	assert(arr);
//	int len = strlen(arr);
//	assert(k <= len);
//	reverse(arr,arr+k-1);//逆序左边
//	reverse(arr+k,arr+len-1);//逆序右边
//	reverse(arr,arr+len-1);//逆序整体
//}

//abcdef
//bcdefa
//cdefab
//defabc
//efabcd
//fabcde

//int is_left_move(char* s1, char* s2)
//{
//	int len = strlen(s1);
//	int i = 0;
//	for (i = 0; i < len; i++)
//	{
//		left_move(s1, 1);
//		int ret = strcmp(s1, s2);
//		if (ret == 0)
//			return 1;
//	}
//	//
//	return 0;
//}

//abcdefabcdef
////判断一个旋转后的字符串是否能通过旋转变成另一个字符串
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.在str1字符串中追加一个str1字符串
//	//strcat(自己追加自己导致\0被覆盖找不到\0)
//	//strncat(在参数中传入字符串个数，这样就不用\0)
//	strncat(str1, str1, 6);
//	//2.判断str2指向的字符串是否是str1指向的字符串的子串
//	//strstr-找子串的
//	char*ret=strstr(str1, str2);
//	if (ret == NULL)
//	{
//		return 0;
//	}
//	else
//	{
//		return 1;
//	}
//}
//
//int main()
//{
//	char arr1[30] = "abcdef";
//	char arr2[] = "cdefab";
//	int ret = is_left_move(arr1, arr2);
//	if (ret == 1)
//		printf("Yes\n");
//	else
//		printf("No\n");
//	return 0;
//}

//int main()
//{
//	char arr[] = "abcdef";
//	left_move(arr, 2);
//
//	printf("%s\n", arr);
//
//	return 0;
//}

//剑指offer
//杨氏矩阵
//有一个数字矩阵，矩阵的每行从左到右是递增的，矩阵从上到下是递增的，请编写程序在这样的矩阵中查找某个数字是否是矩阵中的数字，以及它的下标如果是的话

//int FindNum(int arr[3][3], int k, int*px, int*py)
//{
//	int x = 0;
//	int y = *py - 1;
//	while (x <=*px - 1 && y >= 0)
//	{
//		if (arr[x][y] > k)
//		{
//			y--;
//		}
//		else if (arr[x][y] < k)
//		{
//			x++;
//		}
//		else
//		{
//			*px = x;
//			*py = y;
//			return 1;
//		}
//	}
//	//找不到
//	return 0;
//}
//
//int main()
//{
//	int arr[3][3] = { {1,2,3},{4,5,6},{7,8,9} };
//	int k =7;
//	int x = 3;
//	int y = 3;
//
//	//返回型函数
//	int ret = FindNum(arr, k,&x,&y);
//	if (ret == 1)
//	{
//		printf("找到了\n");
//		printf("下标是:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("找不到\n");
//	}
//	return 0;
//}


//字符串函数使用和剖析

//int main()
//{
//	//VS2013(确定)
//	//> 1
//	//==0
//	//< -1
//
//	//linux-gcc(只是大于0，小于0)
//	//> >0
//	//== 0
//	//< <0
//	char* p1 = "qbc";//6
//	char* p2 = "abc";//5
//
//	//int ret=strcmp(p1,p2);
//	if (strcmp(p1, p2) == 1)
//	{
//		printf("p1>p2\n");
//	}
//	else if (strcmp(p1, p2) == 0)
//	{
//		printf("p1=p2\n");
//	}
//	else if(strcmp(p1,p2)==-1)
//	{
//		printf("p1<p2\n");
//	}
//	return 0;
//	//printf("%d\n",ret);
//}

//int my_strcmp(const char*str1,const char*str2)
//{
//	assert(str1 && str2);
//	//比较
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//相等
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//大于
//	else
//		return -1;
//	//return (*str1-*str2);//别的操作系统
//}
//
//int main()
//{
//	char* p1 = "abc";
//	char* p2 = "abcd";
//	int ret = my_strcmp(p1, p2);
//	printf("ret=%d\n", ret);
//
//	return 0;
//}


////不带n的版本，字符串长度不受限制，就可能出现错误 
//int main()
//{
//	char arr1[5] = "abc";
//	char arr2[] = "hello bit";
//	strcpy(arr1, arr2);
//	printf("%s\n", arr1);
//	return 0;
//}

//int main()
//{
//	char arr1[10] = "abcdefgh";
//	char arr2[] = "bit";
//
//	//strncpy--模拟实现
//	strncpy(arr1, arr2, 6);//输入几就拷贝几个，不会额外拷贝\0
//
//	return 0;
//}

char* my_strncpy(char* str1, char* str2, int sz)
{
	assert(str1 && str2 != NULL);
	char* next = str1;
	while (sz--)
	{
		if (*str2 != '\0')
			*str1++ = *str2++;
		else
			*str1++ = '\0';
	}
	return next;
}

int main()
{
	char arr1[20] = "abcdefxxxxxxxxxxx";
	char arr2[] = "hello bit";
	my_strncpy(arr1, arr2, 15);
	printf("%s\n", arr1);
	return 0;
}

//int main()
//{
//	char arr1[30] = "hello\0xxxxxxxxxxxxxxxx";
//	char arr2[] = "world";
//	strncat(arr1, arr2, 8);//输入多的话也只追加到\0
//	printf("%s\n", arr1);
//	return 0;
//}