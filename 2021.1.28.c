#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*****1��play         0��exit*****\n");
	printf("*********************************\n");
}
void game()
{
	//��������
	char my[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//��ʼ������
	IntiBoard(my, ROWS, COLS, '0');
	IntiBoard(show, ROWS, COLS, '*');
	//��ӡ����
	//InputBoard(my, ROW, COL);
	InputBoard(show, ROW, COL);
	//����
	GiveBoard(my, ROW, COL);
	InputBoard(my, ROW, COL);
	//ɨ��
	FindBoard(my, show, ROW, COL);

}
void test()
{
	int choise = 0;
	srand((unsigned int) time (NULL));
	
	do
	{
		menu();
		printf("���������ѡ��:>");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ��\n");
			break;
		default:
			printf("�Ƿ�ѡ�����������!\n");
			break;
		}
	} while (choise);
}
int main()
{
	test();
	return 0;
}