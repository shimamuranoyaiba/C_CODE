#pragma once

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define ROW 5
#define COL 5

void menu();

void game();

//���̳�ʼ��
void Initboard(char board[ROW][COL], int row, int col);

//��ӡ����
void Displayboard(char board[ROW][COL], int row, int col);

//�������
void Playermove(char board[ROW][COL], int row, int col);

//��������
void Computermove(char board[ROW][COL], int row, int col);

//�ж���һ�ʤ
int Playerwin(char board[ROW][COL], int row, int col);

//�жϵ��Ի�ʤ
int Computerwin(char board[ROW][COL], int row, int col);
