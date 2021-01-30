#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void menu()
{
	printf("*********************************\n");
	printf("*****1、play         0、exit*****\n");
	printf("*********************************\n");
}
void game()
{
	//定义数组
	char my[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	//初始化数组
	IntiBoard(my, ROWS, COLS, '0');
	IntiBoard(show, ROWS, COLS, '*');
	//打印棋盘
	//InputBoard(my, ROW, COL);
	InputBoard(show, ROW, COL);
	//布雷
	GiveBoard(my, ROW, COL);
	InputBoard(my, ROW, COL);
	//扫雷
	FindBoard(my, show, ROW, COL);

}
void test()
{
	int choise = 0;
	srand((unsigned int) time (NULL));
	
	do
	{
		menu();
		printf("请进行您的选择:>");
		scanf("%d", &choise);
		switch (choise)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏！\n");
			break;
		default:
			printf("非法选项，请重新输入!\n");
			break;
		}
	} while (choise);
}
int main()
{
	test();
	return 0;
}