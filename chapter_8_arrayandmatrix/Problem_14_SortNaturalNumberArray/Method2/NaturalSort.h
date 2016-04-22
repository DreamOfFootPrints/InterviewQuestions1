#include<iostream>
using namespace std;


void NaturalSort(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return;
	}
	for (int i = 0; i < length; ++i)
	{
		while (arr[i] != i + 1)
		{
			swap(arr[i], arr[arr[i] - 1]);
		}
	}
}