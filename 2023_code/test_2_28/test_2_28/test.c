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
//	//VC6.0������<=10����ѭ����
//	// gcc������<=11����ѭ����
//	// VS2013   <=12����ѭ��
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
	assert(dest != NULL);//����
	assert(src != NULL);//����
	//��srcָ����ַ���������destָ��Ŀռ䣬����'\0'�ַ�
	while (*dest++ = *src++)
	{
		 ;
	}
	return ret; 
}

int main()
{
	//strcpy
	//�ַ�������
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
//	//const����ָ�������*���ʱ�����ε���*p��Ҳ����˵������ͨ��p���ı�*p(num)��ֵ
//	//const����ָ�������*�ұ�ʱ�����ε���ָ�����p����p���ܱ��ı���
//	*p = 20;
//	//p = &n;
//	printf("%d\n", num);
//}