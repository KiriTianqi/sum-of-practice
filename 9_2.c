#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>

//int func(int a)
//{
//	if (a <= 2)
//		return 1;
//	else
//		return func(a - 1) + func(a - 2);
//}
//int main()
//{
//	int n = 0;
//	scanf("%d", &n);
//	printf("%d\n", func(n));
//	return 0;
// }
int main()
{
	int n, i;
	scanf("%d", &n);
	int sum1 = 1;
	int sum2 = 1;
	int sum = 0;
	if (n < 3)
		printf("1\n");
	for (i = 3; i <= n; i++)
	{
		sum = sum1 + sum2;
		sum1 = sum2;
		sum2 = sum;
	}
	printf("%d\n", sum);
	return 0;
}
