#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int line = 0;
	printf("�������\n");

	while (line < 20000)
	{
		printf("��һ�д���\n:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("��offer\n");
    return 0;
}
//int main()
//{
//	int input = 0;
//	printf("�������\n");
//	printf("��Ҫ�ú�ѧ�𣿣�1/0)>:");//>:�Ǹ���ʾ����һ��Ҫ����������������
//	scanf("%d", & input);
//	if (input == 1)
//		printf("��offer\n");
//	else
//		printf("������\n");
//	return 0;
//}
//int main()
//{
//	printf(" % c\n", '\106');
//	//printf("%c\n", '\x61');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}