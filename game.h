#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>
#include <stdlib.h>
#include <time.h>


#define ROW 3

#define COL 3

void initboard(char board[ROW][COL], int row, int col);

void displayboard(char board[ROW][COL], int row, int col);

void playermove(char board[][COL],int row,int col);

void computermove(char board[][COL], int row, int col);

char iswin(char board[][COL], int row, int col);

char isull(char board[][COL], int row, int col);