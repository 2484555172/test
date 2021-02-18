#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"

void Initboard(char board[ROWS][COLS], int rows, int cols,char ch)
{
	int i, j;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = ch;
		}
	}
}

void Displayboard(char board[ROWS][COLS], int row, int col)
{
	int i, j;
	for (i = 0; i <= 9; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);//行号
		for (j = 1; j <= col; j++)
		{
			printf("%c ", board[i][j]);
		}
		printf("\n");
	}
}
void SetMine(char board[ROWS][COLS], int row, int col)
{
	int x, y;
	int count = easy_count;
	while (count)
	{
		x = rand() % row + 1;
		y = rand() % col + 1;
		if (board[x][y] == '0')
		{
			board[x][y] = '1';
			count--;
		}
	}
}
int count_mine(char mine[ROWS][COLS], int x, int y)
{
	return mine[x][y - 1] +
		mine[x - 1][y - 1] +
		mine[x - 1][y] +
		mine[x - 1][y + 1] +
		mine[x][y + 1] +
		mine[x + 1][y + 1] +
		mine[x + 1][y] +
		mine[x + 1][y - 1] - 8 * '0';

}
void Sweep_Mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int Win = 0;
	while (Win < ROW*COL - easy_count)
	{
		printf("请输入要扫的坐标:>");
		scanf("%d%d", &x, &y);
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("很遗憾，你被炸死了。\n");
				Displayboard(mine, ROW, COL);
				break;
			}
			else
			{
				int Count = count_mine(mine, x, y);
				show[x][y] = Count + '0';
				Displayboard(show, ROW, COL);
				Win++;
			}
		}
		else
		{
			printf("输入非法，请重新输入！！！\n");
		
		}
	}
	if (Win == ROW * COL - easy_count)
	{
		printf("恭喜你，扫雷成功！\n");
	}

}