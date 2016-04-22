#include<iostream>
using namespace std;


int GeteLessIndex(int arr[], int length)
{
	if (arr == NULL | length < 0)
	{
		return -1;
	}
	if (arr[0] < arr[1])
		return 0;
	if (arr[length - 1] < arr[length - 2])
		return length - 1;

	int left = 1;
	int right = length - 2;
	while (left <= right)//这种写法要好理解一点
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] < arr[mid - 1] && arr[mid] < arr[mid + 1])
		{
			return mid;
		}
		else if (arr[mid]>arr[mid-1])
		{
			right = mid - 1;
		}
		else
		{
			left = mid + 1;
		}
	}
	return -1;
}