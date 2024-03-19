#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//void print_table(int n)
//{
//	int i = 0;
//	for (i = 1; i <= n; i++)
//	{
//		int j = 0;
//		for (j = 1; j <= i; j++)
//		{
//			printf("%d*%d=%-3d", i, j, i * j);
//		}
//		printf("\n");
//	}
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	print_table(n);
//	return 0;
//}

//void test(int n)
//{
//	if (n > 9)
//	{
//		test(n / 10);
//	}
//	printf("%d ", n % 10);
//}
//
////void test(int n)
////{
////	while (n)
////	{
////		printf("%d ", n % 10);
////		n = n / 10;
////	}
////}
//int main()
//{
//	int a = 0;
//	scanf("%d", &a);
//	test(a);
//	return 0;
//}

//void test(char* str)
//{
//	if (*str!='\0')
//	{
//		test(str + 1);
//	}
//	printf("%s ", *str);
//}
//int main()
//{
//	char arr[] = "abcdef";
//	test(arr);
//	return 0;
//}//ÎÊÌâ´úÂë

////ÓÃµÝ¹éÄæÐò×Ö·û´®
//int my_strlen(char* str)
//{
//	int count = 0;
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//void reverse_string(char arr[])
//{
//	char tmp = arr[0];
//	int len = my_strlen(arr);
//	arr[0] = arr[len - 1];
//	arr[len - 1] = '\0';
//	if (my_strlen(arr + 1) >= 2)
//		reverse_string(arr + 1);
//	arr[len - 1] = tmp;
//}
//int main()
//{
//	char arr[] = "abcdefg";//fescba
//	reverse_string(arr);
//	printf("%s\n", arr);
//}