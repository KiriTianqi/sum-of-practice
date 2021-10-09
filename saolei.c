#define _CRT_SECURE_NO_WARNINGS

#include "saolei.h"

void initboard(char board[ROWS][COLS], int rows, int cols,char set)
{
	int i = 0;
	int j = 0;
	for (i = 0; i < rows; i++)
	{
		for (j = 0; j < cols; j++)
		{
			board[i][j] = set;
		}
	}

}


void displayboard(char board[ROWS][COLS], int row, int col)
{
	int i = 0;
	int j = 0;
	for (i = 0; i <= col; i++)
	{
		printf("%d ", i);
	}
	printf("\n");
	for (i = 1; i <= row; i++)
	{
		printf("%d ", i);
		for (j = 1; j <= col; j++)
		{
			printf("%c ",board[i][j]);
		}
		printf("\n");
	}
}

void setmine(char mine[][COLS], int row, int col)
{
	int count=EASY;
	while (count)
	{
		int x = rand()%row+1;
		int y = rand()%col+1;
		if (mine[x][y] == '0')
		{
			mine[x][y] = '1';
			count-- ;
		}

	}
}

static int getminecount(char mine[ROWS][COLS],int x,int y)
{
	return mine[x - 1][y] +
		mine[x - 1][y - 1] +
		mine[x][y - 1] +
		mine[x + 1][y - 1] +
		mine[x + 1][y] +
		mine[x + 1][y + 1] +
		mine[x][y + 1] +
		mine[x - 1][y + 1] - 8 * '0';

}
void findmine(char mine[ROWS][COLS], char show[ROWS][COLS], int row, int col)
{
	int x = 0;
	int y = 0;
	int win = 0;
	while (win<row*col-EASY)
	{
		printf("\n请输入坐标: ");
		scanf("%d%d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("\n很遗憾，你被地雷炸死了 ! ! !\n");
				printf("\n地雷埋藏情况如下：\n");
				printf("\n");
				displayboard(mine, row, col);
				printf("\n");
				break;
			}
			else
			{
				int count=getminecount(mine,x,y);
				show[x][y] = count+'0';
				displayboard(show, row, col);
				win++;
			}
		}
		else
		{
			printf("\n坐标不合法,请重新输入坐标\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("\n地雷全部排查完毕，恭喜你！\n");
	}
}