#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int line = 0;
	printf("加入比特\n");

	while (line < 20000)
	{
		printf("敲一行代码\n:%d\n",line);
		line++;
	}
	if(line>=20000)
	printf("好offer\n");
    return 0;
}
//int main()
//{
//	int input = 0;
//	printf("加入比特\n");
//	printf("你要好好学吗？（1/0)>:");//>:是个提示符，一会要在他后面输入数字
//	scanf("%d", & input);
//	if (input == 1)
//		printf("好offer\n");
//	else
//		printf("卖红薯\n");
//	return 0;
//}
//int main()
//{
//	printf(" % c\n", '\106');
//	//printf("%c\n", '\x61');
//	//printf("%d\n", strlen("c:\test\32\test.c"));
//	return 0;
//}