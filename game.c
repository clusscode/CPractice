#define _CRT_SECURE_NO_WARNINGS 1
#include "game.h"

int win = 0;
void IntiBoard(char board[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}
}
void InputBoard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= row; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void GiveBoard(char board[ROWS][COLS], int row, int col)
{
	int count = COUNT;//count��ʾ����
	while (count)//��count = 0ʱ�˳�ѭ��
	{
		int x = rand() % row + 1;//row�˴�Ϊ9������Ҫ��0-9���10��������ȡ�����
		int y = rand() % col + 1;
		if ( board[x][y] ==  '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int Message(char my[ROWS][COLS], int x, int y)
{
	return my[x - 1][y - 1] +
		my[x - 1][y] + my[x - 1][y + 1] +
		my[x][y - 1] + my[x][y + 1] +
		my[x + 1][y - 1] + my[x + 1][y] +
		my[x + 1][y + 1] - 8 * '0';
}
void OpenBoard(char my[ROWS][COLS], char show[ROWS][COLS], int x, int y, int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = -1; i < 2; i++)
	{
		for (j = -1; j < 2; j++)
		{
			if (i != 0 && j != 0)
			{
				if (x + i >= 1 && x + i <= row && y + i >= 1 && y + i <= col)
				{
					if (show[x + i][y + j] == '*' && my[x + i][y + j] != '1')
					{
						int count = Message(my, x+i, y+j);
						if (count != 0)
						{
							show[x + i][y + j] = count + '0';
							win++;
						}
						else
						{
							show[x + i][y + j] = ' ';
							win++;
							OpenBoard(my, show, x + i, y + j, row, col);
						}
					}
				}
			}
		}
	}
}
void FindBoard(char my[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x, y;
	
	int count = 0;

	while (win < row * col - COUNT)
	{
		printf("������Ŀ������:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (my[x][y] == '1')
			{
				printf("���ź����㱻ը���ˣ���Ϸ������\n");
				InputBoard(my, ROW, COL);
				break;
			}
			else
			{
				count = Message(my, x, y);
				show[x][y] = count + '0';
				OpenBoard(my, show, x, y, row, col);
				InputBoard(show, ROW, COL);
				win++;
			}
		}
		else
		{
			printf("�Ƿ����꣬���������룡\n");
		}
	}
	if (win == row * col - COUNT)
	{
		printf("��ϲ�㣬���ʤ��!\n");
		InputBoard(my, ROW, COL);
	}
}
