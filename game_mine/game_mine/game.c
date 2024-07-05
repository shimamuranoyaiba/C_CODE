#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("\n我嘞个大雷啊快来扫!!\n");
	printf("********************\n");
	printf("** 1.start 0.exit **\n");
	printf("********************\n");


}

void Initboard(char arr[ROWS][COLS], int rows, int cols, char set)
{
	int i = 0;
	for (i = 0; i < rows; i++)
	{
		int j = 0;
		for (j = 0; j < cols; j++)
		{
			arr[i][j] = set;
		}
	}

}

void Displayboard(char arr[ROWS][COLS], int row, int col)
{
	printf("\n---------------------\n");
	int i = 0;
	//打印第一行的列坐标
	printf("0 | ");
	for (i = 1; i <= col; i++)
	{
		printf("%d ", i);
		
	}
	printf("\n--|------------------\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d | ", i);
		int j = 0;
		for (j = 1; j <= col; j++)
		{
			printf("%c ", arr[i][j]);
		}
		printf("\n");
	}
	printf("---------------------\n\n");
}

void Setmine(char mine[ROWS][COLS], int row, int col)
{
	int count = EASY;
	while (count)
	{
		int x = rand() % row + 1;
		int y = rand() % col + 1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count--;
		}

	}
}

void Count_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int x, int y, int* p)
{
	++*p;
	int num = 0;
	int i = 0;
	for (i = -1; i < 2; i++)
	{
		int j = 0;
		for (j = -1; j < 2; j++)
		{
			if (mine[x + i][y + j] == '1')
			{
				num++;
			}
		}
	}

	show[x][y] = num + '0';
	
	if (num == 0)
	{
		show[x][y] = ' ';
		int i = 0;
		int j = 0;
		for (i = -1; i < 2; i++)
		{
			for (j = -1; j < 2; j++)
			{
				if (1 <= x + i && x + i <= ROW && 1 <= y + j && y + j <= COL)
				{
					if (show[x + i][y + j] == '*' || show[x + i][y + j] == '#')
					{
						Count_mine(mine, show, x + i, y + j, p);
					}
				}
			}
		}
	}
}

int Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int input = 0;
	int win = 0;
	int count = EASY;
	while (win < row * col - count)
	{
		printf("请选择排雷或进行标记:排雷 请输入非0 / 标记雷 请输入0\n");
		scanf("%d", &input);
		
		
		if (input)
		{
			printf("请输入排雷坐标:> \n");
		}
		else
			printf("请输入标记雷坐标:> \n");
		
			scanf("%d %d", &x, &y);
		if (x > 0 && y > 0 && x <= row && y <= col)
		{
			if (show[x][y] == '*' || show[x][y] == '#')
			{
				if (input)
				{
					if (mine[x][y] == '1')
					{
						Displayboard(mine, ROW, COL);
						return 0;
					}
					else
					{

						//判断所排雷的坐标是否有雷，有几个
						Count_mine(mine, show, x, y, &win);


					}
				}
				else
					if (show[x][y] == '*')
					{
						show[x][y] = '#';
					}
					else
						printf("坐标已标记为雷，请重新输入\n");
				
			}
			else
			{
				printf("坐标已扫过，请重新输入坐标\n");
			}
		}
		else
			printf("坐标非法，请重新输入坐标\n");
		Displayboard(show, ROW, COL);
	}
	return 1;

}

void game()
{
	printf("\n开始扫雷\n");
	char mine[ROWS][COLS] = { 0 };
	char show[ROWS][COLS] = { 0 };
	Initboard(mine, ROWS, COLS, '0');
	Initboard(show, ROWS, COLS, '*');
	
	Setmine(mine, ROW, COL);
	
	Displayboard(show, ROW, COL);

	if (Findmine(mine, show, ROW, COL))
	{
		printf("恭喜你，尼玛被救了\n");
	}
	else
		printf("boom!尼玛炸了！\n");


}

