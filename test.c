#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
            //测试扫雷
void menu()
{
	printf("**********************\n");
	printf("***    1.play      ***\n");
	printf("***    0.exit      ***\n");
	printf("**********************\n");

}
void game()
{
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine,ROWS,COLS,'0');
	Initboard(show, ROWS, COLS, '*');
	//Displayboard(mine,ROW,COL);
	Displayboard(show, ROW, COL);
	SetMine(mine, ROW, COL);//布置雷
	//Displayboard(mine,ROW,COL);
	Sweep_Mine(mine,show, ROW, COL);

}
void Test()
{
	srand((unsigned int)time(NULL));
	int input;
	char ch;
	do
	{
		menu();
		printf("请选择:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("退出游戏\n");
			break;
		default:
			printf("选择错误，请重新选择!!!\n");
			break;
		}
	} while (input);
}
int main(void)
{
	Test();
	return 0;
}