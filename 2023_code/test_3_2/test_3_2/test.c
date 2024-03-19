#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	char arr[] = "abcdef";
//	char* pc = arr;
//	printf("%s\n", arr);
//	printf("%s\n", pc);
//
//	return 0;
//}

//int main()
//{
//	const char* p = "abcdef";//"abcdef"是一个常量字符串
//	//*p = 'W';
//	printf("%c\n", *p);
//	printf("%s\n", p);
//	return 0;
//}

//www.stackoverflow.com
//Segmentation fault - 段错误
//segmentfault.com

int main()
{
	int arr1[] = { 1,2,3,4,5 };
	int arr2[] = { 2,3,4,5,6 };
	int arr3[] = { 3,4,5,6,7 };

	int* parr[] = { arr1,arr2,arr3 };
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		int j = 0;
		for (j = 0; j < 5; j++)
		{
			printf("%d ", *(parr[i] + j));
		}
		printf("\n");
	}
	return 0;
}