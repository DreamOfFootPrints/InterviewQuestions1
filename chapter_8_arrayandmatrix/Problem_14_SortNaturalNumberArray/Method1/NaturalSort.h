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
		int cur = arr[i];
		while (arr[i] != i + 1)
		{
			int tmp = arr[cur - 1];
			arr[cur - 1] = cur;
			cur = tmp;
		}
	}
}