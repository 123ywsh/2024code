#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int i = 0;
//	int arr[10] = { 1,2,3,4,5,6,7,8,9,10 };
//
//	printf("%p\n", arr);
//	printf("%p\n", &i);
//
//	//VC6.0环境下<=10就死循环了
//	// gcc编译器<=11就死循环了
//	// VS2013   <=12就死循环
//	//for (i = 0; i <= 12; i++)
//	//{
//	//	printf("hehe\n");
//	//	arr[i] = 0;
//	//}
//	//return 0;
//}

//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest = *src;
//		src++;
//		dest++;
//	}
//	*dest = *src;//'\0'
//}


//void my_strcpy(char* dest, char* src)
//{
//	while (*src != '\0')
//	{
//		*dest++ = *src++;
//	}
//	*dest = *src;//'\0'
//}

//void my_strcpy(char* dest, char* src)
//{
//	if (dest != NULL && src != NULL)
//	{
//		while (*dest++ = *src++)
//		{
//			;
//		}
//	}
//}

#include <assert.h>

char* my_strcpy(char* dest, const char* src)
{
	char* ret = dest;
	assert(dest != NULL);//断言
	assert(src != NULL);//断言
	//把src指向的字符串拷贝到dest指向的空间，包含'\0'字符
	while (*dest++ = *src++)
	{
		 ;
	}
	return ret; 
}

int main()
{
	//strcpy
	//字符串拷贝
	char arr1[] = "#################";
	char arr2[] = "bit";
	my_strcpy(arr1, arr2);
	printf("%s\n", my_strcpy(arr1, arr2));

	return 0;
}

//int main()
//{
//	const int num = 10;
//	int n = 100;
//	int* const p = &num;
//	//const放在指针变量的*左边时，修饰的是*p，也就是说：不能通过p来改变*p(num)的值
//	//const放在指针变量的*右边时，修饰的是指针变量p本身，p不能被改变了
//	*p = 20;
//	//p = &n;
//	printf("%d\n", num);
//}