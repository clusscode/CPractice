#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("*****1��play     0��exit*****\n");
	printf("*****************************\n");
}
void game()
{
	char board[ROW][COL];
	int win = 0;
	//��ʼ��boardΪ' '���Դ���Ϊ����
	IntiBoard(board, ROW, COL);
	InputBoard(board, ROW, COL);
	do
	{
		//�����
		PlayerMove(board, ROW, COL);
		//�������֮��Ҫ��ӡ����
		InputBoard(board, ROW, COL);
		win = Check(board, ROW, COL);
		if (win != 'C')
		{
			break;
		}
		//������
		ConputerMove(board, ROW, COL);
		InputBoard(board, ROW, COL);
		win = Check(board, ROW, COL);
		if (win != 'C')
		{
			break;
		}
	} while (1);
	if (win == '*')
	{
		printf("��һ�ʤ��\n");
	}
	else if (win == '#')
	{
		printf("���Ի�ʤ!\n");
	}
	else
	{
		printf("ƽ�֣�\n");
	}
}
void test()
{
	int choise = 0;
	srand((unsigned int)time(NULL));
	//�˵���1����ʼ��Ϸ  0���˳���Ϸ
	
	//����ѡ�񣬲��÷�֧���switch
	do
	{
		menu();
		printf("��ѡ��Ҫ���еĲ���:>");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			game();
			break;
		case 0:
			printf("��Ϸ���˳�!\n");
			break;
		default:
			printf("�Ƿ�ѡ����������룡\n");
		}
	} while (choise);
}
int main()
{
	test();
	return 0;
}