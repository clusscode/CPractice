#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>

////strcmp��ʵ�֡����Ƚ��ַ���
////strcmp�Ƚ��Ǹ��ݵ�һ����ͬ�ַ������д�С������
//int my_strcmp(char* str1, char* str2)
//{
//	//��һ���������ַ���һһ�Ƚϣ�����һ����ʱ���˳�ѭ��
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

////ģ��ʵ��strncpy�������Ը�������ĸ�������������,ֵ��ע����ǣ��������������ڱ��������ݣ���ѡ�\0��
//void my_strncpy(char* str1, char* str2, int num)
//{
//	while (num)
//	{
//		//���str2ָ���������'\0'�Ļ�������ѭ����Ȼ�ɵڶ���ѭ�������δ���'\0'
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

//ģ��ʵ��strncpy�������Ը�������ĸ�������������,ֵ��ע����ǣ��������������ڱ��������ݣ���ѡ�\0��
void my_strncpy(char* str1, char* str2, int num)
{
	//�����������������㣬��*str2������ֵ��*str1'\0'��ʱ�����������������ѭ��
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