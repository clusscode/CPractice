#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

////strcmp的实现——比较字符串
////strcmp比较是根据第一个不同字符来进行大小分析的
//int my_strcmp(char* str1, char* str2)
//{
//	//第一步：两个字符串一一比较，当不一样的时候退出循环
//	while (*str1 == *str2)
//	{
//		if (*str1 == '\0')
//			return 0;
//		str1++;
//		str2++;
//	}
//	return (*str1 - *str2);
//}
//
//int main()
//{
//	char arr1[] = "abcd";
//	char arr2[] = "abcd";
//	int ret = my_strcmp(arr1, arr2);
//	printf("ret = %d", ret);
//	return 0;
//}

////模拟实现strncpy——可以根据输入的个数来拷贝数据,值得注意的是，如果输入的数大于被拷贝数据，会把‘\0’
//void my_strncpy(char* str1, char* str2, int num)
//{
//	while (num)
//	{
//		//如果str2指向的数据是'\0'的话就跳出循环，然由第二个循环来添加未完的'\0'
//		if (*str2 == '\0')
//			break;
//		*str1 = *str2;
//		str1 ++;
//		str2++;
//		num--;
//	}
//	while (num)
//	{
//		*str1 = '\0';
//		num--;
//	}
//
//}
//int main()
//{
//	char arr1[1024] = "abcdre";
//	char arr2[] = "cde";
//	strncpy(arr1, arr2, 5);
//	printf("%s\n", arr1);
//	return 0;
//}

//模拟实现strncpy——可以根据输入的个数来拷贝数据,值得注意的是，如果输入的数大于被拷贝数据，会把‘\0’
void my_strncpy(char* str1, char* str2, int num)
{
	//二者条件都必须满足，当*str2即将赋值给*str1'\0'的时候条件不满足就跳出循环
	while ( *str1++ = *str2++ && num)
	{
		num--;
	}
	while (num)
	{
		*str1 = '\0';
		num--;
	}

}
int main()
{
	char arr1[1024] = "abcdre";
	char arr2[] = "cde";
	strncpy(arr1, arr2, 1);
	printf("%s\n", arr1);
	return 0;
}