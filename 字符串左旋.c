#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////������ⷨ
//void left_move(char* arr1, int n)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	//�����ı��ʾ��ǰ�n���ַ����Ƶ�ĩβ
//	for (i = 0; i < n; i++)
//	{
//		//��һ������Ҫ�������ַ��ó���������ʱ������
//		char temp = *arr1;
//		//�ڶ�������������ǰ��һλ
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr1 + j) = *(arr1 + j + 1);
//		}
//		//����������ȡ���������ŵ����һ��
//		*(arr1 + len - 1) = temp;
//	}
//	
//}
void move(char* s1, char* s2)
{
	while (s1 < s2)
	{
		char temp = *s1;
		*s1 = *s2;
		*s2= temp;
		s1++;
		s2--;

	}
}
void left_move(char* arr, int n)
{
	int len = strlen(arr);
	//���������ַ�����ô���ǰ�ab���ba
	move(arr, arr + n - 1);
	//����ʣ�µ��ַ������ǰ�cdef���fedc,�����ַ��ͱ����bafedc
	move(arr + n, arr + len - 1);
	//������bafedc�ͱ����cdefab
	move(arr, arr + len - 1);
}
int main()
{
	//�����ַ�������abcdef���������ַ��������cdefab
	char arr1[] = "abcdef";
	int n = 0;
	scanf("%d", &n);
	left_move(arr1, n);
	printf("%s\n", arr1);
	return 0;
}