#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
////暴力求解法
//void left_move(char* arr1, int n)
//{
//	int len = strlen(arr1);
//	int i = 0;
//	//左旋的本质就是把n个字符给移到末尾
//	for (i = 0; i < n; i++)
//	{
//		//第一步：把要左旋的字符拿出来存在临时变量中
//		char temp = *arr1;
//		//第二步：把数组往前移一位
//		int j = 0;
//		for (j = 0; j < len - 1; j++)
//		{
//			*(arr1 + j) = *(arr1 + j + 1);
//		}
//		//第三步，把取出来的数放到最后一个
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
	//左旋两个字符，那么就是把ab变成ba
	move(arr, arr + n - 1);
	//左旋剩下的字符，就是把cdef变成fedc,这样字符就变成了bafedc
	move(arr + n, arr + len - 1);
	//在逆序bafedc就变成了cdefab
	move(arr, arr + len - 1);
}
int main()
{
	//左旋字符串，把abcdef左旋两个字符，即变成cdefab
	char arr1[] = "abcdef";
	int n = 0;
	scanf("%d", &n);
	left_move(arr1, n);
	printf("%s\n", arr1);
	return 0;
}