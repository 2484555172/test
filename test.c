#define _CRT_SECURE_NO_WARNINGS
#include"game.h"
#include<string.h>
 //����������

void game()
{
	char ret;
	char board[ROW][COL] = {0};//��������
	Initboard(board,ROW,COL);//��ʼ������
	Playboard(board, ROW, COL);//��ӡ����
	while (1)
	{
		PlayerMove(board, ROW, COL);//�������
		Playboard(board, ROW, COL); //��ӡ����
		ret = IsWin(board, ROW, COL);  //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
		ComputerMove(board, ROW, COL);//��������
		Playboard(board, ROW, COL); //��ӡ����
		ret = IsWin(board, ROW, COL); //�ж���Ӯ
		if (ret != 'C')
		{
			break;
		}
    }
	if (ret == '*')
	{
		printf("���Ӯ\n");
	}
	else if (ret == '#')
	{
		printf("����Ӯ\n");
	}
	else
	{
		printf("ƽ��\n");
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
		printf("��ѡ��:>");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			game();//printf("������Ϸ\n");
			break;
		case 0:
			printf("�˳���Ϸ\n");
			break;
		default:
			printf("ѡ�����������ѡ��\n");
			break;
		}
	} while (input);
}
int main(void)
{
	Test();
	return 0;
}
