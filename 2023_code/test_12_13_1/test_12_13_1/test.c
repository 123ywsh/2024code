#define  _CRT_SECURE_NO_WARNINGS

#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char arr1[] = "abc";
	char arr2[] = { 'a','b','c' };
	printf("%d\n", strlen(arr1));//strlen - string length- �����ַ������ȵ�
	printf("%d\n", strlen(arr2));
	return 0;
}





//int main()
//{
//	char arr1[] = "abc";//����
//	//"abc"--'a','b','c' '\0' --'/0'�ַ����Ľ�����־
//	//'a' -97
//	char arr2[] = { 'a','b','c',0 };
//	printf("%s\n", arr1);
//	printf("%s\n", arr2);
//	return 0;
//}//