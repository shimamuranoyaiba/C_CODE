#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

int main()
{
	srand((unsigned int)time(NULL));
	int n = 0;
	do
	{
		menu();
		scanf("%d", &n);
		
		switch (n)
		{
		
		case 0:
			printf("�˳���Ϸ\n");
			break;
		case 1:
			game();
			break;
		default:
			printf("�����������������\n");
			break;
		}
	} while (n);

	return 0;
}