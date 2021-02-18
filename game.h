#pragma once

#include<stdio.h>
#include<stdlib.h>
#include<time.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define easy_count 10

void Initboard(char board[ROWS][COLS],int rows,int cols,char ch);
void Displayboard(char board[ROWS][COLS],int row,int col);
void SetMine(char board[ROWS][COLS],int row,int col);
void Sweep_Mine(char mine[ROWS][COLS],char show[ROWS][COLS], int row, int col);