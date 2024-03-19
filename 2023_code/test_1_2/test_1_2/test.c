#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	int a = 0;
	scanf("%d", &a);
	if (a % 2 == 1)
		printf("a是奇数");
	else
		printf("a不是奇数");
	/*int i = 1;
	while (i <= 100)
	{
		printf("%d ", i);
		i += 2;
	}*/
	/*while (i <= 100)
	{
		if (i % 2 != 0)
			printf("%d ", i);
		i++;
	}*/
	return 0;
}
//int main()
//{
//	int num = 4;
//	if (num = 5)
//	{
//		printf("呵呵\n");
//	}
	/*int a = 1;
	int b = 2;
	if (a == 0)
		if (b == 2)
			printf("hehe\n");
        else
			printf("haha\n");*/
//	return 0;
//}

//int main()
//{
//	int age = 17;
//	if (age < 18)
//	{
//		printf("未成年\n");
//		printf("不能谈恋爱\n");
//	}//这里的{}叫代码块，if、else语句执行多条语句的时候要放进代码块中
//	else
//	{
// if (age >= 18 && age < 28)
//	printf("成年\n");
//else if (age >= 28 && age < 50)
//	printf("壮年\n");
//else if (age >= 50 && age < 90)
//	printf("老年\n");
//else
//printf("老不死\n");
//	};
//	return 0;
//}