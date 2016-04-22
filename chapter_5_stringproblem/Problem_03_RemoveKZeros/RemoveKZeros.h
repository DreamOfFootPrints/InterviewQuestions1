#include<iostream>
#include<string>
using namespace std;



void Clear(string& str, int left, int right)
{
	str.erase(left, right);
}

string RemoveKZeros(string str, int k)
{
	if (str == "" || k <= 0)
		return str;
	int start = -1;
	int match = 0;
	for (int i = 0; i < str.length(); ++i)
	{
		if (str[i] == '0')
		{
			start = start == -1 ? i : start;
			match++;
		}
		else
		{
			if (match == k)
			{
				Clear(str, start, i-1);
			}
			match = 0;
			start = -1;
		}
		
	}
	if (match == k)
	{
		Clear(str, start, str.length() - 1);
	}
	return str;
}


