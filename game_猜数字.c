#define _CRT_SECURE_NO_WARNINGS 1


#include“ game.h”
//猜数字

void PLAY_game()
{
	int n = 0;
	int num;
	n = rand() % 100 + 1;
	while (1)
	{
		printf("请猜一个1~100的数:>");
		scanf("%d", &num);
		if (num < n)
		{
			printf("猜小了!\n");
		}
		else if (num > n)
		{
			printf("猜大了!\n");
		}
		else
		{
			printf("恭喜你,猜对啦.!!!\n");
			break;
		}
	}
}
