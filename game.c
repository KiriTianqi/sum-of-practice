#define _CRT_SECURE_NO_WARNINGS
#include "game.h"
void init_board(int row, int col)
{
	int i = 0, j = 0,k = 0;
	int board[row][col];
	for (;;)
	for (i = 0; i < ROW; i++)
	{
		for (j = 0; j < COL; j++)
		{
			printf(" %c ", ' ');
			if (j < COL - 1)
			{
				printf("|");
			}
		}
		if (i < ROW - 1) 
		{
			printf("\n");
			for (j = 0; j < COL; j++)
			{
				printf("---");
				if (j < COL - 1)
				{
					printf("|");
				}
			}
		}
		printf("\n");
	}
}