#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<string.h>
 //测试三子棋

void game()
{
	char ret;
	char board[ROW][COL] = {0};//创建数组
	Initboard(board,ROW,COL);//初始化数组
	Playboard(board, ROW, COL);//打印棋盘
	while (1)
	{
		PlayerMove(board, ROW, COL);//玩家走棋
		Playboard(board, ROW, COL); //打印棋盘
		ret = IsWin(board, ROW, COL);  //判断输赢
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//电脑走棋
		Playboard(board, ROW, COL); //打印棋盘
		ret = IsWin(board, ROW, COL); //判断输赢
		if (ret != 'C')
		{
			break;
		}
    }
	if (ret == '*')
	{
		printf("玩家赢\n");
	}
	else if (ret == '#')
	{
		printf("电脑赢\n");
	}
	else
	{
		printf("平局\n");
	}
}
void menu()
{
	printf("********************\n");
	printf("***1.play  0.exit***\n");
	printf("********************\n");
}
void Test()
{
	int input;
	srand((unsigned int)time(NULL));
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//printf("进入游戏\n");
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择\n");
			break;
		}
	} while (input);
}
int main(void)
{
	Test();
	return 0;
}
