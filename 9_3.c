#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//        int n;
//    pos_1:
//        printf("请输入一个正整数：");
//        scanf("%d", &n);
//        if (n < 0)
//        {
//            printf("输入错误！\n");
//            goto pos_1;
//        }
//        printf("成功输入正整数：%d\n", n);
//	return 0;
//}
//int main()
//{
//	int count = 0;
//	int n = 0;
//	while (n <= 100)
//	{
//		if (n / 10 == 9)
//		{
//			printf("%d\t", n);
//			count++;
//		}
//		else if (n % 10 == 9)
//		{
//				printf("%d\t", n);
//				count++;
//		}
//		n++;
//	}
//	printf("\n");
//	printf("%d\n", count);
//	return 0;
//}
//int main()
//{
//	int n = 0;
//	double sum = 0;
//	for (n = 1;n<100;n++)
//	{
//		if (n % 2 == 1)
//		{
//			sum = sum + (1.0 / (n + 1));
//		}
//		else
//		{
//			sum = sum - (1.0 / (n + 1));
//		}
//	}
//	printf("%lf\n", sum);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int arr[] = { 4,78,34,3,246,56,2,23,6,1 };
//	for (i = 1; i < 10; i++)
//	{
//		if (arr[0] < arr[i])
//		{
//			arr[0] = arr[i];
//		}
//	}
//	printf("%d\n", arr[0]);
//	return 0;
//}
//int main()
//{
//	int i = 0;
//	int j = 0;
//	int sum = 0;
//	for (i = 1; i < 10; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d * %d = %-2d  ", j, i,sum);
//		}
//		printf("\n");
//	}
//
//	return 0;
//}
