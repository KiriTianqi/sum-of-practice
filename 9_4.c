#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <string.h>

//int main()
//{
//	int i, j,k,sum;
//	scanf("%d", &k);
//	for (i = 1; i <= k; i++)
//	{
//		for (j = 1; j <= i; j++)
//		{
//			sum = i * j;
//			printf("%d x %d = %-2d ", j, i, sum);
//		}
//		printf("\n");
//	}
//	return 0;
//}
//void reverse_string(char arr[],int sz)
//{
//	int i = 0, j = sz-1,mid =0;
//	for (;i<j;i++,j--)
//	{
//		mid = arr[i];
//		arr[i] = arr[j];
//		arr[j] = mid;
//	}
//}
//int main()
//{
//	char arr1[] = "abcdefg";
//	int size = strlen(arr1);
//	reverse_string(arr1, size);
//	printf("%s\n", arr1);
//	return 0;
//}
//void reverse(char *arr)
//{
//	int mid = 0;
//	int left = 0, right = strlen(arr) - 1;
//	if (right - left==1||right - left == 2)
//	{
//		mid = arr[left];
//		arr[left] = arr[right];
//		arr[right] = mid;
//		left++;
//		right--;
//	}
//		reverse(arr+1);
//
//}
//
//int main()
//{
//	char arr1[] = "abcdefg";
//	reverse(arr1);
//	printf("%s\n", arr1);
//	return 0;
//}