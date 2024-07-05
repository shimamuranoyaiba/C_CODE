#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COL 5

void menu();

void game();

//棋盘初始化
void Initboard(char board[ROW][COL], int row, int col);

//打印棋盘
void Displayboard(char board[ROW][COL], int row, int col);

//玩家下棋
void Playermove(char board[ROW][COL], int row, int col);

//电脑下棋
void Computermove(char board[ROW][COL], int row, int col);

//判断玩家获胜
int Playerwin(char board[ROW][COL], int row, int col);

//判断电脑获胜
int Computerwin(char board[ROW][COL], int row, int col);
