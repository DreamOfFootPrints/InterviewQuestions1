#include<iostream>
using namespace std;


void PrintUnqiuePair(int arr[], int length,int key)
{
	if (arr == NULL || length <= 0)
	{
		return;
	}
	int left = 0;
	int right = length - 1;
	while (left < right)
	{
		if (arr[left] + arr[right] < key)
		{
			left++;
		}
		else if (arr[left] + arr[right] == key)
		{
			if (left == 0 || arr[left - 1] != arr[left])
			{
				cout << arr[left] << " " << arr[right] << endl;
			}
			left++;
			right--;
		}
		else
		{
			right--;
		}
	}
}