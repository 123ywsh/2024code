#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <assert.h>
#include <string.h>

////������ⷨ
//void left_move(char* arr, int k)
//{
//	assert(arr != NULL);
//	int i = 0;
//	int len = strlen(arr);
//	for (i = 0; i < k; i++)
//	{
//		//����תһ����
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

//2.������ת��
//abcdef
//bafedc
//cdefab

//�����ַ����ĺ���

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
//	reverse(arr,arr+k-1);//�������
//	reverse(arr+k,arr+len-1);//�����ұ�
//	reverse(arr,arr+len-1);//��������
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
////�ж�һ����ת����ַ����Ƿ���ͨ����ת�����һ���ַ���
//int is_left_move(char* str1, char* str2)
//{
//	int len1 = strlen(str1);
//	int len2 = strlen(str2);
//	if (len1 != len2)
//		return 0;
//	//1.��str1�ַ�����׷��һ��str1�ַ���
//	//strcat(�Լ�׷���Լ�����\0�������Ҳ���\0)
//	//strncat(�ڲ����д����ַ��������������Ͳ���\0)
//	strncat(str1, str1, 6);
//	//2.�ж�str2ָ����ַ����Ƿ���str1ָ����ַ������Ӵ�
//	//strstr-���Ӵ���
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

//��ָoffer
//���Ͼ���
//��һ�����־��󣬾����ÿ�д������ǵ����ģ�������ϵ����ǵ����ģ����д�����������ľ����в���ĳ�������Ƿ��Ǿ����е����֣��Լ������±�����ǵĻ�

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
//	//�Ҳ���
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
//	//�����ͺ���
//	int ret = FindNum(arr, k,&x,&y);
//	if (ret == 1)
//	{
//		printf("�ҵ���\n");
//		printf("�±���:%d %d\n", x, y);
//	}
//	else
//	{
//		printf("�Ҳ���\n");
//	}
//	return 0;
//}


//�ַ�������ʹ�ú�����

//int main()
//{
//	//VS2013(ȷ��)
//	//> 1
//	//==0
//	//< -1
//
//	//linux-gcc(ֻ�Ǵ���0��С��0)
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
//	//�Ƚ�
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//		{
//			return 0;//���
//		}
//		str1++;
//		str2++;
//	}
//	if (*str1 > *str2)
//		return 1;//����
//	else
//		return -1;
//	//return (*str1-*str2);//��Ĳ���ϵͳ
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


////����n�İ汾���ַ������Ȳ������ƣ��Ϳ��ܳ��ִ��� 
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
//	//strncpy--ģ��ʵ��
//	strncpy(arr1, arr2, 6);//���뼸�Ϳ���������������⿽��\0
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
//	strncat(arr1, arr2, 8);//�����Ļ�Ҳֻ׷�ӵ�\0
//	printf("%s\n", arr1);
//	return 0;
//}