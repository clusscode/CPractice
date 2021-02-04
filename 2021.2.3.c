#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check()
{
	int a;
	scanf("%d", &a);
	char* p = (char*)&a;
	return *p;
}
int main()
{
	int ret = check();
	if (ret != 0)
		printf("Ð¡¶Ë");
	else
		printf("´ó¶Ë");
}
