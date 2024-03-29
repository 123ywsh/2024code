#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <string.h>
#include <assert.h>

//int main()
//{
//	//192.168.31.121
//	//192 168 31 121 - strtok
//	//zpw@bitedu.tech
//	//zpw bitedu tech
//
//	//char arr[] = "zpw@bitedu.tech";//把原来特殊符号的位置放'\0'，然后返回指向这个位置的地址，下次调用用NULL从'\0'位置往后找
//	//char* p = "@.";
//
//	//点分十进制的表示方式
//	char arr[] = "192.168.31.121";
//	char* p = ".";
//
//	//zpw@bitedu.tech
//	char buf[1024] = { 0 };
//	strcpy(buf, arr);
//	//切割buf中的字符串
//
//	char* ret = NULL;
//
//	for (ret = strtok(buf, p); ret != NULL; ret = strtok(NULL, p))
//	{
//		printf("%s\n", ret);
//	}
//
//	//char*ret=strtok(buf, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//	//ret = strtok(NULL, p);
//	//printf("%s\n", ret);
//
//	return 0;
//}

#include <errno.h>

//int main()
//{
//	//错误码 错误信息
//	//0 -   No error
//	//1 -   Operation not permitted
//	//2 -   No such file or directory
//	//...
//	//errno是一个全局的错误码变量
//	//当C语言的库函数在执行过程中，发生了错误，就会把对应的错误码，赋值到errno中
//	//char* str = strerror(errno);
//	//printf("%s\n", str);
//
//	//打开文件
//	FILE* pf = fopen("test.txt", "r");
//
//	if (pf == NULL)
//	{
//		printf("%s\n", strerror(errno));
//	}
//	else
//	{
//		printf("open file susses\n");
//	}
//	return 0;
//}

#include <ctype.h>

//int main()
//{
//	//char ch = '2';
//	////int ret = islower(ch);
//	//int ret = isdigit(ch);
//	//printf("%d\n", ret);
//
//	//char ch = tolower('Q');
//	//char ch = toupper('q');
//	//putchar(ch);
//	char arr[] = "I AM A Student";
//	int i = 0;
//	while (arr[i])
//	{
//		if (isupper(arr[i]))
//		{
//			arr[i]=tolower(arr[i]);
//		}
//		i++;
//	}
//	printf("%s\n", arr);
//	return 0;
//}

struct S
{
	char name[20];
	int age;
};

void* my_memcpy(void* dest, const void* src, size_t num)
{
	void* ret = dest;
	assert(dest != NULL);
	assert(src != NULL);

	while (num--)
	{
		*(char*)dest = *(char*)src;
		++(char*)dest;
		++(char*)src;
	}
	return ret;
}
//
//C语言标准：
//memcpy 只要处理 不重叠的内存拷贝就可以
//memmove 处理重叠的内存的拷贝
//

void* my_memmove(void* dest, void* src, size_t num)
{
	void* ret = dest;
	assert(dest && src != NULL);
	if (dest < src)
	{
		while (num--)
		{
			*(char*)dest = *(char*)src;
			++(char*)dest;
			++(char*)src;
		}
		return ret;
	}
	else
	{
		while (num--)
		{
			*((char*)dest + num) = *((char*)src + num);
		}
		return ret;
	}
}

int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int i = 0;
	//memcpy(arr + 2, arr, 20);
	//my_memcpy(arr+2,arr,20);
	my_memmove(arr, arr + 2, 20);//处理内存重叠的情况的

	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}

//int main()
//{
//	int arr1[] = { 1,2,3,4,5 };
//	int arr2[5] = { 0 };
//	struct S arr3[] = { {"张三",20},{"李四",30} };
//	struct S arr4[3] = { 0 };
//	my_memcpy(arr2, arr1, sizeof(arr1));
//
//	//my_memcpy(arr4, arr3, sizeof(arr3));
//
//	//memcpy(arr2, arr1, sizeof(arr1));
//
//	//char*dest,const char*src
//	//strcpy(arr2,arr1);
//
//	return 0;
//}