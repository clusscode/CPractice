#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define ROW 5
#define COL 5

void IntiBoard(char board[ROW][COL], int row, int col);
/*��ӡ���̣�ʹ���������������
	   |   |
	---|---|---
	---|---|---
	   |   |
	*/
void InputBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ConputerMove(char board[ROW][COL], int row, int col);
int Check(char board[ROW][COL], int row, int col);