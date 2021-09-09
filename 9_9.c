#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>
#include<string.h>
//void sort(int arr[],int size)
//{
//	int mid = 0;
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < size; i++)
//	{
//		for (j = 0;j<size;j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				mid = arr[i];
//				arr[i] = arr[j];
//				arr[j] = mid;
//			}
//		}
//		i++;
//	}
//
//}
//int main()
//{
//	int arr[] = { 9,8,7,6,5,4,3,2,1 };
//	int sz = sizeof(arr) / sizeof(arr[0]);
//	sort(arr,sz);
//	int k = 0;
//	while (k < sz)
//	{
//		printf("%d ", arr[k]);
//		k++;
//	}
//	/*printf("%d \n", sz);*/
//	return 0;
//}
//void abc(char ar[])
//{
//	int i = strlen(ar);
//	printf("%d\n", i);
//}
//int main()
//{
//	char arr[] = "abcd";
//	abc(arr);
//	return 0;
//}
//void bubble(int arr[],int size)
//{
//	int i = 0;
//	int j = 0;
//	for (i = 0; i < size-1; i++)
//	{
//		for (j = 0; j < size - 1 - i; j++)
//		{
//			int temp = 0;
//			if (arr[j] > arr[j+1])
//			temp= arr[j];
//			arr[j] = arr[j+1];
//			arr[j+1] = temp;
//		}
//
//	}
//}
//int main()
//{
//	int n = 0;
//	int arr1[] = { 9,8,7,6,5,4,3,2,1,0 };
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	bubble(arr1, sz);
//	for (n = 0; n < sz; n++) 
//
//	{
//		printf("%d ", arr1[n]);
//		}
//	return 0;
//}