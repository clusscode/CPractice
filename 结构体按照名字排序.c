#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	char name[20];
	int age;
	int id;
}Stu;
//接下来实现比较方法com_by_name
int com_by_name(void* e1, void* e2)
{
	//先将无符号指针强转为对应类型的指针再比较
	//如果二者相等返回0，第一个小于第二个返回负数，第一个大于第二个返回正数
	return strcmp(((struct Student*)e1)->name, ((struct Student*)e2)->name);
}
void test()
{
	Stu s[3] = { {"张三", 18, "105"},{"陈爽", 20, "1458"},{"陈键锋", 23, "165"} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_by_name);//qsort函数（待排序起始地址，待排序长度，操作字节长度，比较方法）
	int i = 0;
	for (i = 0; i < 3; i++)
	{
		printf("%s\t%d\t%s\n", s[i].name, s[i].age, s[i].id);
	}
}
int main()
{
	test();
	return 0;
}