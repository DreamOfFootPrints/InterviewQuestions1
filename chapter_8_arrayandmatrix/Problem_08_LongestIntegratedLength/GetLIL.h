#include<iostream>
using namespace std;


int Max(int a, int b)
{
	return a > b ? a : b;
}


void BubbleSort(int arr[], int length)
{
	if (arr == NULL || length <= 0)
		return;
	for (int i = 0; i < length-1; ++i)
	{
		for (int j = 0; j < length - i - 1; ++j)
		{
			if (arr[j] > arr[j + 1])
				std::swap(arr[j + 1], arr[j]);
		}
	}
}


bool IsIntegrate(int arr[], int left, int right)
{
	int* newArr = new int[right - left + 1]();
	for (int i = 0; i < right - left + 1; ++i)
	{
		newArr[i] = arr[left++];
	}
	BubbleSort(newArr, right - left + 1);
	for (int i = 0; i < right - left ; ++i)
	{
		if ((newArr[i + 1] - newArr[i]) != 1)
		{
			delete[] newArr;
			return false;
		}
	}
	delete[] newArr;
	return true;
}




int GetLIL1(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return 0;
	}
	int len = 0;
	for (int i = 0; i < length; ++i)
	{
		for (int j = i; j < length; ++j)
		{
			if (IsIntegrate(arr,i,j))
			{
				len = Max(len, j - i+1);
			}
		}
	}
	return len;
}