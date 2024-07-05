#pragma once

#include <stdio.h>
#include <time.h>
#include <stdlib.h>

#define ROW 9
#define COL 9

#define ROWS ROW+2
#define COLS COL+2

#define EASY 5

void menu();

void game();

//初始化 并标注初始化为'0'或者'*'
void Initboard(char arr[ROWS][COLS], int rows, int cols, char set);

void Displayboard(char arr[ROWS][COLS], int row, int col);

void Setmine(char mine[ROWS][COLS], int row, int col);

int Findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col);

void Count_mine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col, int* p);