#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int digitsum(int a)
//{
//	int remain = a % 10;
//	if (a / 10 > 0)
//	{
//		return remain + digitsum(a / 10);
//	}
//	else
//	{
//		return a % 10;
//	}
//}
//int main()
//{
//
//	int answer = 0;
//	scanf("%d", &answer);
//	printf("%d\n", digitsum(answer));
//	return 0;
//}
int func(int n,int k)
{
	if (k == 0)
		return 1;
	if (k > 0)
	{
		return n * func(n, k - 1);
	}
}
int main()
{
	int a = 3;
	int b = 3;
	printf("%d\n", func(a, b));
	return 0;
}