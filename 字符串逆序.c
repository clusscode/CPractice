#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
void char_hard_end(char arr[])
{
	int right = 0;
	int left = 0;
	while (*arr != '\0')
	{
		right++;
		arr++;
	}
	arr = arr - right;
	right--;
	while (left <= right)
	{
		char temp = arr[right];
		arr[right] = arr[left];
		arr[left] = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdefg";
	char_hard_end(arr);
	printf("%s\n", arr);
	return 0;
}

void char_hard_end(char* arr)
{
	int len = strlen(arr);
	char* left = arr;
	char* right = arr + len - 1;
	while (left < right)
	{
		char temp = *left;
		*left = *right;
		*right = temp;
		left++;
		right--;
	}
}
int main()
{
	char arr[] = "abcdefg";
	char_hard_end(arr);
	printf("%s\n", arr);
	return 0;
}