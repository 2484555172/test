#define _CRT_SECURE_NO_WARNINGS 1


#include"game.h"


void PLAY_game()
{
	int n = 0;
	int num;
	n = rand() % 100 + 1;
	while (1)
	{
		printf("���һ��1~100����:>");
		scanf("%d", &num);
		if (num < n)
		{
			printf("��С��!\n");
		}
		else if (num > n)
		{
			printf("�´���!\n");
		}
		else
		{
			printf("��ϲ��,�¶���.!!!\n");
			break;
		}
	}
}