#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("*********************************\n");
	printf("****   1. ��ʼ��Ϸ 0. exit   ****\n");
	printf("*********************************\n");
}

void Initboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			board[i][j] = ' ';
		}
	}
}

void Displayboard(char board[ROW][COL], int row, int col)
{
	int i = 0;
	for (i = 0; i < row; i++)
	{
		int j = 0;
		for (j = 0; j < col; j++)
		{
			//��ӡ����
			printf(" %c ", board[i][j]);
			if (j < col - 1)
				printf("|");
		}
		printf("\n");
		if (i < row - 1)
		{
			int j = 0;
			for (j = 0; j < col; j++)
			{
				printf("---");
				if (j < col - 1)
					printf("|");
			}
			printf("\n");
		}
		

	}
}

void Playermove(char board[ROW][COL], int row, int col)
{
	printf("���������\n");
	int x = 0;
	int y = 0;
	while (1)
	{
		scanf("%d %d", &x, &y);
		if (x > row || y > col || x < 1 || y < 1)
		{
			printf("���������������������\n");
		}
		else
		{
			if (board[x - 1][y - 1] == ' ')
				break;
			else
				printf("���������������ӣ�����������\n");
		}
	}
	board[x-1][y-1] = '*';

}

void Computermove(char board[ROW][COL], int row, int col)
{
	printf("��������\n");
	while (1)
	{
		int x = rand() % row;
		int y = rand() % col;
		if (board[x][y] == ' ')
		{
			board[x][y] = '#';
			break;
		}
	}
}

int Playerwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	//ƽ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				goto goon;
		}
	}
	return 2;

goon:
	for (i = 0; i < row; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != '*')
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
	}
	for (j = 0; j < col; j++)
	{
		int i = 0;
		int flag = 1;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] != '*')
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
	}

	//���Խ�����Ȼ�ʤ
	int flag = 1;

	for (i = 0; i < row && i < col; i++)
	{

		if (board[i][i] != '*')
		{
			flag = 0;
			break;
		}

	}
	if (flag == 1)
		return 1;

	//���Խ�����Ȼ�ʤ

	flag = 1;

	for (i = 0; i < row && i < col; i++)
	{

		if (board[row -1 - i][i] != '*')
		{
			flag = 0;
			break;
		}

	}
	if (flag == 1)
		return 1;

	return 0;
}

int Computerwin(char board[ROW][COL], int row, int col)
{
	int i = 0;
	int j = 0;
	int draw = 0;
	//ƽ��
	for (i = 0; i < row; i++)
	{
		for (j = 0; j < col; j++)
		{
			if (board[i][j] == ' ')
				goto goon;
		}
	}
	return 2;

goon:

	//ĳһ����Ȼ�ʤ
	for (i = 0; i < row; i++)
	{
		int j = 0;
		int flag = 1;
		for (j = 0; j < col; j++)
		{
			if (board[i][j] != '#')
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
	}
	//ĳһ����Ȼ�ʤ
	for (j = 0; j < col; j++)
	{
		int i = 0;
		int flag = 1;
		for (i = 0; i < row; i++)
		{
			if (board[i][j] != '#')
			{
				flag = 0;
				break;
			}
		}
		if (flag == 1)
			return 1;
	}
	
	//���Խ�����Ȼ�ʤ
	int flag = 1;
	
	for (i = 0; i < row && i < col; i++)
	{
		
		if (board[i][i] != '#')
		{
			flag = 0;
			break;
		}
		
	}
	if (flag == 1)
		return 1;

	//���Խ�����Ȼ�ʤ

	flag = 1;

	for (i = 0; i < row && i < col; i++)
	{

		if (board[row - i][i] != '#')
		{
			flag = 0;
			break;
		}

	}
	if (flag == 1)
		return 1;

	return 0;
}

void game()
{
	char board[ROW][COL] = {'0'};
	Initboard(board, ROW, COL);
	Displayboard(board, ROW, COL);
	while (1)
	{
		Playermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (Playerwin(board, ROW, COL))
		{
			if (Playerwin(board, ROW, COL) == 1)
			{
				printf("��һ�ʤ\n");
				break;
			}
			else
			{
				printf("ƽ��\n");
				break;
			}
		}
		Computermove(board, ROW, COL);
		Displayboard(board, ROW, COL);
		if (Computerwin(board, ROW, COL))
		{
			if (Computerwin(board, ROW, COL) == 1)
			{
				printf("���Ի�ʤ\n");
				break;
			}
			else
			{
				printf("ƽ��\n");
				break;
			}
		}
	}
}