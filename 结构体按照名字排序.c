#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<stdlib.h>
typedef struct Student
{
	char name[20];
	int age;
	int id;
}Stu;
//������ʵ�ֱȽϷ���com_by_name
int com_by_name(void* e1, void* e2)
{
	//�Ƚ��޷���ָ��ǿתΪ��Ӧ���͵�ָ���ٱȽ�
	//���������ȷ���0����һ��С�ڵڶ������ظ�������һ�����ڵڶ�����������
	return strcmp(((struct Student*)e1)->name, ((struct Student*)e2)->name);
}
void test()
{
	Stu s[3] = { {"����", 18, "105"},{"��ˬ", 20, "1458"},{"�¼���", 23, "165"} };
	int sz = sizeof(s) / sizeof(s[0]);
	qsort(s, sz, sizeof(s[0]), com_by_name);//qsort��������������ʼ��ַ�������򳤶ȣ������ֽڳ��ȣ��ȽϷ�����
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