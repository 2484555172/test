#define _CRT_SECURE_NO_WARNINGS 1
#include"game.h"
            //����ɨ��
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
	SetMine(mine, ROW, COL);//������
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��!!!\n");
			break;
		}
	} while (input);
}
int main(void)
{
	Test();
	return 0;
}