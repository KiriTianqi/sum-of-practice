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
		printf("\n����������: ");
		scanf("%d%d", &x, &y);
		printf("\n");
		if (x >= 1 && x <= row && y >= 1 && y <= col)
		{
			if (mine[x][y] == '1')
			{
				printf("\n���ź����㱻����ը���� ! ! !\n");
				printf("\n�������������£�\n");
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
			printf("\n���겻�Ϸ�,��������������\n");
		}
	}
	if (win == row * col - EASY)
	{
		printf("\n����ȫ���Ų���ϣ���ϲ�㣡\n");
	}
}