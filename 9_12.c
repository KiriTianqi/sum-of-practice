#define _CRT_SECURE_NO_WARNINGS
#include "saolei.h"
void menu()
{
	printf("\n");
	printf("******************************************\n");
	printf("*****       1.play����ʼ��Ϸ��      ******\n");
	printf("*****       0.exit���˳���Ϸ��      ******\n");
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
	/*displayboard(mine, ROW, COL);*/  //������ʾ����������������Ҫ�鿴����ȡ��ע������
	findmine(mine, show, ROW, COL);
}
int main()
{
	srand((unsigned int)time(NULL));
	int input = 0;
	do
	{
		menu();
		printf("\n�����룺");
		scanf("%d", &input);
		switch (input)
		{
		case 1:
		{
			printf("\n��Ϸ��ʼ:\n");//��ʼ��Ϸ
			game();
			break;
		}
		case 0:
		{
			printf("\n��Ϸ���˳�!\n");//�˳���Ϸ
			break;
		}
		default:
		{
			printf("\nѡ���������ѡ��\n");//��������������
			break;
		}
		}
	} while (input);
	return 0;
}