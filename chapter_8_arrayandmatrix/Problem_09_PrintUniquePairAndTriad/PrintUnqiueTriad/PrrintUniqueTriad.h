#include<iostream>
using namespace std;



void PrintRest(int arr[], int length,int  now,int index,int value)
{
	int left = index;
	int right = length-1;
	while (left < right)
	{
		if (arr[left] + arr[right] < value)
		{
			left++;
		}
		else if (arr[left] + arr[right] == value)
		{
			if (left == now+1 || arr[left - 1] != arr[left])
			{
				cout <<arr[now]<<" " <<arr[left] << " " << arr[right] << endl;
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


void PrintUniueTriad(int arr[],int length,int key)
{
	if (arr == NULL || length <= 0)
	{
		return;
	}

	for (int i = 0; i < length; ++i)
	{
		if (i == 0 || arr[i - 1] != arr[i])
			PrintRest(arr, length,i, i+1, key - arr[i]);
	}
}