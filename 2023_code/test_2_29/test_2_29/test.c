#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
//#include <assert.h>
//
//int my_strlen(const char* str)
//{
//	int count = 0;
//	assert(str != NULL);//��ָ֤�����Ч��
//	while (*str != '\0')
//	{
//		count++;
//		str++;
//	}
//	return count;
//}
//
//int main()
//{
//	char arr[] = "abcdef";
//	int len = my_strlen(arr);
//	printf("%d\n", len);
//	return 0;
//}

//int main()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	if (*p == 1)
//		printf("С�˴洢\n");
//	else
//		printf("��˴洢\n");
//	return 0;
//}

//int check_sys()
//{
//	int a = 1;
//	char* p = (char*)&a;
//	//����1��С��
//	//����0�����
//	return *p;
//}

int check_sys()
{
	int a = 1;
	return *(char*)&a;
}

int main()
{
	//дһ�δ���������ǵ�ǰ�������ֽ�����ʲô
	//����1��С��
	//����0�����
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��\n");
	}
	else
	{
		printf("���\n");
	}
}