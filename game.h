#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<windows.h>

#define ROW 5
#define COL 5

void IntiBoard(char board[ROW][COL], int row, int col);
/*打印棋盘，使其出现这样的棋盘
	   |   |
	---|---|---
	---|---|---
	   |   |
	*/
void InputBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ConputerMove(char board[ROW][COL], int row, int col);
int Check(char board[ROW][COL], int row, int col);