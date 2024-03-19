#define  _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

int main()
{
	char arr[] = "abcdef";
	int input = 0;
	int i = 0;
	int len=strlen(arr);
	scanf("%d", &input);
	for (i = 0; i < input; i++)
	{
		int tmp = 0;
		tmp = arr[0];
		int j = 0;
		for(j=1;j<=input;j++)
		{
			arr[j - 1] = arr[j];
		}
		arr[len - 1] = tmp;
	}
	printf("%s\n", arr);
	return 0;
}