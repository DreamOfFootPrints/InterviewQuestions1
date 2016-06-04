#include<iostream>
using namespace std;


int Min(int a, int b)
{
	return a < b ? a : b;
}

bool g_InvalideInput = false;
int GetMin(int arr[], int len)
{
	g_InvalideInput = false;
	if (arr == NULL || len <= 0)
	{
		g_InvalideInput = true;
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
		if (arr[left] == arr[mid]&&arr[mid]==arr[right])
		{
			while (left < mid)
			{
				if (arr[left] == arr[right])
				{
					left++;
				}
				else if (arr[left]<arr[right])
				{
					return arr[left];
				}
				else
				{
					right = mid;
					break;
				}
			}
		}
		else if (arr[left] >= arr[mid])
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
