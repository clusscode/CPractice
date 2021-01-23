#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_sort(int arr[], int k, int sz)//因为传递过来的是数组，所以是一个指针变量，指针变量的地址不变，所以计算数组长度的sz要在主函数中计算
{
	int left = 0;
	int right = sz;
	while (left <= right)
	{
		int mid = (left + right) / 2;
		if (arr[mid] > k)
		{
			right = mid - 1;
		}
		else if (arr[mid] < k)
		{
			left = mid + 1;
		}
		else if (arr[mid] == k)
		{
			return mid;
		}
	}
}
int main()
{
	int arr[] = { 0,1,2,3,4,5,6,7,8,9 };
	int k;
	int sz = sizeof(arr) / sizeof(arr[0]) - 1;
	printf("输入你要找的数:>");
	scanf("%d", &k);
	int sum = is_sort(arr, k, sz);//调用is_sort函数，传递arr数组和k还有数组长度sz
	printf("你所要找的数的下标为%d", sum);
	return 0;
}