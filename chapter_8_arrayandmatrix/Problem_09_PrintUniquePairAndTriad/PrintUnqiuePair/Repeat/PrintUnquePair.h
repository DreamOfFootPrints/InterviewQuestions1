#include<iostream>
using namespace std;

void PrintUnqiuePair(int arr[], int len, int key)
{
	if (arr == NULL || len <= 0)
	{
		return;
	}
	for (int i = 0; i < len - 1; ++i)
	{
		for (int j = i + 1; j < len; ++j)
		{
			if (arr[i] + arr[j] == key)
			{
				cout << arr[i] << " " << arr[j] << endl;
			}
		}
	}
}