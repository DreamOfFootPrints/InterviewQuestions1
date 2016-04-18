#include<iostream>
using namespace std;


int SortMinLength(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return 0;
	}
	int max = arr[0];
	int noMaxIndex = -1;
	for (int i = 1; i < length; ++i)
	{
		if (arr[i] >= max)
		{
			max = arr[i];
		}
		else
		{
			noMaxIndex = i;
		}
	}
	if (noMaxIndex == -1)
	{
		return 0;
	}

	int noMinIndex = -1;
	int min = arr[length - 1];
	for (int i = length - 2; i >= 0; --i)
	{
		if (arr[i] <= min)
		{
			min = arr[i];
		}
		else
		{
			noMinIndex = i;
		}
	}

	return noMaxIndex - noMinIndex + 1;
}