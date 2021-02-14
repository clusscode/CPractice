#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//第一种：计数器法
int my_strlen_count(char* arr)
{
	int count = 0;
	while (*arr)
	{
		count++;
		arr++;
	}
	return count;
}
//第二种：递归方法
int my_strlen_return(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen_return(arr + 1);
	else
		return 0;
}
//第三种：指针 - 指针，两指针相减可以知道二者之间的字符个数，因为指针相减然后除以类型的可以得出
int my_strlen(char* arr)
{
	char* p = arr;
	while (*p)
		p++;
	return p - arr;
}
//strlen函数的三种实现
//int main()
//{
//	char arr[] = "abcdfg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//strcpy的实现
void my_strcpy_one(char* arr1, const char* arr2)
{
	//strcpy实际上就是把arr2的字符包括'\0'，直接赋值给arr1中对应的地址
	while (*arr2)
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	//上面只是把arr2中'\0'之前的字符给赋值了过去，'\0'并没有赋值，这个时候再把'\0'给赋值进去
	*arr1 = *arr2;
}
//其实可以简化代码，把*arr1 = *arr2与循环进行结合
void my_strcpy(char* arr1, const char* arr2)
{
	//strcpy实际上就是把arr2的字符包括'\0'，直接赋值给arr1中对应的地址
	//后置++是先使用后赋值的，判断的条件则是*arr2所赋值过去（因为arr1在前面）
	//最后一个字符赋值过去之后两个再次++，到了'\0'的位置，因为先使用的原因，所以赋值过去之后在判断
	//随后跳出循环
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr1[30] = "abede";//arr1作为源字符串其长度一定要设置的比arr2大，否则会出现越界访问的情况
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}