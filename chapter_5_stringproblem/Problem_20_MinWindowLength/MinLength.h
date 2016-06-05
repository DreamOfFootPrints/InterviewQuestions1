#include<iostream>
using namespace std;
#include<string>


int Min(int a, int b)
{
	return a < b ? a : b;
}



int MinLength(string str1, string str2)
{
	if (str1.c_str() == NULL || str2.c_str() == NULL || str1.size() < str2.size())
	{
		return 0;
	}

	int* map = new int[256]();
	for (int i = 0; i < str2.size(); i++)
	{
		map[str2[i]]++;
	}
	int left = 0;
	int right = 0;
	int match = str2.size();
	int minLen = (int)0x7FFFFFFF;
	while (right < str1.size())
	{
		map[str1[right]]--;
		if (map[str1[right]] >= 0)
		{
			match--;
		}
		if (match == 0)
		{
			while (map[str1[left]] < 0)
			{
				map[str1[left++]]++;
			}
			minLen = Min(minLen, right - left + 1);
			match++;
			map[str1[left++]]++;
		}
		right++;
	}
	return minLen == (int)0x7FFFFFFF ? 0 : minLen;
}