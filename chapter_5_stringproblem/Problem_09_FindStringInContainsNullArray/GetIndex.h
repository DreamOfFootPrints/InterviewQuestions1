#include<iostream>
using namespace std;
#include<string>


int GetIndex(string strs[],int length, string str)
{
	if (strs == NULL&&str.size() == 0)
	{
		return -1;
	}
	int res = -1;
	int left = 0;
	int right = length - 1;
	while (left <= right)
	{
		int mid = left + (right - left) / 2;
		if (strs[mid] == str)
		{
			res = mid;
			right = mid - 1;
		}
		else if (strs[mid].c_str()!=NULL)
		{
			if (strs[mid] > str)
			{
				right = mid - 1;
			}
			else
			{
				left = mid - 1;
			}
		}
		else
		{ 
			int cur = mid - 1;
			while (cur >= 0&&strs[cur].c_str()==NULL)
			{
				cur--;
			}
			if (cur < 0)
			{
				left = mid + 1;
			}
			else
			{
				if (strs[cur].c_str()>str)
				{
					right = mid - 1;
				}
				else if (strs[cur].c_str()==str)
				{
					res = mid;
					right = mid - 1;
				}
				else
				{
					left = mid + 1;
				}
			}
		}
	}
	return res;
}