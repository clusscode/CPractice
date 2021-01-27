#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*****************************\n");
	printf("*****1、play     0、exit*****\n");
	printf("*****************************\n");
}
void game()
{
	char board[ROW][COL];
	int win = 0;
	//初始化board为' '，以此作为棋盘
	IntiBoard(board, ROW, COL);
	InputBoard(board, ROW, COL);
	do
	{
		//玩家走
		PlayerMove(board, ROW, COL);
		//玩家走完之后要打印坐标
		InputBoard(board, ROW, COL);
		win = Check(board, ROW, COL);
		if (win != 'C')
		{
			break;
		}
		//电脑走
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
		printf("玩家获胜！\n");
	}
	else if (win == '#')
	{
		printf("电脑获胜!\n");
	}
	else
	{
		printf("平局！\n");
	}
}
void test()
{
	int choise = 0;
	srand((unsigned int)time(NULL));
	//菜单，1、开始游戏  0、退出游戏
	
	//多种选择，采用分支语句switch
	do
	{
		menu();
		printf("请选择要进行的操作:>");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			game();
			break;
		case 0:
			printf("游戏已退出!\n");
			break;
		default:
			printf("非法选项！请重新输入！\n");
		}
	} while (choise);
}
int main()
{
	test();
	return 0;
}