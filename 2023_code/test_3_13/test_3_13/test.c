#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

////1.�������ķ���
////2.�ݹ�
////3.ָ��-ָ��
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
//	//����ʾ��
//	//char arr[]={'a','b','c','d','e','f'};
//	//int len=my_strlen(arr);
//	// 
//	//printf("%d\n", len);
//
//	if (strlen("abc") - strlen("abcdef") > 0)
//	{
//		printf("hehe\n");
//	}//����������hehe��Ϊ�⺯������size_t=unsigned int(����������)���Բ����ܳ���С��0�������⺯����������Ϊ��Ϊstrlen������С��0
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
//	//����srcָ����ַ�����destָ��Ŀռ䣬����'\0'
//	while (*dest++ = *src++)
//	{
//		;
//	}
//	//����Ŀ�ĵص���ʼ��ַ
//	return ret;
//}
//
//int main()
//{
//	char arr1[] = "abcdefghi";
//	char arr2[] = "bit";
//	//char arr1="abcdef";�����ַ������ܱ��޸�
//	//char arr2[]={'b','i','t'};
//	//arr1�Ĵ�СҪ����arr2
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
//	//1.�ҵ�Ŀ���ַ�����'\0'
//	while (*dest != '\0')
//	{
//		dest++;
//	}
//	//2.׷��
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
//	//�ɴ˿ɼ�src�Ǵ�dest\0λ�ÿ�ʼ׷���ַ���
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
//}//�Լ�д�Ĵ�ӡ�������,������

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
	//��ӡ
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