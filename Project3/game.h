#include <stdio.h>
#include<stdlib.h>
#include<time.h>
#pragma once
#define ROW 3// ������
#define COL 3// ������
void  InitBoard(char board[ROW][COL], int row, int col);//��������
void DisplayBoard(char board[ROW][COL], int row, int col);
void PlayerMove(char board[ROW][COL], int row, int col);
void ComputerMove(char board[ROW][COL], int row, int col);
char Iswin(char board[ROW][COL], int row, int col);

//��������������Ϸ״̬
//���Ӯ'*'
//����Ӯ'#'
//ƽ��'Q'
//����' c'