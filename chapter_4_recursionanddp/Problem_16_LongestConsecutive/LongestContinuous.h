#include<iostream>
using namespace std;
#include<unordered_map>
#include<map>

int Max(int a, int b)
{
	return a > b ? a : b;
}

int Merge(map<int, int>& map, int less, int more)
{
	int left = less - map[less] + 1;
	int right = more + map[more] - 1;
	int len = right - left + 1;
	map[left] = len;
	map[right] = len;
	return len;
}


int longestContinuous(int arr[], int len)
{
	if (arr == NULL || len <= 0)
		return 0;
	int max = 1;/*(int)0x80000000;*/
	map<int, int> map;
	for (int i = 0; i < len; i++)
	{
		if (!map.count(arr[i]))
		{
			map[arr[i]] = 1;
			if (map.count(arr[i] - 1))
			{
				max = Max(max, Merge(map, arr[i] - 1, arr[i]));
			}
			if (map.count(arr[i] + 1))
			{
				max = Max(max, Merge(map, arr[i], arr[i]+1));
			}
		}
	}
	return max;
}