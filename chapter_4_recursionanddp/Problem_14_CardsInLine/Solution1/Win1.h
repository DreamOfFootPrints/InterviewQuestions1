#include<iostream>
using namespace std;


int Max(int a, int b)
{
	return a > b ? a : b;
}

int Min(int a, int b)
{
	return a < b ? a : b;
}

int First(int arr[], int left, int right);
int Second(int arr[], int left, int right);


int First(int arr[], int left, int right)
{
	if (left==right)
		return arr[left];
	return Max(arr[left] + Second(arr, left + 1, right), arr[right] + Second(arr, left, right - 1));
}

int Second(int arr[], int left, int right)
{
	if (left==right)
		return 0;
	return Min(First(arr, left + 1, right), First(arr, left, right - 1));
}


int Win1(int arr[], int len)
{
	if (arr == NULL || len <= 0)
		return 0;
	return Max(First(arr, 0, len-1), Second(arr, 0, len-1));
}