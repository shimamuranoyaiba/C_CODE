#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	while (1)
	{
		menu();
		scanf("%d", &input);
		if (input == 1)
		{
			printf("开始游戏\n");
			game();
		}
		else if (input == 0)
		{
			printf("游戏结束\n");
			break;
		}
		else
			printf("输入错误，请重新输入\n");
	}

	return 0;
}