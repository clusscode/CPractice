#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	
	int i = 0;
	int arr[10] = { 1,2,3,4,5,6,7,9,10,11 };
	int left = 0, right = sizeof(arr)/sizeof(int);
	int n = 0, mid = (left + right) / 2;
	printf("������Ҫ���ҵ���:>");
	scanf("%d", &n);
	while(left <= right)
	{
		 if (arr[mid] > n)
		{
			 right = mid - 1;
			 mid = (left + right) / 2;
		}
		else if (arr[mid] < n)
		{
			left = mid + 1;
			mid = (left + right) / 2;
		}
		else if (arr[mid] == n)
		{
			printf("%d���ڵ�λ��Ϊ%d", n, mid);
			break;
		}
	}
	if (left > right)
	{
		printf("���޴�Ԫ��\n");
	}
	return 0;
}