#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"
void IntiBoard(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
			board[i][j] = ' ';
	}	
}
void InputBoard(char board[ROW][COL], int row, int col) 
{
	int i = 0, j = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			printf(" %c ", board[i][j]);
			if(j < col - 1)
				printf("|");
		}
		printf("\n");
		for (j = 0; j < col; j++)
		{
			if (i < row - 1)
			{
				printf("---");
				if(j < col - 1)
					printf("|");
			}
		}
		printf("\n");
	}
}
void PlayerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	printf("玩家走\n");
	
	while (1)
	{
		printf("请输入你要下的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (board[x - 1][y - 1] == ' ')
			{
				board[x - 1][y - 1] = '*';
				break;
			}
			else
			{
				printf("坐标已被占领，请重新选择!\n");
			}
				
		}
		else
			printf("非法坐标，请重新输入！\n");
	}
}
void ConputerMove(char board[ROW][COL], int row, int col)
{
	int x, y;
	
	printf("电脑走:>\n");
	Sleep(1000);
	while (1)
	{
		x = rand() % row;
		y = rand() % col;
			if (board[x][y] == ' ')
			{
				board[x][y] = '#';
				break;
			}
	}
}
int is_full(char board[ROW][COL], int row, int col)
{
	int i, j;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				return 0;
		}
	}
	return 1;
}
int Check(char board[ROW][COL], int row, int col)
{
	/*int i = 0;
	for (i = 0; i < row; i++)
	{
		if (board[i][0] == board[i][1] && board[i][1] == board[i][2] && board[i][1] != ' ')
			return board[i][1];
	}
	for (i = 0; i < col; i++)
	{
		if (board[0][i] == board[1][i] && board[1][i] == board[2][i] && board[1][i] != ' ')
			return board[1][i];
	}
	if (board[0][0] == board[1][1] && board[1][1] == board[2][2] && board[1][1] != ' ')
		return board[1][1];
	if (board[0][2] == board[1][1] && board[1][1] == board[2][0] && board[1][1] != ' ')
		return board[1][1];*/
	
	int i = 0, j = 0;
	//判断行相等
	for (i = 0; i < row; i++)
	{
		int count = 0;
		for (j = 0; j < col - 1; j++)
		{
			if (board[i][j] == board[i][j + 1] && board[i][j] != ' ')
				count++;
		}
		if (count == col - 1)
			return board[i][j];
	}
	//判断列相等
	for (j = 0; j < col; j++)
	{
		 int count = 0;
		for (i = 0; i < row - 1; i++)
		{
			if (board[i][j] == board[i + 1][j] && board[i][j] != ' ')
				count++;
		}
		if (count == row - 1)
			return board[i][j];
	}
	//判断对角线相等
	int count1 = 0;
	int count2 = 0;
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (i == j && board[i][j] != ' ')
				count1++;
			else if (i + j == row - 1 && board[i][j] != ' ')
				count2++;
		}
		
	}
	if (count1 == row)
			return board[0][0];
	if (count2 == row)
			return board[row - 1][0];
	//判断是否平局
	if (is_full(board, row, col) == 1)
	{
		return 'Q';
	}
	return 'C';
}