#include<iostream>
using namespace std;



int CurMin(int arr[], int left, int right)
{
	int min = arr[left];
	for (int i = left+1; i < right; i++)
	{
		if (min > arr[i])
		{
			min = arr[i];
		}
	}
	return min;
}


int Min(int a, int b)
{
	return a < b ? a : b;
}


bool g_InvalidInput = false;
int GetMin(int arr[], int len)
{
	g_InvalidInput = false;
	if (arr == NULL || len <= 0)
	{
		g_InvalidInput = true;
		return 0;
	}
	int left = 0;
	int right = len - 1;
	while (left < right)
	{
		if (arr[left] < arr[right])
		{
			break;
		}
		if (right - left == 1)
		{
			break;
		}
		int mid = left + (right - left) / 2;
		if (arr[left] == arr[right] && arr[left] == arr[mid])
		{
			return CurMin(arr, left, right);
		}
		else if (arr[left]<arr[mid])
		{
			left = mid;
		}
		else
		{
			right = mid;
		}
	}
	return Min(arr[left], arr[right]);
}

