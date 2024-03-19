#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int  killer = 0;
//	for (killer = 'a'; killer <= 'd'; killer++)
//	{
//		if ((killer != 'a') + (killer == 'c') + (killer == 'd') + (killer != 'd') == 3)
//		{
//			printf("killer=%c\n", killer);
//		}
//	}
//	return 0;
//}
//
//int main()
//{
//	int a = 0;
//	int b = 0;
//	int c = 0;
//	int d = 0;
//	int e = 0;
//	for (a = 1; a <= 5; a++)
//	{
//		for (b = 1; b <= 5; b++)
//		{
//			for (c = 1; c <= 5; c++)
//			{
//				for (d = 1; d <= 5; d++)
//				{
//					for (e = 1; e <= 5; e++)
//					{
//						if ((b == 2) + (a == 3) == 1 && 
//							(b == 2) + (e == 4) == 1 && 
//							(c == 1) + (d == 2) == 1 && 
//							(c == 5) + (d == 3) == 1 && 
//							(e == 4) + (a == 1) == 1 &&
//							a*b*c*d*e==120)
//							printf("a=%d b=%d c=%d d=%d e=%d\n", a, b, c, d, e);
//					}
//				}
//			}
//		}
//	}
//	return 0;
//}

int main()
{
	char arr[] = "abcdef";
	int input = 0;
	int i = 0;
	int len = strlen(arr);
	scanf("%d", input);
	for (i = 0; i < input; i++)
	{
		int tmp = 0;
		tmp = arr[i];
		arr[i] = arr[len - input + i];
		arr[len - input + i] = tmp;
	}
	printf("%s\n", arr);
	return 0;
}