#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int is_sort(int arr[], int k, int sz)//��Ϊ���ݹ����������飬������һ��ָ�������ָ������ĵ�ַ���䣬���Լ������鳤�ȵ�szҪ���������м���
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
	printf("������Ҫ�ҵ���:>");
	scanf("%d", &k);
	int sum = is_sort(arr, k, sz);//����is_sort����������arr�����k�������鳤��sz
	printf("����Ҫ�ҵ������±�Ϊ%d", sum);
	return 0;
}