#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
void print(int(*p)[5], int x, int y)//*p��ָ��������Ԫ�ص�ַarr������ά����ĵ�һ��һά����
{
	int i = 0;
	int j = 0;
	for (i = 0; i < x; i++)
	{
		for (j = 0; j < y; j++)
		{
			//*(p + i)��ָ�����ǵڼ���
			printf("%d ", *(*(p + i) + j));
		}
		printf("\n");
	}
}
int main()
{
	int arr[3][5] = { {1,2,3,4,5},{6,7,8,9,10},{5,8,9,8,1} };
	print(arr, 3, 5);
	return 0;
}

