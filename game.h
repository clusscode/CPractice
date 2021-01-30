#pragma once
#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9
#define ROWS ROW+2
#define COLS COL+2
#define COUNT 10


void IntiBoard(char board[ROWS][COLS], int rows, int cols, char set);
void InputBoard(char board[ROWS][COLS], int row, int col);
void GiveBoard(char board[ROWS][COLS], int row, int col);
void FindBoard(char my[ROWS][COLS], char show[ROWS][COLS], int row, int col);
