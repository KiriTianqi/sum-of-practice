#define _CRT_SECURE_NO_WARNINGS
#include "saolei.h"
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("*****       1.play（开始游戏）      ******\n");
	printf("*****       0.exit（退出游戏）      ******\n");
	printf("******************************************\n");
}//srand((unsigned int)time(NULL));
//int x = rand()%3+1;
//srand((unsigned int)time(NULL));
void game()
{
	char mine[ROWS][COLS] = {0};//store the info of mines
	char show[ROWS][COLS] = {0};//store detected info of mines

	initboard(mine, ROWS, COLS, '0');
	initboard(show, ROWS, COLS, '*');

	
	/*printf("------------------------------------------\n");*/
	displayboard(show, ROW, COL);

	setmine(mine, ROW, COL);
	/*displayboard(mine, ROW, COL);*/  //用来显示地雷埋藏情况，如需要查看可以取消注释运行
	findmine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("\n请输入：");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("\n游戏开始:\n");//开始游戏
			game();
			break;
		}
		case 0:
		{
			printf("\n游戏已退出!\n");//退出游戏
			break;
		}
		default:
		{
			printf("\n选择错误，重新选择\n");//输入了其他数字
			break;
		}
		}
	} while (input);
	return 0;
}