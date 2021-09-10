#define _CRT_SECURE_NO_WARNINGS
#include "game.h"

int main()
{
	printf("***********************************\n");
	printf("***********************************\n");
	printf("***********************************\n");
	printf("*****          1 PLAY         *****\n");
	printf("*****          2 EXIT         *****\n");
	printf("***********************************\n");
	printf("***********************************\n");
	printf("***********************************\n\n");
	int k = 0;
	printf("please type 1 or 2 to start and quit \n");
	while (1)
	{
		scanf("%d", &k);
		switch (k)
		{
		case 1:
		{
			char arr[ROW][COL];
			init_board(ROW, COL);
		}
			break;//start the game
		case 2:
			break;//exit the game
		default:
			printf("please type the right number \n");
			break;//try again
		}
	}

	return 0;
}