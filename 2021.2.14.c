#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>

//��һ�֣���������
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
//�ڶ��֣��ݹ鷽��
int my_strlen_return(char* arr)
{
	if (*arr != '\0')
		return 1 + my_strlen_return(arr + 1);
	else
		return 0;
}
//�����֣�ָ�� - ָ�룬��ָ���������֪������֮����ַ���������Ϊָ�����Ȼ��������͵Ŀ��Եó�
int my_strlen(char* arr)
{
	char* p = arr;
	while (*p)
		p++;
	return p - arr;
}
//strlen����������ʵ��
//int main()
//{
//	char arr[] = "abcdfg";
//	int ret = my_strlen(arr);
//	printf("%d\n", ret);
//	return 0;
//}

//strcpy��ʵ��
void my_strcpy_one(char* arr1, const char* arr2)
{
	//strcpyʵ���Ͼ��ǰ�arr2���ַ�����'\0'��ֱ�Ӹ�ֵ��arr1�ж�Ӧ�ĵ�ַ
	while (*arr2)
	{
		*arr1 = *arr2;
		arr1++;
		arr2++;
	}
	//����ֻ�ǰ�arr2��'\0'֮ǰ���ַ�����ֵ�˹�ȥ��'\0'��û�и�ֵ�����ʱ���ٰ�'\0'����ֵ��ȥ
	*arr1 = *arr2;
}
//��ʵ���Լ򻯴��룬��*arr1 = *arr2��ѭ�����н��
void my_strcpy(char* arr1, const char* arr2)
{
	//strcpyʵ���Ͼ��ǰ�arr2���ַ�����'\0'��ֱ�Ӹ�ֵ��arr1�ж�Ӧ�ĵ�ַ
	//����++����ʹ�ú�ֵ�ģ��жϵ���������*arr2����ֵ��ȥ����Ϊarr1��ǰ�棩
	//���һ���ַ���ֵ��ȥ֮�������ٴ�++������'\0'��λ�ã���Ϊ��ʹ�õ�ԭ�����Ը�ֵ��ȥ֮�����ж�
	//�������ѭ��
	while (*arr1++ = *arr2++)
	{
		;
	}
}
int main()
{
	char arr1[30] = "abede";//arr1��ΪԴ�ַ����䳤��һ��Ҫ���õı�arr2�󣬷�������Խ����ʵ����
	char arr2[] = "bit";

	my_strcpy(arr1, arr2);
	printf("%s\n", arr1);
	return 0;
}