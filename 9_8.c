#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	/*int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
//	int* p = arr+1;
//	p+=4;
//	printf("%d\n", *p);*/
//	int i, j;
//	int arr[][4] = { {1,2},{3,4},{5,6} };
//	for (i = 0; i < 3; i++)
//	{
//		for (j = 0; j < 4; j++)
//		{
//			printf("%d ", arr[i][j]);
//		}
//		printf("\n");
//	}
//	return 0;
//}
int main()
{
	int i, j;
	int arr[][4] = { {1,2,5},{3,4,9},{5,6,5,7} };
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("arr[%d][%d]=%p ",i,j ,&arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}