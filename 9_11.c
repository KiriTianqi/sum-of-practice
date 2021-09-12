#define _CRT_SECURE_NO_WARNINGS

#include "game.h"

void menu()
{
	printf("************************************\n");
	printf("******  1. Play（开始游戏）   ******\n");
	printf("******  0. Exit（退出游戏）   ******\n");
	printf("************************************\n");
}
void game()
{
	char board[ROW][COL];
	initboard(board, ROW, COL);
	displayboard(board, ROW, COL);
	char ret = 0;
	while (1)
	{
		playermove(board, ROW, COL);//player's turn to move
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
		computermove(board, ROW, COL);//computer's turn to move
		displayboard(board, ROW, COL);
		ret = iswin(board, ROW, COL);
		if (ret != 'c')
		{
			break;
		}
	}
	if (ret == '*')
	{
		printf("You Win!!\n");
	}
	else if (ret == '#')
	{
		printf("Computer Win!!\n");
	}
	else
	{
		printf("平局!!\n");
	}
}

int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("Please enter the number: ");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
			printf("Now starting the game\n");
			game();
			break;
		case 0:
			printf("Exiting the game completed\n");
			break;
		default:
			printf("The number entered is illegal\n");
			break;

		}
	} while (input);
	return 0;
}