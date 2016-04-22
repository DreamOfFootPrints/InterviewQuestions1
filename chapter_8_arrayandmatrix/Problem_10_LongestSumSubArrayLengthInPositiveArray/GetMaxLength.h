#include<iostream>
using namespace std;


int Max(int a, int b)
{
	return a > b ? a : b;
}

int GetMaxLength(int arr[], int length,int key)
{
	if (arr == NULL || length <= 0)
		return 0;
	int left = 0;
	int right = 0;
	int sum = arr[left];
	int len = 1;
	while (right < length)
	{
		if (sum < key)
		{
			right++;
			if (right == length)
				break;
			sum += arr[right];
		}
		else if (sum == key)
		{
			len = Max(len, right - left + 1);
			sum -= arr[left++];//这里只是简单的--，而不sum+=arr[++right],这样写防止了Test2的时候，right不移动的问题，并且这样写简单
		}
		else
		{
			sum -= arr[left++];
		}
	}
	return len;
}