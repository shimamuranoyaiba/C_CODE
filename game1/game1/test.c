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
			printf("��ʼ��Ϸ\n");
			game();
		}
		else if (input == 0)
		{
			printf("��Ϸ����\n");
			break;
		}
		else
			printf("�����������������\n");
	}

	return 0;
}