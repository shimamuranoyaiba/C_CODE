#define _CRT_SECURE_NO_WARNINGS

#include <stdio.h>

//int main()
//{
//	int arr1[10] = { 1,2,3,4,5,6,7,8,9,10 };
//	int arr2[10] = { 10,9,8,7,6,5,4,3,2,1 };
//	int i = 0;
//	int sz = sizeof(arr1) / sizeof(arr1[0]);
//	for (i = 0; i < sz; i++)
//	{
//		int temp = 0;
//		temp = arr1[i];
//		arr1[i] = arr2[i];
//		arr2[i] = temp;
//	}
//
//	
//	return 0;
//}

void Init(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		arr[i] = 0;
	}

}

void print(int arr[], int sz)
{
	int i = 0;
	for (i = 0; i < sz; i++)
	{
		printf("%d ", arr[i]);
	}
	printf("\n");
}

void reverse(int arr[], int sz)
{
	
	int left = 0;
	int right = sz - 1;
	for (left = 0, right = sz - 1; left < right; left++, right--)
	{
		int temp = 0;
		temp = arr[left];
		arr[left] = arr[right];
		arr[right] = temp;
	}

}

int main()
{
	int arr[] = { 1,2,3,4,5 };
	int sz = sizeof(arr) / sizeof(arr[0]);
	Init(arr, sz);
	print(arr, sz);
	reverse(arr, sz);
	print(arr, sz);
	return 0;

}