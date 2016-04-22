#include<iostream>
using namespace std;


int MissNum(int arr[], int length)
{
	if (arr == NULL || length <= 0)
	{
		return 0;
	}
	int left = 0;//left�����ҵı߽�
	int right = length;//right������߽߱磬���Ǳ�����
	int index = 0;
	while (index < right)
	{
		if (arr[index] == index + 1)
		{
			left++;
			index++;
		}
		else if (arr[index] <= left)
		{
			std::swap(arr[index], arr[--right]);
		}
		else if (arr[index]>=right)
		{
			std::swap(arr[index], arr[--right]);
		}
		else
		{
			int tmp = arr[index];
			if (arr[tmp - 1] == tmp)
			{
				std::swap(arr[index], arr[--right]);
			}
			else
			{
				std::swap(arr[index], arr[tmp - 1]);
			}
		}
	}
	return left + 1; 
}