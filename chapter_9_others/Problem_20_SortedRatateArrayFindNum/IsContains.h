#include<iostream>
using namespace std;


int IsContains(int arr[], int len, int key)
{
	if (arr == NULL || len <= 0)
		return -1;
	int left = 0;
	int right = len - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (arr[mid] == key)//二分查找只可能出现在这一个地方进行返回
		{
			return mid;
		}
		if (arr[left] == arr[mid] && arr[mid] == arr[right])
		{
			while (left != mid&&arr[left] == key)
			{
				left++;
			}
			if (left == mid)
			{
				left = mid + 1;
				continue;//这个时候mid已经不能使用了
			}
		}
		if (arr[left] != arr[mid])
		{
			if (arr[left] < arr[mid])//断点在右侧
			{
				if (arr[left] <= key&&arr[mid]>key)
				{
					right = mid;
				}
				else
				{
					left = mid + 1;
				}
			}
			else//断点在左侧
			{
				if (arr[mid] < key&&arr[right] >= key)
				{
					left = mid + 1;
				}
				else
				{
					right = mid - 1;
				}
			}
		}
		else if (arr[right] != arr[mid])
		{
			if (arr[right] > arr[mid])//断点在左侧
			{
				if (arr[mid] < key&&arr[right] >= key)
				{
					left = mid + 1;
				}
				else
				{
					right = mid - 1;
				}
			}
			else
			{
				if (arr[left] <=key&&arr[mid]>key)
				{
					right = mid - 1;
				}
				else
				{
					left = mid + 1;
				}
			}
		}
	}
	return -1;
}