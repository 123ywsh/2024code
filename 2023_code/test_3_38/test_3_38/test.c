#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		return 0;
//	}
//	//1.定位文件指针
//	//fseek(pf,-2,SEEK_END);
//	int ch=fgetc(pf);
//	printf("%c\n", ch);
//	//int pos = ftell(pf);//
//	//printf("%d\n", pos);
//	rewind(pf);
//	ch = fgetc(pf);
//	printf("%c\n", ch);
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}
//
//int main()
//{
//	//EOF
//	//feof();//EOF - end of file - 文件结束标志
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//		return 0;
//	int ch = fgetc(pf);
//	printf("%d\n", ch);//-1
//
//	fclose(pf);
//	pf = NULL;
//
//	return 0;
//}

//int main()
//{
//	//strerror - 把错误码所对应的错误信息的字符串的地址返回
//	//printf("%s\n",strerror(errno));
//
//	//perror
//	FILE* pf = fopen("test2.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test2.txt");
//		return 0;
//	}
//	//读文件
//
//	fclose(pf);
//	pf = NULL;
//
//}

//int main()
//{
//	FILE* pf = fopen("test.txt", "r");
//	if (pf == NULL)
//	{
//		perror("open file test.txt");
//		return 0;
//	}
//	//读文件
//	int ch = 0;
//	while ((ch = fgetc(pf)) != EOF)
//	{
//		putchar(ch);
//	}
//	if (ferror(pf))
//	{
//		printf("error\n");
//	}
//	else if (feof(pf))
//	{
//		printf("end of file\n");
//	}
//	fclose(pf);
//	pf = NULL;
//
//}

int main()
{
	//printf("%s\n", __FILE__);
	//printf("%d\n", __LINE__);
	//printf("%s\n", __DATE__);
	//printf("%s\n", __TIME__);

	//写日志文件
	int i = 0;
	int arr[10] = { 0 };
	FILE* pf = fopen("long.txt", "w");
	for (i = 0; i < 10; i++)
	{
		arr[i] = i;
		fprintf(pf, "file:%s line:%d data:%s time:%s i=%d\n",
			__FILE__, __LINE__, __DATE__, __TIME__, i);
		printf("%s\n", __FUNCTION__);
	}
	fclose(pf);
	pf = NULL;
	for (i = 0; i < 10; i++)
	{
		printf("%d ", arr[i]);
	}
	return 0;
}
